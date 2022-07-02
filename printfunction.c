#include <stdio.h>
int main(){
    int x = 01, y = 07, z = 1999;
    printf("My birth date is 0%d-%d-%d \n", x,y,z);
    x = 2, y =1;
    char c = '*';
    printf("%d %c %d = %d\n", x ,c ,y ,x*y);
    y = y+1;
    printf("%d %c %d = %d \n", x, c,y, x*y);
    y = y+1;
    printf("%d %c %d = %d...... \n", x, c,y, x*y);
    return 0;
}
// formating scripts
// %d : int , %f : floar , %c : char , %ld : long int , %lf = double