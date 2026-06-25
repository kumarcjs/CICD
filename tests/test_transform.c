#include<assert.h>
void clarke(float ia,float ib,float *alpha,float *beta);
void park(float alpha,float beta,float theta, float *d, float *q);

int main()
{
    float alpha,beta;
    float d,q;

    clarke(1.0f,0,0f,&alpha,&beta);
    assert(alpha==1.0f);

    park(alpha,beta,0.0f,&d,&q);

    assert(d>0.99f);
    assert(d<1.01f);

    return 0;
}