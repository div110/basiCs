#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void firstFunction(){
printf("firstFunction()\n");
}



int fiveFunction(){
return 5;
}



int sumFunction(int first, int second){
return first+second;
}

void arrayFunction(char word[4]){

printf("%c%c%c%c", word[0],word[1],word[2],word[3]);
//return 0;
}


int main(){

firstFunction();

printf("\nfiveFunction()\t\t%d\n", fiveFunction());
printf("\n");
printf("sumFunction(4,9)\t%d\n", sumFunction(4,9));
printf("\n");
printf("arrayFunction(\"kity\")\t"); arrayFunction("kity"); printf("\n");
return 0;
}
