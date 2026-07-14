#pragma once
#include <iostream>
#include <string>
#include "../Model/Objeto.h"
using namespace std;

class Vista {

public:

	//Menu Principal
	void mostrarMenuPrincipal() const;

	//Mostrar un objeto
	void mostrarObjetos(const Objeto* objeto) const;

	//Mostrar un mensaje
	void mostrarMensaje(const string& mensaje) const;

	//Leer Datos
	int leerOpcion() const;
	int leerObjeto() const;

};
