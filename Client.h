#include <string>
#ifndef _Client_h
#define _Client_h
class Client
{
public:
	Client(int id, std::string name, std::string prenom, int reservenumbers);
	int getId();
	std::string getName();
	std::string getPrenom();
	int getReservenumbers();
	void set_Client(int id = 0, int reservenumbers = -1, std::string name = "Indiquer", std::string prenom = "Indiquer");

private:
	int m_id;
	std::string m_name;
	std::string m_prenom;
	int m_reservenumbers;
	
};
