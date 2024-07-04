#include <stdio.h>

int main (){
	
	int numbers[10];
	
	printf("Input the numbers of array");
	
	for(int i=0;i<10;i++){
		
		printf("\n%d number is: ",i+1);
		scanf("%d",&numbers[i]);
	}
	
	printf("\n\nWhich number you want to search in array: ");
	int searchnum;
	scanf("%d",&searchnum);
	
	for(int j=0;j<10;j++){
		
		if(numbers[j]==searchnum){
			printf("\nThis number is in the array");
		} else{
			printf("\nNot found");
			break;
		}
	}
	
	
	
}