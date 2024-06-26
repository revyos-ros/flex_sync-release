// -*-c++-*---------------------------------------------------------------------------------------
// Copyright 2024 Bernd Pfrommer <bernd.pfrommer@gmail.com>
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
#ifndef FLEX_SYNC__MSG_PACK_HPP_
#define FLEX_SYNC__MSG_PACK_HPP_

namespace flex_sync
{
/**
 * \cond HIDDEN_SYMBOLS
 * Helper class for type deduction.
 * See [this stack exchange page](https://stackoverflow.com/questions/18063451/get-index-of-a-tuple-elements-type).
 */
template <typename... Args>
struct MsgPack
{
};
/**
 * \endcond
*/
}  // namespace flex_sync
#endif  // FLEX_SYNC__MSG_PACK_HPP_
