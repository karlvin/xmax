/**
 *  @file
 *  @copyright defined in xmax/LICENSE.txt
 */
#pragma once
#include <include/xmaxtypes.hpp>

namespace Xmaxplatform { namespace Config {
using Basetypes::uint16;
using Basetypes::uint32;
using Basetypes::uint64;
using Basetypes::uint128;
using Basetypes::share_type;
using Basetypes::asset;
using Basetypes::account_name;
using Basetypes::permission_name;

const static char key_prefix[] = "XMX";
} } // namespace Xmaxplatform::Config

template<typename Number>
Number xmax_percent(Number value, int percentage) {
   return value * percentage / Xmaxplatform::Config::percent100;
}