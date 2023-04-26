#ifndef THREADS_FIXED_POINT_H
#define THREADS_FIXED_POINT_H

typedef int real;

#define Q 15
#define F (1 << (Q))

#define to_real(n) (((n)*F))
#define to_nearest_int(x) (((x) >= 0 )? (((x) + (F/2))/F) : (((x) - (F/2))/F))
#define add_real(x, y) ((x) + (y))
#define sub_real(x, y) ((x) - (y))
#define add_int(x, n) ((x) + ((n)*F))
#define sub_int(x, n) ((x) - ((n)*F))
#define mult_real(x, y) ((((int64_t)(x)) * (y))/F)
#define mult_int(x, n) ((x) * (n))
#define div_real(x, y) ((((int64_t)(x)) / (y))*F)
#define div_int(x, n) ((x) / (n))

#endif