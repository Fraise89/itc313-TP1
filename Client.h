#define _Client_h
class Client
{
public:
	Client(int id, char name, char prenom, int reservenumbers);
	int getId();
	char getName();
	char getPrenom();
	int getReservenumbers();

private:
	int m_id;
	char m_name;
	char m_prenom;
	int m_reservenumbers;
	
};