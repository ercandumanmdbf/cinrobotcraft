#include <stdio.h>



int main (){
	
label:
int a=0;
	while(a<11){
		printf("%d ",a);
		a++;
	}
	printf("\n\n");
int b=10;
	while(b>-1){
		printf("%d ",b);
		b--;
	}
	printf("\n\n");
int c=0;	
do {
	printf("%d ",c);
	c++;
} while (c<11) ;

printf("\n\n");

int d=10;	
do {
	printf("%d ",d);
	d--;
} while (d>-1) ;

	printf("\n\n");
	
	int num1,num2;
	printf("First number:\n");
	scanf("%d",&num1);
	
	printf("Second number:\n");
	scanf("%d",&num2);
	
	if (num1>num2){
		printf("%d number is greater\n",num1);
		printf("%d number is lower\n\n",num2);
		do {
	printf("%d ",num1);
	num1--;
} while (num1>num2) ;
		
	} else {
		printf("%d number is greater\n",num2);
		printf("%d number is lower\n\n",num1);
		do {
	printf("%d ",num2);
	num2--;
} while (num2>num1) ;
	}
	
	ask:
	char ans;
	printf("Do you want to continue: Y/N");
	scanf("%c",&ans);
	
	
	if(ans == 'y' || ans=='Y'){
		goto label;
	} else if (ans =='n' || ans=='N'){
		goto end;
	}else {
		printf("Wrong choice");
		goto ask;
	}
	end:
	return 0;
}