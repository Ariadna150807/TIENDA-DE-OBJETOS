#include "Inventario.h"
#include <iostream>
using namespace std;

//Encapsulamiento: Objetos es privado
//Composicion: Un inventario está compuesto por objetos
//STL: vector para almacenar los objetos
// Metodos propios de la clase Inventario para agregar, eliminar, buscar y mostrar objetos


//Constructor
Inventario::Inventario() {}


//Agregar un objeto al inventario
void Inventario::agregarObjeto(const Objeto& objeto) 
{
	objetos.push_back(objeto);
}

//Eliminar un objeto del inventario por su ID
bool Inventario::eliminarObjeto(int id) 
{
	for (auto it = objetos.begin(); it != objetos.end(); ++it) 
	{
		if (it->getId() == id) 
		{
			objetos.erase(it);
			return true;
		}
	}
	return false;
}

//Buscar un objeto en el inventario por su ID
Objeto* Inventario::buscarObjeto(int id) 
{
	for (auto& objeto : objetos) 
	{
		if (objeto.getId() == id) 
		{
			return &objeto;
		}
	}
	return nullptr;
}

//Mostrar inventario completo
void Inventario::mostrarInventario() const 
{
	if (objetos.empty()) 
	{
		cout << "El inventario está vacío." << endl;
		return;
	}
	for (const auto& objeto : objetos) 
	{
		objeto.mostrar();
		cout << "------------------------" << endl;
	}
}

//Obtener todos los objetos 
vector<Objeto> Inventario::getObjetos() const 
{
	return objetos;
}

//Obtener la cantidad de objetos en el inventario
int Inventario::cantidadObjetos() const 
{
	return objetos.size();
}

//¿Vacio?
bool Inventario::estaVacio() const 
{
	return objetos.empty();
}
