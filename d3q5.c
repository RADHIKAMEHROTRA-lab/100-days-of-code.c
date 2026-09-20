

#include <stdio.h>
int main()
{
float tempc;
float tempf;
printf("enter temp on celsius");
scanf("%f" , & tempc);
tempf =(tempc*1.8) + 32;
printf("tem in fahrenheit %f",tempf);
return 0;
}
