/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/qualified/gen-cpp/module2_constants.h"

namespace MODULE2 {

Struct const &module2_constants::c2() {
  static Struct const instance = Struct(
    ::apache::thrift::detail::wrap_argument<1>( ::MODULE0::Struct( ::MODULE0::module0_constants::c0())),
    ::apache::thrift::detail::wrap_argument<2>( ::MODULE1::Struct( ::MODULE1::module1_constants::c1())));
  return instance;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

module2Constants::module2Constants() {
  c2 = module2_constants::c2();
}

#pragma GCC diagnostic pop

} // namespace

