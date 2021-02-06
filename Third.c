#include<stdio.h>

int main(){
    int r;
    printf("Enter the radius \n");
    scanf("%d",&r);
    float d,ci,area;
    d=2*r;
    ci=2*3.14*r;
    area=3.14*r*r;
    printf("Diameter= %f \n circumference= %f \n area= %f \n",d,ci,area);
    return 0;
}