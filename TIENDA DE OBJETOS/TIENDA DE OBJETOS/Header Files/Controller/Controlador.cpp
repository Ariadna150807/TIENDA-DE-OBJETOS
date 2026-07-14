#include "Controlador.h"
#include "../Model/Objeto.h"
using namespace std;

//contructor

TiendaController::TiendaController() {

	jugador = Jugador(1, "Jugador", 1, 1000);
	cargarObjetos();
}

//Iniciar programa
void TiendaController::iniciar() {
	vista.mostrarMensaje("TIENDA DE OBJETOS");
}

//Cargar objetos iniciales
void TiendaController::cargarObjetos() {

	tienda.agregarObjeto(
		Objeto (1, "Espada de hierro", TipoObjeto::Arma, Rareza::Comun, 100));
	tienda.agregarObjeto(
		Objeto(2, "Armadura de cuero", TipoObjeto::Armadura, Rareza::Comun, 150));
	tienda.agregarObjeto(
		Objeto(3, "Poción de salud", TipoObjeto::Pocion, Rareza::Comun, 50));
	tienda.agregarObjeto(
		Objeto(4, "Anillo de fuerza", TipoObjeto::Accesorio, Rareza::Raro, 300));
	tienda.agregarObjeto(
		Objeto(5, "Espada de fuego", TipoObjeto::Arma, Rareza::Epico, 500));
	tienda.agregarObjeto(
		Objeto(6, "Armadura de dragón", TipoObjeto::Armadura, Rareza::Legendario, 1000));
};




//Ver catalogo de objetos
void TiendaController::verCatalogo() {
	tienda.mostrarCatalogo();
}

//Comprar objeto
void TiendaController::comprarObjeto()
{
}

//Vender objeto
void TiendaController::venderObjeto()
{
}

//Ver inventario del jugador
void TiendaController::verInventario()
{
	jugador.getInventario().mostrarInventario();
}

//Ver informacion del jugador
void TiendaController::verJugador()
{
	jugador.mostrar();
}

