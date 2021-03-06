// Copyright 2020 The Magma Authors.
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
module magma/cwf/gateway

replace (
	fbc/cwf/radius => ../../feg/radius/src/
	fbc/lib/go => ../../feg/radius/lib/go
	fbc/lib/go/http => ../../feg/radius/lib/go/http
	fbc/lib/go/libgraphql => ../../feg/radius/lib/go/libgraphql
	fbc/lib/go/log => ../../feg/radius/lib/go/log
	fbc/lib/go/machine => ../../feg/radius/lib/go/machine
	fbc/lib/go/oc => ../../feg/radius/lib/go/oc
	fbc/lib/go/radius => ../../feg/radius/lib/go/radius

	github.com/fiorix/go-diameter/v4 => github.com/emakeev/go-diameter/v4 v4.0.6

	magma/cwf/cloud/go => ../../cwf/cloud/go
	magma/feg/cloud/go => ../../feg/cloud/go
	magma/feg/cloud/go/protos => ../../feg/cloud/go/protos
	magma/feg/gateway => ../../feg/gateway
	magma/gateway => ../../orc8r/gateway/go
	magma/lte/cloud/go => ../../lte/cloud/go
	magma/orc8r/cloud/go => ../../orc8r/cloud/go
	magma/orc8r/lib/go => ../../orc8r/lib/go
	magma/orc8r/lib/go/protos => ../../orc8r/lib/go/protos
)

require (
	fbc/cwf/radius v0.0.0
	fbc/lib/go/radius v0.0.0-00010101000000-000000000000
	github.com/Microsoft/go-winio v0.4.14 // indirect
	github.com/coreos/go-iptables v0.4.5
	github.com/docker/distribution v2.7.1+incompatible // indirect
	github.com/docker/docker v1.13.1
	github.com/docker/go-connections v0.4.0 // indirect
	github.com/fiorix/go-diameter/v4 v4.0.1-0.20200120193412-55a1c21738f9
	github.com/go-openapi/swag v0.19.5
	github.com/go-redis/redis v6.15.5+incompatible
	github.com/golang/glog v0.0.0-20160126235308-23def4e6c14b
	github.com/golang/protobuf v1.4.2
	github.com/onsi/ginkgo v1.14.0 // indirect
	github.com/opencontainers/go-digest v1.0.0-rc1 // indirect
	github.com/pkg/errors v0.9.1
	github.com/shirou/gopsutil v2.20.3+incompatible
	github.com/sparrc/go-ping v0.0.0-20190613174326-4e5b6552494c
	github.com/stretchr/testify v1.5.1
	golang.org/x/net v0.0.0-20200625001655-4c5254603344
	google.golang.org/appengine v1.6.5 // indirect
	google.golang.org/grpc v1.27.1
	magma/cwf/cloud/go v0.0.0-00010101000000-000000000000
	magma/feg/cloud/go/protos v0.0.0
	magma/feg/gateway v0.0.0-00010101000000-000000000000
	magma/gateway v0.0.0
	magma/lte/cloud/go v0.0.0
	magma/orc8r/cloud/go v0.0.0
	magma/orc8r/lib/go v0.0.0
	magma/orc8r/lib/go/protos v0.0.0
)

go 1.13
