#include<iostream>
#include "Date.h"

using namespace std;

int main(){
	Date date1(3,7,1999);
	cout<<"jour:"<<date1.getDay()<<" mois:"<<date1.getMounth()<<" année:"<<date1.getYear()<<endl;
	date1.setDate(2,9,2003);
	cout<<"jour:"<<date1.getDay()<<" mois:"<<date1.getMounth()<<" année:"<<date1.getYear()<<endl;
	date1.setDate(-25,3,2045);
	cout<<"jour:"<<date1.getDay()<<" mois:"<<date1.getMounth()<<" année:"<<date1.getYear()<<endl;

	return 0;
}
