#include "Reservation.h"
#include "Date.h"
#include<iostream>
using namespace std;

int Reservation::getIDReservation(){
        return IDReservationo;
}
Date Reservation::getDateDebut(){
        return dateDebut;
}
Date Reservation::getDateFin(){
        return dateFin;
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
void Reservation::setDateDebut(Date inputDateDebut){
	dateDebut = inputDateDebut;
}
void Reservation::setDateFin(Date inputDateFin){
	dateFin = inputDateFin;
}
void Reservation::setIDHotel(int inputIDHotel){
	IDHotel = inputIDHotel;
}
void  Reservation::setIDChambre(int inputIDChambre){
	IDCHambre = inputIDChambre;
}
void Reservation::setIDClient(int inputIDClient){
	IDClient = inputIDClient;
}
void Reservation::setSoldeTotal(int inputSoldeTotal){
	soldeTotal = inputSoldeTotal;
}
int Reservation::calculSoldeTotal(int prix){
	int nbNuit = (dateFin.getYear()-dateDebut.getYear())*426 + (dateFin.getMounth()-dateDebut.getMounth())*12 + (dateFin.getDay()-dateDebut.getDay);
	int total = nbNuit*prix;
	if nbNuit > 100{
		//remise de 10 %
		total *= 0.9
	}
	return nbNuit*prix;
}
Reservation::Reservation(int inputIDReservation, Date inputDateDebut, Date inputDateFin, int inputIDHotel, int inputIDChambre, inputIDClient, int inputSoldeTotal){
	setIDReservation(inputIDReservation);
	int dateCorrect = 0;
	setIDHotel(inputIDHotel);
	setIDChambre(inputIDChambre);
	setIDClient(inputIDClient);
	setSoldeTotal(int inputSoldeTotal);
	//on compare les dates
	if (inputDatedebut.year < inputDateFin.year){
		dateCorrect = 1;
	}else if  (inputDateDebut.year == inputDateFin.year and inputDateDebut.mounth < inputDateFin.mounth){
		dateCorrect = 1;
	}else if (inputDateDebut.year == inputDateFin.year and inputDateDebut.mounth == inputDateFin.mounth and inputDateDebut.day < inputDateFin.day){
		dateCorrect = 1;
	}
	while (dateCorrect == 0){
		cout<<"Date de sortie plus récente que la date d'entré, rentrez de nouvelle dates:"<<endl;
		int varTampon;
		cout<<"jour de d'arrivé":<<endl;
		cin>>varTampon;
		cin.ignore();
		inputDateDebut.day = varTampon;
		cout<<"mois d'arrivé"<<endl;
		cin>>varTampon;
		cin.ignore();
		inputDateDebut.mounth = varTampon;
		cout<<"année d'arrivé"<<endl;
		cin>>varTampon;
		cin.ignore();
		inputDateDebut.year = varTampon;
		cout<<"jour de départ"<<endl;
		cin>>varTampon;
		cin.ignore();
		inputDateFin.day = varTampon;
		cout<<"mois de départ"<<endl;
		cin>>varTampon;
		cin.ignore();
		inputDateFin.mounth = varTampon;
		cout<<"année de départ"<<endl;
		cin>>varTampon;
		cin.ignore();
		inputDateFin.year = varTampon;

		//on vérifie si la date est correct
			if (inputDatedebut.year < inputDateFin.year){
                	dateCorrect = 1;
       		 }else if  (inputDateDebut.year == inputDateFin.year and inputDateDebut.mounth < inputDateFin.mounth){
        	        dateCorrect = 1;
       		 }else if (inputDateDebut.year == inputDateFin.year and inputDateDebut.mounth == inputDateFin.mounth and inputDate$
        	        dateCorrect = 1;
	        }

	}

}

