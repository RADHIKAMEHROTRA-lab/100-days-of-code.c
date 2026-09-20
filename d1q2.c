#include <stdio.h>
int main()
{ 
int a;
int b;
int sum;
int diff;
int product ;
int quo;
printf("enter 1 no.");
scanf("%d" , & a);
printf("enter 2 no.");
scanf("%d" , & b);
sum = a+b;
diff =a-b;
product= a*b;
quo = a/b;
printf("su %d",sum);
printf("di %d",diff);
printf("mu %d",product);
printf("div %d ",quo);
return 0;
}
