#include <stdio.h>
int main()
{ 
int a;
int b;
int c;
printf("enter   1  no.");
scanf("%d",& a);
printf("enter 2 no.");
scanf("%d",& b);
c=a;

a=b;
b=c;
return 0;
printf("after swap ; a=%d,b=%d",a,b);
}

