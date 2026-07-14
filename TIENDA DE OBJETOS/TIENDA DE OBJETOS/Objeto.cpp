#include <iostream>
#include "Objeto.h"
using namespace std;

//Usamos encapsulamiento (atributos privados y getters/setters.
//Usamos enum class para evitar errores.
//separamos .h y .cpp para una mejor organización del código.

//Constructor por defecto/vacio
Objeto::Objeto() {

	id = 0;
	nombre = "";
	tipo = TipoObjeto::Arma;
	rareza = Rareza::Comun;
	precio = 0.0;
}

//Constructor con parámetros
Objeto::Objeto(int id, string nombre, double precio, TipoObjeto tipo, Rareza rareza) {
	this->id = id;
	this->nombre = nombre;
	this->precio = precio;
	this->tipo = tipo;
	this->rareza = rareza;	
}


//Getters
int Objeto::getId() const
{
	return id;
}

string Objeto::getNombre() const 
{
	return nombre;
}

double Objeto::getPrecio() const 
{
	return precio;
}


//Setters

void Objeto::setId (int id) {
	this->id = id;
}

void Objeto::SetNombre (string nombre) {
	this->nombre = nombre;
}

void Objeto::setTipo (TipoObjeto tipo) {
	this->tipo = tipo;
}

void Objeto::setRareza (Rareza rareza) {
	this->rareza = rareza;
}

void Objeto ::setPrecio (double precio) {
	this->precio = precio;
}

void Objeto::mostrar() const
{
	cout << "ID: " << id << endl;
	cout << "Nombre: " << nombre << endl;
	cout << "Precio: " << precio << endl;
	cout << "Tipo: ";
	switch (tipo) {
	case TipoObjeto::Arma:
		cout << "Arma" << endl;
		break;
	case TipoObjeto::Armadura:
		cout << "Armadura" << endl;
		break;
	case TipoObjeto::Pocion:
		cout << "Pocion" << endl;
		break;
	case TipoObjeto::Accesorio:
		cout << "Accesorio" << endl;
		break;
	default:
		cout << "Desconocido" << endl;
		break;
	}

	cout << endl;

	cout << "Rareza: ";
	switch (rareza) {
	case Rareza::Comun:
		cout << "Comun" << endl;
		break;
	case Rareza::Raro:
		cout << "Raro" << endl;
		break;
	case Rareza::Epico:
		cout << "Epico" << endl;
		break;
	case Rareza::Legendario:
		cout << "Legendario" << endl;
		break;
	default:
		cout << "Desconocido" << endl;
		break;
	}

	cout << endl;
	cout << "Precio: " << precio << endl;
}

TipoObjeto Objeto::getTipo() const
{
	return tipo;
}

Rareza Objeto::getRareza() const
{
	return rareza;
}