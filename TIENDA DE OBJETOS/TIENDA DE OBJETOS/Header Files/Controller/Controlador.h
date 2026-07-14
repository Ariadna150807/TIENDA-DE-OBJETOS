#pragma once
#include "../Model/Jugador.h"
#include "../Model/Tienda.h"
#include "../View/Vista.h"

class TiendaController {

private:

	Jugador jugador;
	Tienda tienda;
	Vista vista;

public:

	TiendaController();

	void iniciar();

private:

	void cargarObjetos();
	void verCatalogo();
	void comprarObjeto();
	void venderObjeto();
	void verInventario();
	void verJugador();

};

