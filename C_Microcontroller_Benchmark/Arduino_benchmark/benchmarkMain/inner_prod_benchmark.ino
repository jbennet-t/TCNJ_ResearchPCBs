#include "stdint.h"

int32_t inner_prod_benchmark( int32_t *x, int32_t *y, int32_t n )
{
    int32_t i;
    int32_t sum;
    
    sum = 0;
    
    for (i = 0; i < n; ++i)
    {
        sum += (x[i] * y[i]);
    }
    
    return sum;
}