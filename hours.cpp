#include <stdio.h>
#include <stdlib.h>

int hours(int *num,int *hrs){
	
	
	*hrs=*num / 60;
	
	return *hrs;
}

int mins(int *num,int *left){
	*left=*num % 60;
	return *left;
}


int main(){
	
	
	int minutes,hrs,left;
	
	printf("Write down the min:");
	scanf("%d",&minutes);
	
	hours(&minutes, &hrs);
	mins(&minutes,&left);
	
	printf("It is %d hours %d minutes",hrs,left);
	
	
	
	
	return 0;
}