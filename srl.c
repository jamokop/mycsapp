#include <stdio.h>

//logical shift
unsigned srl(unsigned x, int k) {
    unsigned xsra = (int) x >> k;
    int w=8*sizeof(int);
    unsigned t=~0x00;
    t=t<<(w-k);
    t=~t;
    printf("%.x\n",t&xsra);
    return t&xsra;
    
}

int main(void) {
	// your code goes here
	srl(0xffadc123,8);
	return 0;
}