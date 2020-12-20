/*
 * Persona.cpp
 *
 *  Created on: Dec 19, 2020
 *      Author: acj1999
 */

#include "Persona.h"

Persona::Persona(string DNI, string nombre, int edad, int telefono) {
	dni_ = DNI;
	nombre_ = nombre;
	edad_ = edad;
	telefono_ = telefono;

}

Persona::~Persona() {
	// TODO Auto-generated destructor stub
}

string Persona::getDNI() {
	return dni_;
}
void Persona::setDNI(string DNI) {
	dni_ = DNI;
}
string Persona::getNombre() {
	return nombre_;
}
void Persona::setNombre(string nombre) {
	nombre_ = nombre;
}
int Persona::getEdad() {
	return edad_;
}
void Persona::setEdad(int edad) {
	edad_ = edad;
}
int Persona::getTlf() {
	return telefono_;
}
void Persona::setTlf(int telefono) {
	telefono_ = telefono;
}

