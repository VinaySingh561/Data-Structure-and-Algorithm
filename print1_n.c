#include<stdio.h>


void print(int n){



if(n<1)

return ;

print(n-1);
printf("%d \n",n);



}
int main(){
    print(5);

}
