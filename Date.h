/*
#define DATE_H

class Date{
	private:
		
		int day;
		int month;
		int year;
		
	public:
		
	Date (): day(1),month(1),year(1990){	}
	
	Date(int d, int m, int y): day(d), month(m), year(y){	}
	
	inline void setDay(int d){
	day=d;
	}
	inline void setMonth(int m){
	month=m;
	}
	inline void setYear(int y){
	year=y;
	}
	
	inline int getDay() const{
		return day;
	}
	
	inline int getMonth() const{
		return month;
	}
	
	inline int getYear() const{
		return year;
	}
	
	
};
*/

#ifndef DATE_H
#define DATE_H

typedef struct {
    int day;
    int month;
    int year;
} Date;


void Date_init(Date* date);
void Date_initWithValues(Date* date, int day, int month, int year);

void Date_setDay(Date* date, int day);
void Date_setMonth(Date* date, int month);
void Date_setYear(Date* date, int year);

int Date_getDay(const Date* date);
int Date_getMonth(const Date* date);
int Date_getYear(const Date* date);

#endif 