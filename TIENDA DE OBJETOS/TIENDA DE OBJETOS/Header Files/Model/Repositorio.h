#pragma once
#include <vector>
#include <stdexcept>
using namespace std;	

template <class T>
class Repositorio {
private:
	vector <T> elementos;

public:

	//Constrcuctor

	Repositorio() {}

	//Agregar un elemento al repositorio
	void agregar(const T& elemento) {
		elementos.push_back(elemento);
	}

	//Eliminar un elemento por posicion
	bool eliminar(int indice) {

		if (indice < 0 || indice >= elementos.size()) {
			elementos.erase(elementos.begin() + indice);
			return true;
		}
		return false;
	}

	//Obtener un elemento por posicion
	T& obtener(int indice) {
		return elementos.at(indice);
	}

	//Obtener todos los elementos
	vector<T> obtenerTodos() {
		return elementos;
	}

	//Saber cuantos hay
	int cantidad() const {
		return elementos.size();
	}

	//Verificar si esta vacio
	bool estaVacio() const {
		return elementos.empty();
	}

	//Limpiar el repositorio
	void limpiar() {
		elementos.clear();
	}

};