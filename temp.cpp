#include <stdio.h>

int main (){
	
	int temp;
	printf("Input the temperature in celcius:");
	scanf("%d",&temp);
	
	if (temp>35){
		printf("HOT!");
	}
	else if (temp<10){
		printf("cold");
	} else {
		printf("Normal");
	}
	
	return 0;
	
}