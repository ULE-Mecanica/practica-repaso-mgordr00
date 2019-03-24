#include <stdio.h>
int factorial1 (int a);
int main ()
{
int n,z;
printf("Dame un nº\n");
scanf("%d",&n);
z=factorial1(n);
printf("El resultado es: %d\n",z);
}
int factorial1 (int a){
int factorial=1,i=1;
do {
i++;
factorial=factorial*i;
}
while (i<a);
return factorial;
}
