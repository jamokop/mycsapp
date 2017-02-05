#include <stdio.h>

int lower_one_mask(int n) {
    unsigned a=~0x00;
    a=a<<n;
    a=~a;
    printf("%.x\n",a);
}

int main(void) {
    // your code goes here
    lower_one_mask(17);
    return 0;
}