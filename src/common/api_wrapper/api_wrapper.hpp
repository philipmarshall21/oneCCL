/*
 Copyright 2016-2020 Intel Corporation
 
 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at
 
     http://www.apache.org/licenses/LICENSE-2.0
 
 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
*/
#pragma once

#include "oneapi/ccl/config.h"

#include "common/global/global.hpp"
#include "common/log/log.hpp"

namespace ccl {

typedef struct lib_info {
    std::string path;
    void* handle;
    void* ops;
    std::vector<std::string> fn_names;
} lib_info_t;

void api_wrappers_init();
void api_wrappers_fini();

void load_library(lib_info_t& info);
void close_library(lib_info_t& info);

} //namespace ccl
