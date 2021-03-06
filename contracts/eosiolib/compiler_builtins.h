/**
 *  @file
 *  @copyright defined in eos/LICENSE.txt
 */
#pragma once

#include <eosiolib/system.h>

extern "C" {
  /**
   *  @defgroup compiler builtins API
   *  @brief Declares int128 helper builtins generated by the toolchain. 
   *  @ingroup compilerbuiltinsapi
   *
   *  @{
   */

 /**
  * Multiply two 128 bit integers split as two unsigned 64 bit integers and assign the value to the first parameter.
  * @brief Multiply two 128 unsigned bit integers (which are represented as two 64 bit unsigned integers. 
  * @param res  It will be replaced with the result product.
  * @param la   Low 64 bits of the first 128 bit factor.
  * @param ha   High 64 bits of the first 128 bit factor.
  * @param lb   Low 64 bits of the second 128 bit factor.
  * @param hb   High 64 bits of the second 128 bit factor.
  * Example:
  * @code
  * __int128 res = 0;
  * __int128 a = 100;
  * __int128 b = 100;
  * __multi3(res, a, (a >> 64), b, (b >> 64));
  * printi128(res); // Output: 10000
  * @endcode
  */
  void __multi3(__int128& res, uint64_t la, uint64_t ha, uint64_t lb, uint64_t hb);

  void __divti3(__int128& res, uint64_t la, uint64_t ha, uint64_t lb, uint64_t hb);
  void __udivti3(unsigned __int128& res, uint64_t la, uint64_t ha, uint64_t lb, uint64_t hb);

  void __modti3(__int128& res, uint64_t la, uint64_t ha, uint64_t lb, uint64_t hb);
  void __umodti3(unsigned __int128& res, uint64_t la, uint64_t ha, uint64_t lb, uint64_t hb);

  void __lshlti3(__int128& res, uint64_t lo, uint64_t hi, uint32_t shift);
  void __lshrti3(__int128& res, uint64_t lo, uint64_t hi, uint32_t shift);

  void __ashlti3(__int128& res, uint64_t lo, uint64_t hi, uint32_t shift);
  void __ashrti3(__int128& res, uint64_t lo, uint64_t hi, uint32_t shift);

  void __break_point();

} // extern "C"
