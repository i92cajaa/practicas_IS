/*
 * Sendero.cpp
 *
 *  Created on: Dec 19, 2020
 *      Author: acj1999
 */

#include "Sendero.h"

Sendero::~Sendero() {
	// TODO Auto-generated destructor stub
}

int Sendero::getID() {
	return id_;
}

void Sendero::setID(int ID) {
	id_ = ID;
}

bool Sendero::getAccesibilidad() {
	return accesibilidad_;
}

void Sendero::setAccesibilidad(bool accesibilidad) {
	accesibilidad_ = accesibilidad;
}

float Sendero::getDuracion() {
	return duracion_;
}

void Sendero::setDuracion(float duracion){
	duracion_ = duracion;
}

