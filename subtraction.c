#include<stdio.h>

int subtract(subtrahend,minuend){
	return subtrahend-minuend;
}

int main(){
	printf("The difference between 35 and 24 is %d\n",subtract(35,24));
}