#include <stdio.h>
#include <stdlib.h>

int findLargest(int *array,int size);

int main(){
	
	int n;
	int *array;
	
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	
	array=(int *)calloc(n, sizeof(int));
	
	if(array == NULL){
		return 1;
	}
	
	for(int i=0;i<n;i++){
		printf("\nEnter element %d: ",i+1);
		scanf("%d",&array[i]);
	}
	
	int largest=findLargest(array,n);
	
	printf("\n\nThe largest element is %d",largest);
	
	free(array);
	
	return 0;
}

int findLargest(int *array,int size){
	int largest=*array;
	for (int g=1;g<size;g++){
		if(*(array+g)>largest){
			largest=*(array+g);
		}
	}
	return largest;
}