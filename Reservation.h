#ifndef DEF_RESERVATION
#define DEF_RESERVATION

#include "Date.h"

using namespace std;

class Reservation{
	public:
	Reservation(int inputIDReservation, int inputDayBeginn, int inputMounthBeginn, int inputYearBeginn, int inputDayEnd, int inputMounthEnd, int inputYearEnd, int inputIDHotel, int inputIDChambre, int inputIDClient, int inputSoldeTotal);
	int getIDReservation();
	int getDayBeginn();
	int getMounthBeginn();
	int getYearBeginn();
	int getDayEnd();
	int getMounthEnd();
	int getYearEnd();
	int getIDHotel();
	int getIDChambre();
	int getIDClient();
	int getSoldeTotal();
	int calculSoldeTotal(int prix);
	void setIDReservation(int inputIDReservation);
	void setDayBeginn(int inputDayBeginn);
	void setMounthBeginn(int inputMounthBeginn);
	void setYearBeginn(int inputYearBeginn);
	void setDayEnd(int inputDayEnd);
	void setMounthEnd(int inputMounthEnd);
	void setYearEnd(int inputYearEnd);
	void setIDHotel(int inputIDHotel);
	void setIDChambre(int inputIDChambre);
	void setIDClient(int inputIDClient);
	void setSoldeTotal(int inputSoldeTotal);
	private:
	int IDReservation;
	int dayBeginn, mounthBeginn, yearBeginn, dayEnd, mounthEnd, yearEnd;
	int IDHotel;
	int IDChambre;
	int IDClient;
	int soldeTotal;
	
};
#endif
