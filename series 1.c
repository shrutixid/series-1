#include<stdio.h>
void main()
{
printf("The following program is to print the following series:-\n 0 10 21 33 46 60\n\n");
int a=0;
printf("The series is printed as follows:-\n");
for(int i=0;i<=60;i+=10)
{
 printf("%d ",i);
 i=i+a;
 a++;
}
}
