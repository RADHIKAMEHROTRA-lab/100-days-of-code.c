#include <stdio.h>
int main()
{
int r;
int circum;
int area;
printf("enter radius of circle ");
scanf("%d" , & r);
area=3.14*r*r;
circum = 2*3.14*r;
printf("circumference of circle %d",circum);
printf("area of circle %d",area);
return 0;
}
