#include <stdio.h>

int addNumbers(int *num1,int *num2,int *sum){
	
	
	*sum=*num1+*num2;
	
	return *sum;
}

int main (){
	
	int number1,number2,sum;
	
	printf("Write the first number:");
	scanf("%d",&number1);
	
	printf("\nWrite the second number:");
	scanf("%d",&number2);
	
	addNumbers(&number1,&number2,&sum);
	
	printf("The Sum of %d and %d is: %d",number1,number2,sum);
	
	
	
	
	return 0;
}

