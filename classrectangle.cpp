#include <stdio.h>
#include <stdlib.h>

typedef struct {
	float height;
	float width;
}Rectangle;

void Rectangle_init(Rectangle *rect){
	
	rect->height=0.0;
	rect->width=0.0;
}

void Rectangle_setHeight(Rectangle *rect,float height){
	rect->height=height;
}

float Rectangle_getHeight(Rectangle *rect){
	return rect->height;
}

void Rectangle_setWidth(Rectangle *rect,float width){
	rect->width=width;
}

float Rectangle_getWidth(Rectangle *rect){
	return rect->width;
}

float Rectangle_getArea(Rectangle *rect){
	return rect->height*rect->width;
}


int main (){
	Rectangle rect;
	Rectangle_init(&rect);
	
	printf("Input the width of rectangle:");
	int w;
	scanf("%f",&w);
	
	Rectangle_setWidth(&rect,w);
	
	printf("\nInput the height of rectangle:");
	int h;
	scanf("%f",&h);
	
	Rectangle_setHeight(&rect,h);
	
	printf("\nThe area is %f",Rectangle_getArea(&rect));
	
	return 0;
}
/*
we are all having issues in implementing classes in C language
*/