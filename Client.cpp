#include "Client.h"
Client::Client(int id, char name, char prenom, int reservenumbers){ //constructor
	m_id = id;
	m_name = name;
	m_prenom = prenom;
	m_reservenumbers = reservenumbers;
}
int Client::getId(){ //getter1
	return m_id;
}
char Client::getName(){ //getter2
	return m_name;
}
char Client::getPrenom(){ //getter3
	return m_name;
}
int Client::getReservenumbers(){ //getter4
	return m_reservenumbers;
}
