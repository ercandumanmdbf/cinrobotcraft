#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
	
	int b,i;
	
	srand(time(NULL));
	
	int a=rand()%100;
	
	printf("Guess the number in 10 attempt\n");
	
	for(i=0;i<10;i++){
	
	
	printf("Input a number:\n");
	scanf("%d",&b);
	
	if(b<a){
		printf("The number is bigger \n");
		
	} else if (a<b) {
		printf("The number is smaller \n");
	} else {
		printf("BINGO \n");
		break;
	}
	
	printf("You have %d attempts left\n\n",9-i);
	
	if(i==9){
		
		printf("The number generated is : %d",a);
		
		
	}
	
	
}

	
	return 0;
}