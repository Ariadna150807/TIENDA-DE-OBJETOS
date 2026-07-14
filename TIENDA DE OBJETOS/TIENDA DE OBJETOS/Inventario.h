#pragma once
#include <iostream>
#include <vector>
#include "Objeto.h"
using namespace std;

class Inventario
{

private: 
	vector <Objeto> objetos;

public: 

	Inventario();

	void agregarObjeto(const Objeto& objeto);
	bool eliminarObjeto(int id);
	Objeto* buscarObjeto(int id);
	void mostrarInventario() const;

	//Getters
	vector <Objeto> getObjetos() const;

	//Utilidades 
	int cantidadObjetos() const;
	bool estaVacio() const;

};

