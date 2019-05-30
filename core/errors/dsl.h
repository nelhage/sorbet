#ifndef SORBET_CORE_ERRORS_DSL_H
#define SORBET_CORE_ERRORS_DSL_H
#include "core/Error.h"

namespace sorbet::core::errors::DSL {
constexpr ErrorClass BadAttrArg{3501, StrictLevel::True};
constexpr ErrorClass BadWrapInstance{3502, StrictLevel::True};
} // namespace sorbet::core::errors::DSL
#endif