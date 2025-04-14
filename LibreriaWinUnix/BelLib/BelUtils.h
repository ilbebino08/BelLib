#pragma once

#include <iostream>
#include "../config.h"


#ifdef DEBUG
#pragma message("🔧 [INFO] TbelUtils: Compilazione in modalità DEBUG")
#else
#pragma message("✅ [INFO] TbelUtils: Compilazione in modalità RELEASE")
#endif


namespace BelUtils {
	
	/**
	 * @brief Stampa un messaggio di debug sulla console.
	 *
	 * Questa funzione stampa un messaggio di debug sulla console. Il messaggio viene preceduto da un prefisso che indica il livello di gravità.
	 *
	 * @param messaggio Il messaggio da stampare.
	 * @param livello Il livello di gravità del messaggio (0 = INFO, 1 = WARNING, 2 = ERROR, 3 = DEBUG).
	 */
	void debugMessage(const std::string& messaggio, int livello = 0);
	
	/**
	* @brief Alloca una matrice di interi.
	* 
	* @param matrice La matrice da allocare.
	* @param righe Il numero di righe della matrice.
	* @param colonne Il numero di colonne della matrice.
	*/
	void allocaMatrice(int** matrice, int righe, int colonne);

	/**
	* @brief Dealloca una matrice di interi.
	* 
	* @param matrice La matrice da deallocare.
	*/
	void deallocaMatrice(int** matrice);
}