#pragma once

#include <iostream>
#include "../config.h"
#include "BelUtils.h"

#ifdef PORTABLE
#ifdef TBELUTILS
#pragma message("📦 [INFO] TbelUtils: modalità PORTABLE attiva")
#endif
#include <Windows.h>
#endif


namespace BelPort {
	/**
	* @brief Inizializza la console in unicode per la portabilità.
	*
	* Questa funzione imposta la console in modo che possa visualizzare i caratteri unicode.
	* 
	* @return true se l'inizializzazione è riuscita, altrimenti false.
	*/
	bool init();

	/**
	* @brief Pausa la console fino a quando l'utente non preme un tasto.
	*/
	void pause();

	/**
	* @brief Pulisce la console.
	*/
	void clear();
}