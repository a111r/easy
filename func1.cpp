#include "easy.h"
void itc_name() {
    cout << "Shamil" << endl;
}

void itc_fio() {
    itc_name();
    cout << "Rustemovich" << endl << "Sitdikov" << endl;
}

int itc_abs(int num) {
    if (num < 0)
	    num = -num;
    return num;
}

double itc_fabs(double num) 
{
    if (num < 0) 
	    num = -num;
    return num;
}

int itc_revnbr(int num) 
{
	return num % 10 * 100 + num % 100 / 10 * 10 + num / 100;
}












