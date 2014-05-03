#ifndef _LIBPCC_FLOAT_H_
#define _LIBPCC_FLOAT_H_

/*
 * number of decimal digits needed to represent all the
 * significant digits for all internal floating-point formats
 */
#define DECIMAL_DIG 21

/*
 * the floating-point expression evaluation method:
 *	-1	indeterminate
 *	0	evaluate to range and precision of type
 *	1	evaluate to range and precision of double type
 *	2	evaluate to range and precision of long double type
 */
#ifdef __FLT_EVAL_METHOD__
#define FLT_EVAL_METHOD __FLT_EVAL_METHOD__
#else
#define FLT_EVAL_METHOD 0
#endif

#define FLT_RADIX 2

/* IEEE float */
#define FLT_MANT_DIG 24
#define FLT_DIG 6
#define FLT_ROUNDS 1
#define FLT_EPSILON 1.19209290e-07F
#define FLT_MIN_EXP (-125)
#define FLT_MIN 1.17549435e-38F
#define FLT_MIN_10_EXP (-37)
#define FLT_MAX_EXP 128
#define FLT_MAX 3.40282347e+38F
#define FLT_MAX_10_EXP 38

/* IEEE double */
#define DBL_MANT_DIG 53
#define DBL_DIG 15
#define DBL_EPSILON 2.2204460492503131e-16
#define DBL_MIN_EXP (-1021)
#define DBL_MIN 2.2250738585072014e-308
#define DBL_MIN_10_EXP (-307)
#define DBL_MAX_EXP 1024
#define DBL_MAX 1.7976931348623157e+308
#define DBL_MAX_10_EXP 308

#if defined(__i386__) || defined(__x86_64__)

/* intel long double */
#define LDBL_MANT_DIG 64
#define LDBL_DIG 18
#define LDBL_EPSILON 1.08420217248550443401e-19L
#define LDBL_MIN_EXP (-16381)
#define LDBL_MIN 3.36210314311209350626e-4932L
#define LDBL_MIN_10_EXP (-4931)
#define LDBL_MAX_EXP 16384
#define LDBL_MAX 1.18973149535723176502e+4932L
#define LDBL_MAX_10_EXP 4932

#else

/* same as IEEE double */
#define LDBL_MANT_DIG 53
#define LDBL_DIG 15
#define LDBL_EPSILON 2.2204460492503131e-16
#define LDBL_MIN_EXP (-1021)
#define LDBL_MIN 2.2250738585072014e-308
#define LDBL_MIN_10_EXP (-307)
#define LDBL_MAX_EXP 1024
#define LDBL_MAX 1.7976931348623157e+308
#define LDBL_MAX_10_EXP 308

#endif

#endif
