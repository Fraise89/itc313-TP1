#ifndef DEF_RESERVATION
#define DEF_RESERVATION

#include "Date.h"

using namespace std;

class Reservation(){
	public:
	Reservation(int inputIDReservation, Date inputDateDebut, Date inputDateFin, int inputIDHotel, int inputIDChambre, int inputIDClient, int inputSoldeTotal);
	int getIDReservation();
	Date getDateDebut();
	Date getDateFin();
	int getIDHotel();
	int getIDChambre();
	int getIDClient();
	int getSoldeTotal();
	int CalculSoldeTotal();
	void setIDReservation(int inputIDReservation);
	void setDateDebut(Date inputDateDebut);
	void setDateFin(Date inputDateFin);
	void setIDHotel(int inputIDHotel);
	void setIDChambre(int inputIDChambre);
	void setIDClient(int inputIDClient);
	void setSoldeTotal(int inputSoldeTotal);
	private:
	int IDReservation;
	Date dateDebut;
	Date dateFin;
	int IDHotel;
	int IDChambre;
	int IDClient;
	int soldeTotal;
	
};
