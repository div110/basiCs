#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(){

int value = 1;
int *pointer = &value; //& means that we are assigning(pointing to) memory address to the pointer (of the 'value' variable) and not the value itself
		       //
		       //
		       //
printf("%p\n",pointer);  // you are printing mix of nums and letts, so it is its own data type i guess
printf("%p\n", &value);  // to print memory address you can simply type it as this without use of pointers, notice that & once again tells that were wanna know where it is not what it is



}
