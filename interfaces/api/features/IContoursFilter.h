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

#ifndef SOLAR_ICONTOURSFILTER_H
#define SOLAR_ICONTOURSFILTER_H

#include "IComponentIntrospect.h"
#include "datastructure/Image.h"
#include "core/Messages.h"
#include "datastructure/GeometryDefinitions.h"

namespace SolAR {
using namespace datastructure;
namespace api {
namespace features {

/**
 * @class IContoursFilter
 * @brief filters a set of contours
 *
 * This class provides a filtering method to prune a set of contours.
 */

class  IContoursFilter : public virtual org::bcom::xpcf::IComponentIntrospect {
public:
   /// @brief IContoursFilter default constructor
   IContoursFilter() = default;

   /// @brief IContoursFilter default destructor
   virtual ~IContoursFilter() = default;

   /// @brief Set the minimum length of contours in pixels that will be filtered
   /// Any contours that will have a length in pixel less than this value will be removed from the input filters
   /// @param[in] minContourLength The minimum length in pixels of contours to remove
   virtual void setParameters (float minContourLength) = 0;

   /// @brief Filter a set of contours
   /// @param[in] inContours The contours to filter
   /// @param[out] outContours The resulting vector of contours after filtering
   virtual FrameworkReturnCode filter(const std::vector<SRef<Contour2Df>> & inContours, std::vector<SRef<Contour2Df>> & outContours) = 0;

   XPCF_DECLARE_UUID("6b3de3a0-cc72-11e7-abc4-cec278b6b50a");
};
}
}
}  // end of namespace Solar

#endif // SOLAR_ICONTOURSFILTER_H
