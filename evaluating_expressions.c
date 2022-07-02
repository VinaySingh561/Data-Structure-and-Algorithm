#include <stdio.h>
int main(){
    int y = 5, x;
    x = y++ * ++y; //// y++ -> post increment so  it first returns the value then changes y to y+1 and ++y do the opposite.
    printf("%d %d \n" ,x,y);
}



//BODMAS rule & L-->R rule
// precedence levels are : (post increment , pre increment) > (*, /, %) > (+,-)