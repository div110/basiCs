#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

int number;


printf("Number: ");
scanf("%d", &number);
printf("\n");


int *pointer = &number;


printf("Address:\t%p\n", pointer);
printf("Value:\t\t%d\n",*pointer); 


return 0;
}
