/**
 * Copyright 2020 The Magma Authors.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#pragma once

#define MFATAL 0
#define MERROR 1
#define MWARNING 2
#define MINFO 3
#define MDEBUG 4

// GLOG LOGGING
#ifdef LOG_WITH_GLOG
#include <glog/logging.h>

#define MLOG(VERBOSITY) VLOG(VERBOSITY)
#define MLOG_IF(VERBOSITY, CONDITION) VLOG_IF(VERBOSITY, CONDITION)

namespace magma {

// set_verbosity sets the global logging verbosity. The higher the verbosity,
// the more is logged
static void set_verbosity(uint32_t verbosity) {
  VLOG(0) << "Setting verbosity to " << verbosity;
  FLAGS_v = verbosity;
}

// init_logging initializes glog, sets logging to use std::err, and sets the
// initial verbosity
static void init_logging(const char* service_name) {
  google::InitGoogleLogging(service_name);
  // log to stderr to automatically log to syslog with systemd
  FLAGS_logtostderr = 1;
}
}
#endif

// NON GLOG LOGGING
#ifndef LOG_WITH_GLOG
#include <iostream>

// for non glog use cases, just log to std cout
struct _MLOG_NEWLINE {
  ~_MLOG_NEWLINE() { std::cout << std::endl; }
};
#define MLOG(VERBOSITY) (_MLOG_NEWLINE(), \
  std::cout << "[" << __FILE__ << ":" << __LINE__ << "] ")

namespace magma {
// These functions do nothing without glog
static void set_verbosity(uint32_t verbosity) {}
static void init_logging(const char* service_name) {
}
}
#endif
