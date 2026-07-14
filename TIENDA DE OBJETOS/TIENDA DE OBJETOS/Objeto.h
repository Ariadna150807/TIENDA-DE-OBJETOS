#pragma once
#include <iostream>
#include <string>
using namespace std;

//Enumeraciones para el tipo de objeto y la rareza
enum class TipoObjeto {
	Arma,
	Armadura,
	Pocion,
	Accesorio
};

enum class Rareza {
	Comun,
	Raro,
	Epico,
	Legendario
};


class Objeto {

private:
	int id;
	string nombre;
	double precio;
	TipoObjeto tipo;
	Rareza rareza;


public:
	//Constructores
	Objeto();
	Objeto (int id, string nombre, double precio, TipoObjeto tipo, Rareza rareza);

	//Getters
	int getId() const;
	string getNombre() const;
	double getPrecio() const;
	TipoObjeto getTipo() const;
	Rareza getRareza() const;

	//Setters
	void setId(int id);
	void SetNombre(string nombre);
	void setPrecio(double precio);
	void setTipo(TipoObjeto tipo);
	void setRareza(Rareza rareza);

	//Método para mostrar la información del objeto
	void mostrar() const;
}; 



