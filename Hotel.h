/*
	Fichier: Hotel.h
	Auteur: Thibaut
	Date: 7/11
	Matiere: C-C++ Programming / Esirem 3A IT 
	*/
#include <string>
#include <array>
#ifndef _Hotel_h
#define _Hotel_h 
class Hotel
{
public:
	Hotel(int id, std::string name, std::string city, int roomlist);
<<<<<<< HEAD
	int getId();
	int getRoomlist();
	std::string getName();
	std::string getCity();
=======
	int getId() const;
	int getRoomlist() const;
	std::string getName() const;
	std::string getCity() const;
>>>>>>> 9bd903b24cd369f86ebc94c73872f61b8daad97c
	Hotel tabChambre();

private:
int m_id;
int m_roomlist;
std::string m_name;
std::string m_city;	
};
#endif
