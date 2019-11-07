#include "Chambre.h"
#include<iostream>
#include<string>

using namespace std;

int main(){

	Chambre room1(3564, "Single", 2);
	cout<<"id:"<<room1.getID()<<" type:"<<room1.getType()<<" prix par nuit:"<<room1.getPrice()<<endl;
	room1.setChambre(45654,"Double", 56);
	cout<<"id:"<<room1.getID()<<" type:"<<room1.getType()<<" prix par nuit:"<<room1.getPrice()<<endl;
	return 0;
}
