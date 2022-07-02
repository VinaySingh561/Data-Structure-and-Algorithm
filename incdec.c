#include <stdio.h>
int main(){
    int a = 6, b;
    //a++;
    b = a++; // o/p = 6 shows first it assign the value to b then it increases the value of a
    printf("%d \n", b);
}



// a++ is post increment operator and ++a is preincrement operator. i.e.pre increment first increase the value then return and post inc
// increment first return the value then increment happens.