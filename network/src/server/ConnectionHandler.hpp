/***************************************************************************
 *
 * Project         _____    __   ____   _      _
 *                (  _  )  /__\ (_  _)_| |_  _| |_
 *                 )(_)(  /(__)\  )( (_   _)(_   _)
 *                (_____)(__)(__)(__)  |_|    |_|
 *
 *
 * Copyright 2018-present, Leonid Stryzhevskyi, <lganzzzo@gmail.com>
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
 *
 ***************************************************************************/

#ifndef network_server_ConnectionHandler_hpp
#define network_server_ConnectionHandler_hpp

#include "../../../../oatpp-lib/core/src/data/stream/Stream.hpp"
#include "../../../../oatpp-lib/core/src/base/PtrWrapper.hpp"

namespace oatpp { namespace network { namespace server {
  
class ConnectionHandler {
public:
  virtual void handleConnection(const std::shared_ptr<oatpp::data::stream::IOStream>& connection) = 0;
};
  
}}}

#endif /* network_server_ConnectionHandler_hpp */
