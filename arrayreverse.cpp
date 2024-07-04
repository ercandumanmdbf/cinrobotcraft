#include <stdio.h>

int main (){
	
	int elements;
	int numbers[25];
	
	printf("Enter the number of elements in array:");
	scanf("%d",&elements);
	
	for(int i=0;i<elements;i++){
		
		numbers[i]=i;
	}
	
	printf("Enter array elements: \n");
	for(int n=0;n<elements;n++){
		printf("%d ",numbers[n]);
	}
	
	printf("\n\nReverse array is: \n");
	
	
	for(int j=elements-1;j>=0;j--){
		printf("%d ",numbers[j]);	
	}                               
	
	return 0;
}