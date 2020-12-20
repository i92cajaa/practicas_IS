/*
 * Cliente.cpp
 *
 *  Created on: Dec 19, 2020
 *      Author: acj1999
 */

#include "Cliente.h"

Cliente::~Cliente() {
	// TODO Auto-generated destructor stub
}

int Cliente::getAcompanantes() {
	return acompanantes_;
}
void Cliente::setAcompanantes(int acompanantes) {
	acompanantes_ = acompanantes;
}
int Cliente::getRuta() {
	return id_ruta_;
}
void Cliente::setRuta() {
	int eleccion;
	ifstream fich;
	string auxCadena, nomFich;
	fich.open("Rutas.txt");
	cout << "Elija una de las siguientes rutas: \n";
	while(getline(fich,auxCadena,'\n') && !fich.eof()) {
		nomFich = auxCadena + ".txt";
		ifstream ruta(nomFich.c_str());
		while(getline(ruta,auxCadena,'\n') && !ruta.eof()) {
			cout << auxCadena << "\n";
			getline(ruta,auxCadena,'\n');
			cout << auxCadena << "\n";
			getline(ruta,auxCadena,'\n');
			cout << auxCadena << "\n";
			getline(ruta,auxCadena,'\n');
			cout << auxCadena << "\n";
			getline(ruta,auxCadena,'\n');
			cout << auxCadena << "\n";
			getline(ruta,auxCadena,'\n');
			cout << auxCadena << "\n";
			getline(ruta,auxCadena,'\n');
			cout << auxCadena << "\n";
			getline(ruta,auxCadena,'\n');
		}
		ruta.close();
	}
	fich.close();
	cin >> eleccion;
	id_ruta_ = eleccion;
}
