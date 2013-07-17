/*
 * Copyright (C) 2011 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ART_SRC_CLASS_LOADER_H_
#define ART_SRC_CLASS_LOADER_H_

#include <vector>

#include "dex_file.h"
#include "mirror/object.h"

namespace art {

struct ClassLoaderOffsets;

namespace mirror {

// C++ mirror of java.lang.ClassLoader
class MANAGED ClassLoader : public Object {
 private:
  // Field order required by test "ValidateFieldOrderOfJavaCppUnionClasses".
  Object* packages_;
  ClassLoader* parent_;
  Object* proxyCache_;

  friend struct art::ClassLoaderOffsets;  // for verifying offset information
  DISALLOW_IMPLICIT_CONSTRUCTORS(ClassLoader);
};

}  // namespace mirror
}  // namespace art

#endif  // ART_SRC_CLASS_LOADER_H_