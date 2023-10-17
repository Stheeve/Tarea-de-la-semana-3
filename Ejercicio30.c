#include<stdio.h>

int main(){

int num;
printf("Ingrese un numero entero\n");
scanf("%d", &num);
if (num>0)
{
printf("Los componentess numericos de %d son:\n", num);
for (int i = 1; i <= num; i++)
{
    if (num % i == 0)
    {
        printf("%d\n", i);
    }
    
}


}
else   
{
    printf("El numero que ingreso es un numero negativo\n");
}
}



