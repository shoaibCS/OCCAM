//
// OCCAM
//
// Copyright (c) 2011-2012, SRI International
//
//  All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
// * Redistributions of source code must retain the above copyright notice, this
//   list of conditions and the following disclaimer.
//
// * Redistributions in binary form must reproduce the above copyright notice,
//   this list of conditions and the following disclaimer in the documentation
//   and/or other materials provided with the distribution.
//
// * Neither the name of SRI International nor the names of its contributors may
//   be used to endorse or promote products derived from this software without
//   specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
// DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
// FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
// DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
// SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
// CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
// OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//

/*
 * FixFunctionNames.cpp
 *
 *  Created on: Jul 25, 2011
 *      Author: Gregory Malecha
 */
#include "llvm/IR/Function.h"
#include "llvm/IR/Module.h"
#include "llvm/Pass.h"

using namespace llvm;

namespace previrt
{
  class FixFunctions : public ModulePass
  {
  public:
    static char ID;
  public:
    FixFunctions() :
      ModulePass(ID)
    {
    }
    virtual
    ~FixFunctions()
    {
    }
  public:
    virtual bool
    runOnModule(Module &m)
    {
      bool modified = false;
      for (Module::iterator i = m.begin(), e = m.end(); i != e; ++i) {
        Function& f = *i;
        //iam       std::string name = f.getNameStr();
        std::string name = f.getName().str();
        if (name[0] == 1) {
          f.setName(name.substr(1));
          modified = true;
        }
      }

      for (Module::AliasListType::iterator i = m.getAliasList().begin(), e =
          m.getAliasList().end(); i != e; ++i) {
        GlobalAlias& alias = *i;
        //iam        std::string name = alias.getNameStr();
        std::string name = alias.getName().str();
        if (name[0] == 1) {
          alias.setName(name.substr(1));
          modified = true;
        }
      }

      for (Module::GlobalListType::iterator i = m.getGlobalList().begin(), e =
          m.getGlobalList().end(); i != e; ++i) {
        GlobalVariable& var = *i;
        //iam        std::string name = var.getNameStr();
        std::string name = var.getName().str();
        if (name[0] == 1) {
          var.setName(name.substr(1));
          modified = true;
        }
      }

      return modified;
    }
  };

  char FixFunctions::ID;

  static RegisterPass<FixFunctions> X("Pfix-1function",
      "remove \\1 from function names", false, false);
}
