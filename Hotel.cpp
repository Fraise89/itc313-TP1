#include <string>
#include "Hotel.h"
#include "Chambre.h"
#include <iostream>
#include <vector>
Hotel::Hotel(int id, std::string name, std::string city, int roomlist){
	m_id = id;
	m_name = name;
	m_city = city;
	m_roomlist = roomlist;
}
int Hotel::getId(){
	return m_id;
}
int Hotel::getRoomlist(){
	return m_roomlist;
}
std::string Hotel::getName(){
	return m_name;
}
std::string Hotel::getCity(){
	return m_city;
}
