#ifndef DEF_CHAMBRE
#define DEF_CHAMBRE

#include<string>

using namespace std;

class Chambre{
	public:
	int getID();
	string getType();
	int getPrice();
	void setID(int inputID);
	void setType(string iniputType);
	void setPrice(int inputPrice);
	void setChambre(int inputID, string inputType, int inputPrice);
	Chambre(int inputID, string inputType, int inputPrice);
	private:
	int id;
	string type;
	int price;
};

#endif
