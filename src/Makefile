# Ian's Makefile -- point to the llvm-config of the version you want
# to build against (using the LLVM_CONFIG environment variable) and
# type make.
#
# Simple!
#
# but set the default if there is no environment version there...
ifeq ($(LLVM_CONFIG),)
	LLVM_CONFIG=llvm-config
endif

## User option to enable/disable llpe
LLPE?=OFF

# BD: made all things dependent on LLVM_HOME

LLVM_CFG = $(LLVM_HOME)/bin/$(LLVM_CONFIG)

LLVM_INCLUDE = $(shell ${LLVM_CFG} --includedir)

CXX_FLAGS += $(shell  ${LLVM_CFG} --cxxflags) -I${LLVM_INCLUDE} -I../include -I/usr/local/include  -DGOOGLE_PROTOBUF_NO_RTTI -fPIC -g

CXX_FLAGS += -Ianalysis/sea-dsa/include

CXX_FLAGS += -Ianalysis/llvm-dsa/include 

C_FLAGS = $(shell  ${LLVM_CFG} --cflags)

CPP_FLAGS += $(shell  ${LLVM_CFG} --cppflags) -I${LLVM_INCLUDE} -I../include -I/usr/local/include



CONFIG_PRIME_LIBDIR = $(shell ${LLVM_CFG} --libdir)
CONFIG_PRIME_LIBS += -L${CONFIG_PRIME_LIBDIR} -lLLVMExecutionEngine -lffi

#iam: producing the library varies from OS to OS
OS   =  $(shell uname)

LIBRARYNAME=libprevirt

ifeq (Darwin, $(findstring Darwin, ${OS}))
#  DARWIN
LIBRARY = ${LIBRARYNAME}.dylib
LIBFLAGS = -dynamiclib
OTHERLIBS = -lpthread -lprotobuf -lcurses  
LD_FLAGS += -undefined suppress -flat_namespace
CXX_FLAGS += -DHAVE_FFI_FFI_H
else ifeq (FreeBSD, $(findstring FreeBSD, ${OS}))
# FreeBSD
LIBRARY = ${LIBRARYNAME}.so
LIBFLAGS = -shared -Wl,-soname,${LIBRARY}
OTHERLIBS = -L/usr/local/lib -lpthread -lprotobuf
else
# LINUX
LIBRARY = ${LIBRARYNAME}.so
LIBFLAGS = -shared -Wl,-soname,${LIBRARY}
OTHERLIBS =  -lpthread -lprotobuf
CXX_FLAGS += -DHAVE_FFI_H
endif

PROTOC = $(shell which protoc)

SOURCES = $(wildcard *.cpp) 

SOURCES += $(wildcard analysis/*.cpp)

SOURCES += $(wildcard transforms/*.cpp)

SOURCES += $(wildcard interpreter/*.cpp)

SOURCES += $(wildcard utils/*.cpp)

OBJECTS := proto/Previrt.pb.o $(patsubst %.cpp,%.o,${SOURCES}) 

INSTALL = install

all: ${LIBRARY}

# Pointer Analysis
libSeaDsa:
	$(MAKE) -C analysis -f Makefile.sea-dsa install INSTALL_DIR=${OCCAM_LIB}

# Another Pointer Analysis
libLlvmDsa:
	$(MAKE) -C analysis -f Makefile.llvm-dsa install INSTALL_DIR=${OCCAM_LIB}

ifeq ($(LLPE), ON)
# Smowton's LLPE tool
libLLPE:
	$(MAKE) -C analysis/llpe install INSTALL_DIR=${OCCAM_LIB}

extern_libs: libSeaDsa libLlvmDsa libLLPE
else
extern_libs: libSeaDsa libLlvmDsa
endif

${LIBRARY}: extern_libs ${SOURCES}
	echo "The source is being built according to ${LLVM_CFG}"
	$(MAKE) protoc	
	$(MAKE) lib

lib: ${OBJECTS} 
	$(CXX) ${OBJECTS} ${LIBFLAGS} -o ${LIBRARY} ${CXX_FLAGS} ${LD_FLAGS} \
	${OTHERLIBS} ${CONFIG_PRIME_LIBS}

analysis/%.o: analysis/%.cpp 
	$(CXX) ${CXX_FLAGS} $< -c -o $@

transforms/%.o: transforms/%.cpp 
	$(CXX) ${CXX_FLAGS} $< -c -o $@

interpreter/%.o: interpreter/%.cpp 
	$(CXX) ${CXX_FLAGS} $< -c -o $@

utils/%.o: utils/%.cpp 
	$(CXX) ${CXX_FLAGS} $< -c -o $@

%.o: %.cpp
	$(CXX) -I. ${CXX_FLAGS} $< -c 

proto/%.o: proto/%.cc proto/%.h 
	$(CXX)  ${CXX_FLAGS} $< -c -o $@


protoc: Previrt.proto
	mkdir -p proto
	${PROTOC} Previrt.proto --cpp_out=proto

clean: 
	rm -rf ${OBJECTS} proto ${LIBRARY} 
	$(MAKE) -C analysis -f Makefile.llvm-dsa clean
	$(MAKE) -C analysis -f Makefile.sea-dsa clean

install: check-occam-lib ${LIBRARY}
	$(INSTALL) -m 664 ${LIBRARY} $(OCCAM_LIB)

uninstall_occam_lib:
	rm -f $(OCCAM_LIB)/${LIBRARY}

#
# Check for OCCAM_LIB
#
check-occam-lib:
ifeq ($(OCCAM_LIB),)
	$(error OCCAM_LIB is undefined)
endif
