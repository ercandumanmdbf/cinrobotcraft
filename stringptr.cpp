#include <stdio.h>
#include <stdlib.h>

int main (){
	
	char str[100];
	
	int counter=0;
	
	char *ptr;
	
	printf("Enter a string:");
	fgets(str,sizeof(str),stdin);
	
	ptr=str;
	
	while (*ptr!='\0'){
		if(*ptr!='\n'){
			counter++;
			
		}
		ptr++;
	}
	printf("Number of characters in string: %d\n",counter);
	
	return 0;
}