#include <stdio.h>
int multiplica( int a, int b);
int main ()
{
int num1,num2,m;
printf("Dame un nº\n");
scanf("%d",&num1);
printf("Dame otro nº\n");
scanf("%d",&num2);
m=multiplica(num1,num2);
printf("Resultado:\n");
printf("%d*%d=%d\n",num1,num2,m);
return 0;
}
int multiplica( int a, int b)
{
int i,suma=0;
for(i=1;i<=b;i++)
{
suma=suma+a;
}
return suma;
}
