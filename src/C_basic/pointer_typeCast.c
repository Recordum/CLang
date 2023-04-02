#include <stdio.h>

// 0x12345678 = 2진수 표현시 0001 0010 0011 0100 0101 0110 0111 1000
// little endian 경우 낮은 주소에 낮은 값을 저장

void little_endian()
{

    int b = 0x12345678;
    char *y;
    y = (char *) &b;
    for(int i = 0; i < 4 ; i++) {
        printf("%d번째 바이트 : %x\n",i, y[i]);
    }
}