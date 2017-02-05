#include <stdio.h>

unsigned replace_byte (unsigned x, int i, unsigned char b) {
    int t = ~(0xff<<8*i);
    int t2= b<<8*i;
    printf("%.x\n",t&x|t2);
    return t&x|t2;
}

int main(void) {
    // your code goes here
    return replace_byte(0x12345678, 2, 0xAB);
    //return is_little_endian();
    
}