#include<stdio.h>
int main(){
    int x ;
    x = 2147483647 + 2147483649;
    printf("%d \n", x);
    // long long can numbers upto 8 bytes
    // long can have numbers upto 4 or 8 bytes depending on your system specifications (32 bit or 64 bit)
    long long a;
    a = 100000000000;
    printf("%lld  \n", a);

    printf("\n %d, %d, %d", sizeof(int), sizeof(long), sizeof(long long));
    // Looking at results i can say my system is 32 bit but my system is 64 bit so it happens with c or c++ that ...