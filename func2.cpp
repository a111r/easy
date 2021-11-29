#include "easy.h"
bool itc_iseven(int num) {
	if (num % 2 == 0) return true;
	else return false;
}

int itc_max(int f_num, int s_num) {
	if (f_num > s_num) return f_num;
	else return s_num;
}

int itc_min(int f_num, int s_num) {
	if (f_num < s_num) return f_num;
	else return s_num;
}

double itc_fmax(double num, double num1) {
if (num > num1) return num;
else return num1;
}

double itc_fmin(double f_num, double s_num) {
	if (f_num < s_num) return f_num;
	else return s_num;
}
