#pragma once
#include <iostream>
#include <string>
#include "Inventario.h"
using namespace std;

class Jugador {

private:

	int id;
	string nombre;
	int nivel;
	double monedas;
	Inventario inventario;

public:

	//Constructor
	Jugador();
	Jugador(int id, string nombre, int nivel, double monedas);

	//Getters
	int getId() const {
		return id;
	}

	string getNombre() const {
		return nombre;
	}

	int getNivel() const {
		return nivel;
	}

	double getMonedas() const {
		return monedas;
	}

	//Setters
	void setId(int id);
	void setNombre(string nombre);
	void setNivel(int nivel);
	void setMonedas(double monedas);

	//Metodos
	void agregarMonedas(double cantidad);
	bool gastarMonedas(double cantidad);
	Inventario& getInventario();
	void setInventario(const Inventario& inventario);

	void mostrar() const;

};