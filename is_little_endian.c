#include <stdio.h>
int is_little_endian() {
    unsigned a=0x1;
    printf("%.x\n",*(char *)&a);
    return *(char *)&a;
}

int main(void) {
    // your code goes here
    return is_little_endian();
}
