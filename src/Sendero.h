/*
 * Sendero.h
 *
 *  Created on: Dec 19, 2020
 *      Author: acj1999
 */

#ifndef SENDERO_H_
#define SENDERO_H_

class Sendero {
private:
	int id_;
	bool accesibilidad_;
	float duracion_;
public:
	Sendero(int ID, bool accesibilidad = true, float duracion = 0.0) {
		id_ = ID;
		accesibilidad_ = accesibilidad;
		duracion_ = duracion;
	}
	virtual ~Sendero();
	int getID();
	void setID(int ID);
	bool getAccesibilidad();
	void setAccesibilidad(bool accesibilidad);
	float getDuracion();
	void setDuracion(float duracion);
};

#endif /* SENDERO_H_ */
