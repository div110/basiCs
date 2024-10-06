#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


int main(int argc, char * argv){

char array[]= "hello";  
printf("%lu\n", sizeof(array));  //outputs +1 because there is "\0" terminating character




int numArray[] = {12, 8, 9};
for (int i = 0; i< sizeof(numArray)/sizeof(numArray[0]); i++) //length of an array divided by length of one element
{
printf("%d\n",numArray[i]);
}


}
