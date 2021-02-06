#include<stdio.h>
int main(){
    int c;float f;
    printf("Enter the temperature in celsius \n");
    scanf("%d",&c);
    f=((9*c)/5) +32;
    printf("The temperature in fahrenheit= %f",f);
    return 0;
}