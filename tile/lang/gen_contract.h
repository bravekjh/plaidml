#pragma once

#include <algorithm>
#include <array>
#include <string>
#include <vector>

#include "tile/lang/flat.h"
#include "tile/lang/generate.h"
#include "tile/lang/type.h"

namespace vertexai {
namespace tile {
namespace lang {

KernelInfo GenContract(const std::string& kname, const DirectSettings& settings, const FlatContraction& op,
                       const std::vector<uint64_t>& tile, const Bindings& vars, const std::vector<std::string>& inputs);

}  // namespace lang
}  // namespace tile
}  // namespace vertexai
