#include "easy.h"
bool itc_iseven(int num)
{
	if (num % 2 == 0) 
		return true;
	else 
		return false;
}

int itc_max(int a, int b)
{
	if (a > b) 
		return a;
	else 
		return b;
}

int itc_min(int a, int b)
{
	if (a < b) 
		return a;
	else 
		return b;
}

double itc_fmax(double num, double num1) {
if (num > num1) 
	return num;
else 
	return num1;
}

double itc_fmin(double a, double b) {
	if (a < b) 
		return a;
	else 
		return b;
}
