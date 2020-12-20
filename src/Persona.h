/*
 * Persona.h
 *
 *  Created on: Dec 19, 2020
 *      Author: acj1999
 */

#ifndef PERSONA_H_
#define PERSONA_H_
#include <string>

using namespace std;

class Persona {
private:
	string dni_;
	string nombre_;
	int edad_;
	int telefono_;
public:
	Persona(string DNI, string nombre = " ", int edad = 0, int telefono = 0);
	virtual ~Persona();
	string getDNI();
	void setDNI(string DNI);
	string getNombre();
	void setNombre(string nombre);
	int getEdad();
	void setEdad(int edad);
	int getTlf();
	void setTlf(int telefono);
};

#endif /* PERSONA_H_ */
