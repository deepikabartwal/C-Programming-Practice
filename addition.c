#include<stdio.h>

int addition(int number1, int number2){
	return number1+number2;
}

int main(){
	int num1 = 2;
	int num2 = 3;
	printf("The sum of 2 and 3 is %d\n",addition(num1,num2));
}