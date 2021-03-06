/*
Copyright 2020 The Magma Authors.

This source code is licensed under the BSD-style license found in the
LICENSE file in the root directory of this source tree.

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#include <devmand/devices/cli/translation/GrpcReader.h>
// TODO make async

namespace devmand {
namespace devices {
namespace cli {

using namespace folly;
using namespace std;
using namespace grpc;
using namespace devmand::channels::cli::plugin;
using namespace devmand::channels::cli;

GrpcReader::GrpcReader(
    shared_ptr<grpc::Channel> channel,
    const string _id,
    shared_ptr<Executor> _executor)
    : GrpcCliHandler(_id, _executor),
      stub_(devmand::channels::cli::plugin::ReaderPlugin::NewStub(channel)) {}

Future<dynamic> GrpcReader::read(const Path& path, const DeviceAccess& device)
    const {
  MLOG(MDEBUG) << "[" << id << "] read " << path;
  ActualReadRequest* actualRequest = new ActualReadRequest();
  actualRequest->set_path(path.str());
  ReadRequest request;
  request.set_allocated_actualreadrequest(actualRequest);

  return finish<ReadRequest, ReadResponse, dynamic>(
      request,
      device,
      [this](auto context) { return stub_->Read(context); },
      [](auto response) {
        return makeFuture(parseJson(response.actualreadresponse().json()));
      });
}

} // namespace cli
} // namespace devices
} // namespace devmand
