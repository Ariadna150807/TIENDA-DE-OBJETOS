#pragma once
#include <iostream>
#include "Objeto.h"
#include <vector>
using namespace std;

class Tienda
{

private: 
	vector<Objeto> catalogo;

public:

	//Constructores
	Tienda();

	//Métodos
	void agregarObjeto(const Objeto& objeto);
	bool eliminarObjeto(int id);
	Objeto* buscarObjeto(int id);
	void mostrarCatalogo() const;

	//Getters
	vector<Objeto> getCatalogo() const;

	//Utilidades
	int cantidadObjetos() const;
	bool estaVacio() const;

};

