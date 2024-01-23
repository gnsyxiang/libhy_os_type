/**
 * 
 * Release under GPLv-3.0.
 * 
 * @file    hy_type.h
 * @brief   
 * @author  gnsyxiang <gnsyxiang@163.com>
 * @date    23/01 2024 17:00
 * @version v0.0.1
 * 
 * @since    note
 * @note     note
 * 
 *     change log:
 *     NO.     Author              Date            Modified
 *     00      zhenquan.qiu        23/01 2024      create the file
 * 
 *     last modified: 23/01 2024 17:00
 */
#ifndef __LIBHY_OS_TYPE_INCLUDE_HY_TYPE_H_
#define __LIBHY_OS_TYPE_INCLUDE_HY_TYPE_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <stdint.h>

typedef signed char         hy_s8_t;
typedef signed short        hy_s16_t;
typedef signed int          hy_s32_t;
typedef signed long long    hy_s64_t;

typedef unsigned char       hy_u8_t;
typedef unsigned short      hy_u16_t;
typedef unsigned int        hy_u32_t;
typedef unsigned long long  hy_u64_t;

typedef unsigned char       hy_bool_t;
typedef char                hy_char_t;
typedef double              hy_double_t;
typedef float               hy_float_t;

#ifndef NULL
#define NULL (void *)0
#endif

#ifdef __cplusplus
}
#endif

#endif

