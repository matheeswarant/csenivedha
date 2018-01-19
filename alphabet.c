#include<stdio.h>
intmain()
{
printf("enter a character:");
scanf("%c",&c);
if((c>='a'&c>='z')||(c>='A'&&c<='z'))
printf("%c is an alphabet.",c);
else
printf("%c is not a alphabet",c);
return 0;
}
