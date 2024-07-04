#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float calc(int radius){
	float vol= (4/3)*3.14*radius*radius*radius;
	float area= 4*3.14*radius*radius;
	printf("Volume of sphere %.2f",vol);
	printf("\nArea of sphere %.2f",area);
	return 0;
}

int main (){
	int rad;
	printf("Enter radius of the sphere:");
	scanf("%d",&rad);
	
	calc(rad);
	
	return 0;
}