#include<stdio.h>
int main(){
    float c,f;
    printf("Enter the temperature in celsius \n");
    scanf("%f",&c);
    f=((9*c)/5) +32;
    printf("The temperature in fahrenheit= %f",f);
    return 0;
}
