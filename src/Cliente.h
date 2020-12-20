/*
 * Cliente.h
 *
 *  Created on: Dec 19, 2020
 *      Author: acj1999
 */

#ifndef CLIENTE_H_
#define CLIENTE_H_

#include "Ruta.h"
#include "Persona.h"
#include <list>

class Cliente: public Persona {
private:
	int acompanantes_;
	int id_ruta_;
public:
	Cliente(string DNI, string nombre = " ", int edad = 0, int telefono = 0, int acompanantes = 0, int id_ruta = 0):Persona(DNI, nombre, edad, telefono) {
		acompanantes_ = acompanantes;
		id_ruta_ = id_ruta;
	}
	virtual ~Cliente();
	int getAcompanantes();
	void setAcompanantes(int acompanantes);
	int getRuta();
	void setRuta();
};

#endif /* CLIENTE_H_ */
