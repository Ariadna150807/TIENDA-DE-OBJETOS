#include "Jugador.h"
#include <iostream>
using namespace std;


Jugador::Jugador() {
	
	id = 0;
	nombre = " ";
	nivel = 0;
	monedas = 0.0;

}

//Constructor con parámetros
Jugador :: Jugador (int id, string nombre, int nivel, double monedas) {
	this->id = id;
	this->nombre = nombre;
	this->nivel = nivel;
	this->monedas = monedas;
}

//Getters
int Jugador::getId() const {
	return id;
}

string Jugador::getNombre() const {
	return nombre;
}

int Jugador::getNivel() const {
	return nivel;
}

double Jugador::getMonedas() const {
	return monedas;
}

//Setters
void Jugador::setId(int id) {
	this->id = id;
}

void Jugador::setNombre(string nombre) {
	this->nombre = nombre;
}

void Jugador::setNivel(int nivel) {
	this->nivel = nivel;
}

void Jugador::setMonedas(double monedas) {
	this->monedas = monedas;
}


//Agregar monedas
void Jugador::agregarMonedas(double cantidad) {
	monedas += cantidad;
}

//Gastar monedas
bool Jugador::gastarMonedas(double cantidad) {
	if (monedas >= cantidad) {
		monedas -= cantidad;
		return true;
	}
	else {
		return false;
	}
}

//Mostrar info
void Jugador::mostrar() const {
	cout << "ID: " << id << endl;
	cout << "Nombre: " << nombre << endl;
	cout << "Nivel: " << nivel << endl;
	cout << "Monedas: " << monedas << endl;
}

Inventario& Jugador::getInventario() {
	return inventario;
}

void Jugador::setInventario(const Inventario& inventario) {
	this->inventario = inventario;
}