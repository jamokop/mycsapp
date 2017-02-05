#include <stdio.h>

//arithmetic shift
int sra(int x, int k) {
	/* Perform shift logically */
	int xsrl = (unsigned) x >> k;
	int w=8*sizeof(int);
	unsigned a = ~0x00;
	a = a<<(w-(k*((unsigned)x>>w-1)));
	printf("%.x\n",xsrl|a);
	return xsrl|a;
    
}

int main(void) {
	// your code goes here
	sra(0xf0adc123,8);
	return 0;
}
