#include "easy.h"
int itc_sqrt(int num) {
    int a;
    for (int i = 0; i < 10000; i++) {
        if (i * i == num) {
            return i;
        }
    }
    return -1;
}

int itc_skv(int s) {
    return s * s;
}

int itc_spr(int a, int b)
{
        return itc_abs(a * b);
}

double itc_str(double f_s, double s_s, double th_s) {
    if (f_s + s_s <= th_s or f_s + th_s <= s_s or s_s + th_s <= f_s) {
        return -1;
    }
    double p = (f_s + s_s + th_s) / 2;
    return itc_sqrt(p * (p - f_s) * (p - s_s) * (p - th_s));
}

double itc_scir(int num) {
    return num * num * 3.14;
}
