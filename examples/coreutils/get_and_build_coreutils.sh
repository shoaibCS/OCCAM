# Install dependent libraries

apt-get install git build-essential -y
apt-get build-dep coreutils -y
apt-get install autoconf automake autopoint bison gettext git gperf gzip texinfo patch perl rsync tar -y

# Get the source of coreutils and build

git clone git://git.savannah.gnu.org/coreutils.git
cd coreutils
./bootstrap
./configure FORCE_UNSAFE_CONFIGURE=1
make -j4


# Reference site https://askubuntu.com/questions/976002/how-to-compile-the-sorcecode-of-the-offical-ls-c-source-code
# command to list executables. find . -type f -executable
