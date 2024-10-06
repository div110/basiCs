#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]){

printf("following shows how the for loop terminates before num 5, using break if condition");
for (int i = 0; i < 10; i++) {
	if(i == 5){
	break;
	}
	else{
	printf("%d\n", i);
	}

}
printf("\n\n\n");
printf("following shows iteration skip on number 5 using if continue\n");
for (int j=0;j < 10; j++){
if (j == 5) {
	continue;
}
else{
	printf("%d\n", j);
}
}

}
