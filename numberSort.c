#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, char* argv[]){

int swap;
int length;


printf("How many numbers: ");
scanf("%d",&length);  // \n breaks stuff???

int list[length];
	


for(int i = 0; i<length; i++){

printf("%d Number: ",i+1);
scanf("%d", &list[i]);

}


for(int j = 0;j<length/2;j++){
for(int i=0;i<length-1;i++){
//printf("iteration\n");
	
if(list[i]>=list[i+1]){
	
	printf("NOP iteration\n");
	continue;
	}
	printf("iter\n");	
	swap = list[i];
	list[i] = list[i+1];
	list[i+1]= swap;
	//printf("%d\n", list[i]);
}
}
printf("\n\n");


for(int i=0;i<length;i++){
	printf("%d\n",list[i]);
	}



}
