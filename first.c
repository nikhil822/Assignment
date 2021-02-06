#include<stdio.h>
int main(){
    int a,b,sum,diff,mult;
    float div;
    printf("Enter two numbers \n");
    scanf("%d %d",&a,&b);
    sum=a+b;
    diff=a-b;
    mult=a*b;
    div=a/b;
    printf("Sum= %d \n Difference= %d \n Product= %d \n Division= %f \n",sum,diff,mult,div);
    return 0;
}