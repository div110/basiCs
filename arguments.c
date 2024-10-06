#include <stdio.h>
#include <stdlib.h>
// main s intem pocet argumentu(def 1, argc) ; char*argv pointer argv that can point to any char* variable (main makes it arguments from execution)
int main(int argc, char* argv[]){

char value[]="\nnonsense\n";
//printf(value);
printf("%i\n", argc);
printf(argv[1]);
printf("\n");
//char* arg1[]=argv[1];
return 1; //bash takes this as error code == 0 is OK, non0 is bad
}

