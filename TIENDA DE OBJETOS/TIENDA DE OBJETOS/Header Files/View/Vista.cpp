#include "Vista.h"
using namespace std;

void Vista::mostrarMenuPrincipal() const {

	cout << endl;
	cout << "----------- TIENDA DE OBJETOS ------------" << endl;
	cout << "1. Ver Catalogo" << endl;
	cout << "2. Comprar Objeto" << endl;
	cout << "3. Vender Objeto" << endl;
	cout << "4. Ver Inventario" << endl;
	cout << "5. Ver Jugador" << endl;
	cout << "6. Salir" << endl;
	cout << "-------------------------------------------- " << endl;
}

void Vista::mostrarObjetos(const Objeto& objeto) const {

	objeto.mostrar();
}

void Vista::mostrarMensaje(const string& mensaje) const {
	cout << mensaje << endl;
}

int Vista ::leerOpcion() const {
	int opcion;
	cout << "Ingresa una opcion: ";
	cin >> opcion;
	return opcion;
}

int Vista::leerObjeto() const {
	int id;
	cout << "Ingresa el ID del objeto: ";
	cin >> id;
	return id;
}