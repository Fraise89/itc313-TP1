#include "Hotel.h"
#include <string>
#include <iostream>

using namespace std;

int main(){
	Hotel hotel1(1250, "Le Bellagio", "Las Vegas", 15000);
	cout<<"L'identifiant est:"<<hotel1.getId()<<endl;
	cout<<"Le nom est:"<<hotel1.getName()<<endl;
	cout<<"Il se trouve à:"<<hotel1.getCity()<<endl;
	return 0; 
}