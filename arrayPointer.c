#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



int main(){

int list[]={0,1,2,3};


int *pointer = list;  //points to the first element in the list

printf("%p\n", pointer); //printf("%p\n", list);    DOES THE SAME THING  list===&list[0]
printf("--------------------------\n");
printf("%p\t\tprintf(\"&list[0-3]\");\n",&list[0]);
printf("%p\n",&list[1]);
printf("%p\n",&list[2]);
printf("%p\n",&list[3]);

printf("\n--------------------------\n\n");



printf("%p\t\tprintf(\"list+X\");\n", list);
printf("%p\n", list+1);
printf("%p\n", list+2);
printf("%p\n", list+3);
}
