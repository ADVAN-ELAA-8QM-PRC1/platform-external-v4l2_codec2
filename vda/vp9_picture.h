// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef VP9_PICTURE_H_
#define VP9_PICTURE_H_

#include <memory>

#include "base/macros.h"
#include "base/memory/ref_counted.h"
#include "vp9_parser.h"

namespace media {

class VP9Picture : public base::RefCounted<VP9Picture> {
 public:
  VP9Picture();

  std::unique_ptr<Vp9FrameHeader> frame_hdr;

 protected:
  friend class base::RefCounted<VP9Picture>;
  virtual ~VP9Picture();

  DISALLOW_COPY_AND_ASSIGN(VP9Picture);
};

}  // namespace media

#endif  // VP9_PICTURE_H_
