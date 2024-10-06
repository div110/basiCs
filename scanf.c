#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


char userInput[20];

int main(int argc, char *argvp[]){
	printf("Type of Pasta: \n");
	scanf("%s", &userInput);
	printf("%s\n", userInput);
	printf("%d", strlen(userInput));




}
