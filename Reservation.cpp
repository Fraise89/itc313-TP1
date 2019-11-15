#include "Reservation.h"
#include "Date.h"
#include<iostream>

using namespace std;

int Reservation::getIDReservation(){
        return IDReservation;
}
int Reservation::getDayBeginn(){
	return dayBeginn;
}
int Reservation::getMounthBeginn(){
	return mounthBeginn;
}
int Reservation::getYearBeginn(){
	return yearBeginn;
}
int Reservation::getDayEnd(){
	return dayEnd;
}
int Reservation::getMounthEnd(){
	return mounthEnd;
}
int Reservation::getYearEnd(){
	return yearEnd;
}
int Reservation::getIDHotel(){
        return IDHotel;
}
int Reservation::getIDChambre(){
       return IDChambre;
}
int Reservation::getIDClient(){
   return IDClient;
}
int Reservation::getSoldeTotal(){
   return soldeTotal;
}
void Reservation::setIDReservation(int inputIDReservation){
	IDReservation = inputIDReservation;
}
void Reservation::setDayBeginn(int inputDayBeginn){
	dayBeginn = inputDayBeginn;
}
void Reservation::setMounthBeginn(int inputMounthBeginn){
	mounthBeginn = inputMounthBeginn;
}
void Reservation::setYearBeginn(int inputYearBeginn){
	yearBeginn = inputYearBeginn;
}
void Reservation::setDayEnd(int inputDayEnd){
	dayEnd = inputDayEnd;
}
void Reservation::setMounthEnd(int inputMounthEnd){
	mounthEnd = inputMounthEnd;
}
void Reservation::setYearEnd(int inputYearEnd){
	yearEnd = inputYearEnd;
}
void Reservation::setIDHotel(int inputIDHotel){
	IDHotel = inputIDHotel;
}
void  Reservation::setIDChambre(int inputIDChambre){
	IDChambre = inputIDChambre;
}
void Reservation::setIDClient(int inputIDClient){
	IDClient = inputIDClient;
}
void Reservation::setSoldeTotal(int inputSoldeTotal){
	soldeTotal = inputSoldeTotal;
}
int Reservation::calculSoldeTotal(int prix){
	int nbNuit = (yearEnd-yearBeginn)*426 + (mounthEnd-mounthBeginn)*12 + (dayBeginn-dayEnd);
	int prixTotal = nbNuit*prix;
	if (nbNuit > 100){
		//remise de 10 %
		prixTotal *= 0.9;
	}
	return nbNuit*prix;
}
Reservation::Reservation(int inputIDReservation,int inputDayBeginn, int inputMounthBeginn, int inputYearBeginn, int inputDayEnd, int inputMounthEnd, int inputYearEnd, int inputIDHotel, int inputIDChambre, int inputIDClient, int inputSoldeTotal){
	setIDReservation(inputIDReservation);
	int dateCorrect = 0;
	setIDHotel(inputIDHotel);
	setIDChambre(inputIDChambre);
	setIDClient(inputIDClient);
	setSoldeTotal(inputSoldeTotal);

	//on compare les dates
	if (inputYearBeginn < inputYearEnd){
		dateCorrect = 1;
	}else if  (inputYearBeginn == inputYearEnd and inputMounthBeginn < inputMounthEnd){
		dateCorrect = 1;
	}else if (inputYearBeginn == inputYearEnd and inputMounthBeginn == inputMounthEnd and inputDayBeginn < inputDayEnd){
		dateCorrect = 1;
	}
	while (dateCorrect == 0){
		cout<<"Date de sortie plus récente que la date d'entré, rentrez de nouvelle dates:"<<endl;
		int varTampon;
		cout<<"jour de d'arrivé:"<<endl;
		cin>>varTampon;
		cin.ignore();
		inputDayBeginn = varTampon;
		cout<<"mois d'arrivé:"<<endl;
		cin>>varTampon;
		cin.ignore();
		inputMounthBeginn = varTampon;
		cout<<"année d'arrivé:"<<endl;
		cin>>varTampon;
		cin.ignore();
		inputYearBeginn = varTampon;
		cout<<"jour de départ:"<<endl;
		cin>>varTampon;
		cin.ignore();
		inputDayEnd = varTampon;
		cout<<"mois de départ:"<<endl;
		cin>>varTampon;
		cin.ignore();
		inputMounthEnd = varTampon;
		cout<<"année de départ:"<<endl;
		cin>>varTampon;
		cin.ignore();
		inputYearEnd = varTampon;

		//on vérifie si la date est correct
		

		if (inputDayBeginn < inputYearEnd){
                	dateCorrect = 1;
       		 }else if  (inputYearBeginn == inputYearEnd and inputMounthBeginn < inputMounthEnd){
        	        dateCorrect = 1;
       		 }else if (inputYearBeginn == inputYearEnd and inputMounthBeginn == inputMounthEnd and inputDayBeginn < inputDayEnd){
        	        dateCorrect = 1;
	        }


	}
	dayBeginn = inputDayBeginn;
	mounthBeginn = inputMounthBeginn;
	yearBeginn = inputYearBeginn;
	dayEnd = inputDayEnd;
	mounthEnd = inputMounthEnd;
	yearEnd = inputYearEnd;

}
