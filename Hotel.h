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
	int getId();
	int getRoomlist();
	std::string getName();
	std::string getCity();
	Hotel tabChambre();

private:
int m_id;
int m_roomlist;
std::string m_name;
std::string m_city;	
};
#endif