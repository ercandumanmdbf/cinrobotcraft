#include "Date.h"
#include <stdlib.h>
#include <stdio.h>


void Date_init(Date* date) {
    date->day = 1;
    date->month = 1;
    date->year = 1990;
}


void Date_initWithValues(Date* date, int day, int month, int year) {
    date->day = day;
    date->month = month;
    date->year = year;
}


void Date_setDay(Date* date, int day) {
    date->day = day;
}

void Date_setMonth(Date* date, int month) {
    date->month = month;
}

void Date_setYear(Date* date, int year) {
    date->year = year;
}


int Date_getDay(const Date* date) {
    return date->day;
}

int Date_getMonth(const Date* date) {
    return date->month;
}

int Date_getYear(const Date* date) {
    return date->year;
}

void Date_show(const Date* date){
	printf("Date: %d / %d / %d",date->day,date->month,date->year);
}

void Date_update(Date* date, int day, int month, int year){
	date->day=day;
	date->month=month;
	date->year=year;
}

int main(){

	
	return 0;
}