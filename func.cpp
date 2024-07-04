#include <stdio.h>

int hello(){
	printf("Hello World!\n");
	
	printf("What is your name?");
	char name[10];
	scanf("%s",&name);
	printf("Hello %s\n\n",name);
	return 0;
}

int sum(){
	
	float num1,num2;
	printf("Input the first number:\n");
	scanf("%f",&num1);
	printf("Input the second number:\n");
	scanf("%f",&num2);
	float sum=num1+num2;
	printf("Sum:%.2f\n\n",sum);
	return 0;
}

bool checkAge(int age){
	
	
	if (age>=18){
		return 1;
	} else {
	return 0;
	}
	
}


int main(){
//	hello();
//	sum();
	
		int age;
	printf("Enter your age:\n");
	scanf("%d",&age);
	printf("%h",checkAge(age));
	return 0;
}