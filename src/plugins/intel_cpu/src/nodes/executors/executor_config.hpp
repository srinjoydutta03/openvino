// Copyright (C) 2023 Intel Corporation
// SPDX-License-Identifier: Apache-2.0
//

#pragma once

#include "memory_arguments.hpp"
#include "post_ops.hpp"

namespace ov {
namespace intel_cpu {
namespace executor {

template <typename Attrs>
struct Config {
    MemoryDescArgs descs;
    Attrs attrs;
    PostOps postOps;
};

}  // namespace executor
}  // namespace intel_cpu
}  // namespace ov
