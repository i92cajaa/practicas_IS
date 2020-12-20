/*
 * Ruta.cpp
 *
 *  Created on: Dec 19, 2020
 *      Author: acj1999
 */

#include "Ruta.h"

Ruta::~Ruta() {
	// TODO Auto-generated destructor stub
}

int Ruta::getID2() {
	return id2_;
}

void Ruta::setID2(int ID2) {
	id2_ = ID2;
}

bool Ruta::addSendero(Sendero sendero1) {
	list<Sendero>::iterator it;
	for(it = sendero_.begin(); it != sendero_.end(); ++it) {
		if(sendero1.getID() == it->getID()) {
			return false;
		}
	}
	sendero_.push_back(sendero1);
	return true;
}

int Ruta::borrarSendero(int ID) {
	list<Sendero>::iterator it;
	if(sendero_.empty() == true) {
		return -1;
	}
	for(it = sendero_.begin(); it != sendero_.end(); ++it) {
		if(it->getID() == ID) {
			sendero_.erase(it);
			return 1;
		}
	}
	return -2;
}

void Ruta::actualizarRuta() {
	list<Sendero>::iterator it;
	string nomfich = getID2() + ".txt";
	ofstream fich(nomfich.c_str());
	fich << getID2() << "\n";
	fich << "Senderos: ";
	for(it = sendero_.begin(); it != sendero_.end(); ++it) {
		fich << it->getID() << " ";
	}
	fich << "\n";
	fich << getGuia() << "\n";
	fich << getDuracionTotal() << "\n";
	fich << getFecha() << "\n";
	fich << getCapacidad() << "\n";
	fich << getAccesibilidad2() << "\n";
}

void Ruta::addRuta() {
	ofstream aux;
	string auxCadena;
	string nomfich = "Rutas.txt";
	ifstream fich(nomfich.c_str());
	if(!fich) {
		ofstream fich(nomfich.c_str());
		fich << getID2() << "\n";
		fich.close();
	}
	else {
		aux.open("auxiliar.txt");
		while(getline(fich,auxCadena,'\n') && !fich.eof()) {
			aux << auxCadena << "\n";
		}
		aux << getID2() << "\n";
		aux.close();
		remove("Rutas.txt");
		rename("auxiliar.txt", "Rutas.txt");
	}
}

void Ruta::borrarRuta() {
	ofstream aux;
	string auxCadena;
	string nomfich = "Rutas.txt";
	ifstream fich(nomfich.c_str());
	if(!fich) {
		cout << "La ruta no existe \n";
	}
	else {
		aux.open("auxiliar.txt");
		while(getline(fich,auxCadena,'\n') && !fich.eof()) {
			if(stoi(auxCadena) != getID2()) {
				aux << auxCadena << "\n";
			}
		}
		aux.close();
		remove("Rutas.txt");
		rename("auxiliar.txt", "Rutas.txt");
	}
}

list<Sendero> Ruta::getSenderos() {
	return sendero_;
}

string Ruta::getGuia() {
	return guia_;
}

void Ruta::setGuia(string guia_asociado) {
	guia_ = guia_asociado;
}

float Ruta::getDuracionTotal() {
	return duracion_total_;
}

void Ruta::setDuracionTotal() {
	float contador = 0.0;
	list<Sendero>::iterator it = sendero_.begin();
	while(it != sendero_.end()) {
		contador += it->getDuracion();
		*it++;
	}
	duracion_total_ = contador;
}

string Ruta::getFecha() {
	return fecha_;
}

void Ruta::setFecha(string fecha) {
	fecha_ = fecha;
}

int Ruta::getCapacidad() {
	return capacidad_;
}

void Ruta::setCapacidad(int capacidad) {
	capacidad_ = capacidad;
}

bool Ruta::getAccesibilidad2() {
	return accesibilidad2_;
}

void Ruta::setAccesibilidad2() {
	int buscador = 0;
	list<Sendero>::iterator it = sendero_.begin();
	while(it != sendero_.end()) {
		if(it->getAccesibilidad() == false) {
			buscador = 1;
		}
		*it++;
	}
	if(!buscador){accesibilidad2_ = true;}
	else {accesibilidad2_ = false;}
}

