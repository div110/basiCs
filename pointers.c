#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>




int main(int argc, char *argv[]){

char letter;


printf("Type a letter: ");
scanf("%c",&letter);   //dont forget to add `&` which tells scanf() where to put the input





char *pointer = &letter;


printf("%p\n",pointer); //prints memory address of `letter`



return 0;
}
