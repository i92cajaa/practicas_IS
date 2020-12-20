/*
 * Ruta.h
 *
 *  Created on: Dec 19, 2020
 *      Author: acj1999
 */

#ifndef RUTA_H_
#define RUTA_H_

#include "Sendero.h"
#include "Guia.h"
#include <list>
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class Ruta {
private:
	int id2_;
	list<Sendero> sendero_;
	string guia_;
	float duracion_total_;
	string fecha_;
	int capacidad_;
	bool accesibilidad2_;
public:
	Ruta(int ID2, string guia = " ", float duracion = 0, string fecha = " ", int capacidad = 0, bool accesibilidad = true) {
		id2_ = ID2;
		guia_ = guia;
		duracion_total_ = duracion;
		fecha_ = fecha;
		capacidad_ = capacidad;
		accesibilidad2_ = accesibilidad;
	}
	virtual ~Ruta();
	int getID2();
	void setID2(int ID2);
	bool addSendero(Sendero sendero1);
	int borrarSendero(int ID);
	void actualizarRuta();
	void addRuta();
	void borrarRuta();
	list<Sendero> getSenderos();
	string getGuia();
	void setGuia(string guia_asociado);
	float getDuracionTotal();
	void setDuracionTotal();
	string getFecha();
	void setFecha(string fecha);
	int getCapacidad();
	void setCapacidad(int capacidad);
	bool getAccesibilidad2();
	void setAccesibilidad2();
};

#endif /* RUTA_H_ */
