 #include<stdio.h>
 int main(){
     int phy,che,bio,math,cs;
     float per;
     printf("Enter marks of Physics, Chemistry, Biology, Mathematics and Computer Science respectively\n");
     scanf("%d %d %d %d %d",&phy,&che,&bio,&math,&cs);
     per=(phy+che+bio+math+cs)/5;
     if(per>=90)
     printf("Grade-A\n");
     else if(per>=80 && per<90)
     printf("Grade-B\n");
     else if(per>=70 && per<80)
     printf("Grade-C\n");
     else if(per>=60 && per<70)
     printf("Grade-D\n");
     else if(per>=40 && per<60)
     printf("Grade-E\n");
     else printf("Grade-F\n");
     return 0;
 }