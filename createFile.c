#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(char* argv[]){

FILE *filePointer;

filePointer = fopen(argv[1], "w");

fclose(filePointer);

}
