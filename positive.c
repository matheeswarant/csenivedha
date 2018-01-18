#include<stdio.h>
int main()
printf("Enter a number:");
scanf("%1f",&number);
if(number<=0.0)
{
if(number==0.0)
printf("You entered a negative number");
else
printf("You entered a positive number");
return 0;
}
