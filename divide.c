#include <stdio.h>
int divide( int a, int b);
int main ()
{
int num1,num2,d;
printf("Dame un nº\n");
scanf("%d",&num1);
printf("Dame otro nº\n");
scanf("%d",&num2);
d=divide(num1,num2);
printf("Resultado:\n");
printf("%d/%d=%d\n",num1,num2,d);
return 0;
}
int divide( int a, int b)
{
int i,resta=0;
while (a>=b)
{
a-=b;
resta++;
}return resta;
}


