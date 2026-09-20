#include <stdio.h>
int main()
{
int l;
int b;
int peri;
int area;
printf("enter length rectangle");
scanf("%d",& l);
printf("enter breadth rectangle");
scanf("%d", & b);
area=l*b;
peri =2*(l+b);
printf("perimeter %d", peri);
printf("area %d",area);
return 0;
}
