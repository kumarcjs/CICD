#include "clark.h"
void clarke(float ia,float ib,float *alpha,float *beta)
{
    *alpha=ia;
    *beta=(ia+2.0f*ib)/1.7320508f;
}