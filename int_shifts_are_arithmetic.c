#include <stdio.h>
int int_shifts_are_arithmetic() {
    int a = ~0x0;
    printf("%.x\n",(a>>1)==a);
    return a>>1==a;
}

int main(void) {
	// your code goes here
	int_shifts_are_arithmetic();
	return 0;
}