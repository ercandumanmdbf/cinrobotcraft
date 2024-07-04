#include <stdio.h>

int main (){
	
	int i=1;
	
	printf("First 10 natural numbers:\n");
	for(i;i<11;i++){
		printf("%d ",i);
	}
	
	int last;
	printf("\n\n\nGive the last number:\n");
	scanf("%d",&last);
		int num=1;
		int sum;
	for(int j=1;j<=last;j++){
	
		sum+=num;
		num++;
		
	}
	printf("%d\n\n",sum);
	
	
	int giris,toplam=0,sayi,counter=1;
	printf("Input the number count:\n");
	scanf("%d",&giris);
	for (int h=0;h<giris;h++){
		
		printf("Input the %d. number:",counter);
		scanf("%d",&sayi);
		toplam +=sayi;
		counter+=1;
		
		
	}

	printf("The sum of inputted numbers is %d",toplam);
	return 0;
}