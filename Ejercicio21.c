#include <stdio.h>

int main(void){

int num;
int suma=0;

printf("Coloque un numero entero\n");
scanf("%d", &num);

if (num>0)
{
    while (num>0){

suma+= num % 10;
num /= 10;

}