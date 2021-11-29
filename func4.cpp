#include "easy.h"
double itc_pow(int num, int i) {
    if (i == 0)
        return 1;
    else if(i < 0) 
        return itc_pow(num, i + 1) / num;
    else 
        return num * itc_pow(num, i - 1);
}

bool itc_ispositive(int num) {
    if (num < 0) 
        return false;
    else 
        return true;
}

bool itc_ispositive_d(double num) {
    if (num < 0) 
        return false;
    else
        return true;
}

