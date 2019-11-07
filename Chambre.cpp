#include "Chambre.h"
#include<iostream>
#include<string>

using namespace std;

int Chambre::getID(){
	return id;
}
string Chambre::getType(){
	return type;
}
int Chambre::getPrice(){
	return price;
}
void Chambre::setID(int inputID){
	id = inputID;
}
void Chambre::setType(string inputType){
	type = inputType;
}
void Chambre::setPrice(int inputPrice){
	price = inputPrice;
}
void Chambre::setChambre(int inputID, string inputType, int inputPrice){
	setID(inputID);
	setType(inputType);
	setPrice(inputPrice);
}
Chambre::Chambre(int inputID, string inputType, int inputPrice){
	id = inputID;
	type = inputType;
	price = inputPrice;
}
