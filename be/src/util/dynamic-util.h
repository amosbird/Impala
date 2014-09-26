// Copyright 2012 Cloudera Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef IMPALA_UTIL_DYNAMIC_UTIL_H
#define IMPALA_UTIL_DYNAMIC_UTIL_H

#include "common/status.h"

namespace impala {

// Look up symbols in a dynamically linked library.
// handle -- handle to the library. NULL if loading from the current process.
// symbol -- symbol to lookup.
// fn_ptr -- pointer tor retun addres of function.
Status DynamicLookup(void* handle, const char* symbol, void** fn_ptr);

// Open a dynamicly loaded library.
// library -- name of the library.  The default paths will be searched.
//            library can be NULL to get the handle for the current process.
// handle -- returned handle to the library.
Status DynamicOpen(const char* library, void** handle);

// Closes the handle.
void DynamicClose(void* handle);

}

#endif

