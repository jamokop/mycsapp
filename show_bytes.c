#include <stdio.h>
typedef unsigned char * byte_pointer; 
void show_bytes(byte_pointer x,int len) {
    int i;
    for (i=0;i<len;i++) {
        printf("%.2x\n",x[i]);
    }

}

int main(void) {
    // your code goes here
    unsigned x=0x2dff1cff;
    show_bytes((byte_pointer) &x,sizeof(unsigned));
    return 0;
}

