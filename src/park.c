#include <math.h>
#include "park.h"
void park(float alpha,float beta,float theta, float *d, float *q)
{
    *d=alpha*cosf(theta)+beta*sinf(theta);
    *q=-alpha*sinf(theta)+beta*cosf(theta);
}