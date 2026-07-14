#include "Tienda.h"
#include <iostream>
using namespace std;

//Constructor
Tienda::Tienda() {}

//Agregar Objeto
void Tienda::agregarObjeto(const Objeto& objeto) 
{
	catalogo.push_back(objeto);
}

//Eliminar Objeto
bool Tienda::eliminarObjeto(int id) 
{
	for (auto it = catalogo.begin(); it != catalogo.end(); ++it) 
	{
		if (it->getId() == id) 
		{
			catalogo.erase(it);
			return true;
		}
	}
	return false;
}

//Buscar Objeto
Objeto* Tienda::buscarObjeto(int id) 
{
	for (auto& objeto : catalogo) 
	{
		if (objeto.getId() == id) 
		{
			return &objeto;
		}
	}
	return nullptr;
}

//Mostrar Catalogo
void Tienda::mostrarCatalogo() const 
{
	if (catalogo.empty()) 
	{
		cout << "El catálogo está vacío." << endl;
		return;
	}
	for (const auto& objeto : catalogo) 
	{
		objeto.mostrar();
		cout << "------------------------" << endl;
	}
}

//Obtener Catalogo
vector<Objeto> Tienda::getCatalogo() const 
{
	return catalogo;
}

//Cantidad de Objetos
int Tienda::cantidadObjetos() const 
{
	return catalogo.size();
}

//¿Vacio?
bool Tienda::estaVacio() const 
{
	return catalogo.empty();
}
