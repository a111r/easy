#include "easy.h"
int itc_sqrt(int num)
{
    int a;
    for (int i = 0; i < 10000; i++) 
    {
        if (i * i == num)
        {
            return i;
        }
    }
    return -1;
}

int itc_skv(int a) 
{
    return a * a;
}

int itc_spr(int a, int b)
{
        return itc_abs(a * b);
}

double itc_str(double a, double b, double c) {
    if (a + b <= c or a + c <= b or b + c <= a) {
        return -1;
    }
    double p = (a + b + c) / 2;
    return itc_sqrt(p * (p - a) * (p - b) * (p - c));
}

double itc_scir(int num) {
    return num * num * 3.14;
}
