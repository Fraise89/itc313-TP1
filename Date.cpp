#include<iostream>
#include "Date.h"

using namespace std;

int Date::getDay(){
	return day;
}
int Date::getMounth(){
	return mounth;
}
int Date::getYear(){
	return year;
}

void Date::setDay(int inputDay){
	if (inputDay > 0 and inputDay < 32){
		day = inputDay;
	}else{
		cout<<"Valeur du jour incohérente"<<endl;
	}
}
void Date::setMounth(int inputMounth){
	if (inputMounth > 0 and inputMounth < 13){
		mounth = inputMounth;
	}else{
		cout<<"Valeur du mois incohérente"<<endl;
	}
}
void Date::setYear(int inputYear){
	year = inputYear;
}
void Date::setDate(int inputDay, int inputMounth, int inputYear){
	setDay(inputDay);
	setMounth(inputMounth);
	setYear(inputYear);
}
Date::Date(int inputDay, int inputMounth, int inputYear){
	if (inputDay > 0 and inputDay < 32){
		setDay(inputDay);
	}else{
		setDay(1);
		cout<<"jour initialisé à 1"<<endl;
	}
	if (inputMounth > 0 and inputMounth < 13){
		setMounth(inputMounth);
	}else{
		setMounth(1);
		cout<<"mois initialisé à 1"<<endl;
	}
	setYear(inputYear);
}
