#include <stdio.h>

int main(){
	
	printf("Write down 5 numbers:\n");
	
	int number[4];
	
	for(int i=0;i<5;i++){
		
		printf("\n%d. Number:",i+1);
		scanf("%d",&number[i]);
		
	}
	printf("\n\n");
	for (int j=1;j<6;j++){
		printf("%d. number in the array is: %d \n\n",j,number[j-1]);
	}
	
	
	
	return 0;
}