#include <stdio.h>

int main (){

	int number[10];
	int sum;
	
	for (int i=0;i<10;i++){
		
		
		printf("%d. number ",i+1);
		scanf("%d",&number[i]);
		
		if(number[i]<0){
			printf("Process killed");
			break;
		}
	sum+=number[i];
	}


printf("%d total",sum);

return 0;

}