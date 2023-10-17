#include<stdio.h>

int main(){

int num;
printf("Ingrese un numero entero\n");
scanf("%d", &num);

for (int i = 1; i <= num; i++)
{
    if (num % i == 0)
    {
        printf("%d\n", i);
    }
    
}


}