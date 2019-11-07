#include <iostream>
#include "Client.h"
int main() {
	Client client1(120,'Thomas','Guillaume',2); //test avec client1
	std::cout << "L'identifiant client est " << client1.getId() << std::endl;
	std::cout << "Le nom du client est " << client1.getName() << std::endl;
	std::cout << "Le prénom du client est " << client1.getPrenom() << std::endl;
	std::cout << "Le nbre de reservation est " << client1.getReservenumbers() << std::endl;
	return 0;
}