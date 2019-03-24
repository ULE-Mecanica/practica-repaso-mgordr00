#include <stdio.h>
int main ()
{
int a,cont;
for (cont=0;cont<3;cont++)
{
printf("Introduzca la contraseña numérica\n");
scanf("%d",&a);
if (a<4567)
{
printf("La contraseña es mayor\n");
}if (a>4567)
{
printf("La contraseña es menor\n");
}if (a==4567)
{
printf("Contraseña correcta\n");
break;
}}}
