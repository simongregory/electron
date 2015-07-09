// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ALMOST EXACT COPY OF chrome_key_systems.h  'chrome' switched to 'atom'
// TODO: Include in libcrhomiumcontent build

#ifndef ATOM_RENDERER_MEDIA_CHROME_KEY_SYSTEMS_H_
#define ATOM_RENDERER_MEDIA_CHROME_KEY_SYSTEMS_H_

#include <vector>

#include "media/base/key_system_info.h"

void AddAtomKeySystems(std::vector<media::KeySystemInfo>* key_systems_info);

#endif  // ATOM_RENDERER_MEDIA_CHROME_KEY_SYSTEMS_H_
