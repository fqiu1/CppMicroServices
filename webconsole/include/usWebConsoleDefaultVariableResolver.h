/*=============================================================================

  Library: CppMicroServices

  Copyright (c) German Cancer Research Center,
    Division of Medical and Biological Informatics

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

=============================================================================*/

#ifndef USWEBCONSOLEDEFAULTVARIABLERESOLVER_H
#define USWEBCONSOLEDEFAULTVARIABLERESOLVER_H

#include "usWebConsoleVariableResolver.h"

#include <map>

US_BEGIN_NAMESPACE

class WebConsoleDefaultVariableResolver : public std::map<std::string,std::string>, public WebConsoleVariableResolver
{
public:
  WebConsoleDefaultVariableResolver();

  virtual std::string Resolve(const std::string &variable) const;
};

US_END_NAMESPACE

#endif // USWEBCONSOLEDEFAULTVARIABLERESOLVER_H
