#include <stdio.h>

int main (){
	int sayi;
    int sayac = 0;
    
    printf("Input a number ");
    scanf("%d",&sayi);
    
    for(int i = 2; i < sayi; i++)
    {
        if(sayi % i == 0){
            sayac++;     
        }
    }
    if(sayac == 0){
        printf("%d is prime.",sayi);
    }
    else{
        printf("%d is not prime.",sayi);
    }
	
	return 0;
}