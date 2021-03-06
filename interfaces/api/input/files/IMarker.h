/**
 * @copyright Copyright (c) 2017 B-com http://www.b-com.com/
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef SOLAR_IMARKER_H
#define SOLAR_IMARKER_H


#include "IComponentIntrospect.h"
#include "core/Messages.h"

namespace SolAR {
namespace api {
namespace input {
namespace files {

class IMarker : public virtual org::bcom::xpcf::IComponentIntrospect {
public:
    IMarker() = default;
    virtual ~IMarker() = default;

    virtual FrameworkReturnCode loadMarker(const std::string & filename) = 0;

     static constexpr const char * UUID = "3c9cee8a-e9ca-4c16-851a-669a94c2a68d";
};

}
}
}
}
#endif // SOLAR_IMARKER_H

