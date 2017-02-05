#include <stdio.h>

int any_odd_one(unsigned x) {
    unsigned a = 0xaaaaaaaa;
    printf("%.x\n",a&x);
    return !!a&x;
}

int main(void) {
	// your code goes here
	any_odd_one(0xf0adc123);
	return 0;
}