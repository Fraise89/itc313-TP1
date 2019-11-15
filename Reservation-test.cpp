#include <iostream>
#include "Reservation.h"

using namespace std;

int main(){

	Reservation reservation1(12354565, 3,7,1999, 3,7,2009, 465846,32135,465465,12324);
	cout<<"id de reservation: "<< reservation1.getIDReservation()<<" Date de debut : "<< reservation1.getDayBeginn() <<"/"<<reservation1.getMounthBeginn()<<"/"<<reservation1.getYearBeginn()<<endl;
	cout<<"date de fin: "<<reservation1.getDayEnd()<<"/"<<reservation1.getMounthEnd()<<"/"<<reservation1.getYearEnd()<<endl;
	cout<<"IDhotel: "<<reservation1.getIDHotel()<<" IDChambre: "<< reservation1.getIDChambre()<<" IDClient: "<< reservation1.getIDClient()<<" Solde total: "<< reservation1.getSoldeTotal()<<endl;

	cout<<"AAAAAAAH"<<endl;

	return 0;
}
