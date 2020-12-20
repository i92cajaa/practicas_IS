/*
 * Guia.h
 *
 *  Created on: Dec 19, 2020
 *      Author: acj1999
 */

#ifndef GUIA_H_
#define GUIA_H_

#include "Persona.h"

class Guia: public Persona {
private:
	float salario_;
public:
	Guia(string DNI, string nombre = " ", int edad = 0, int telefono = 0, float salario = 0.0):Persona(DNI, nombre, edad, telefono) {
		salario_ = salario;
	}
	virtual ~Guia();
	float getSalario();
	void setSalario(float salario);
};

#endif /* GUIA_H_ */
