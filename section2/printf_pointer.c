#include<stdio.h>

typedef unsigned char *pointer;

int main() {
     int a = 15213;
     printf("int a = 15213\n");
     show_bytes((pointer)&a,sizeof(int));
}



void show_bytes(pointer start,size_t len) {
    size_t i;
    for (i = 0; i < len; i++)
    {
        printf("0x%.12p\t%x\n",start+i,start[i]);
    }
    printf("\n");
    
}