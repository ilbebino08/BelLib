/**
 * @file BelLib.h
 * @brief Libreria di utilità per la programmazione in C++
 * @author Tommaso Bellandi
 * @version 0.1
 * @date 2023-10-01
 *
 * Questa libreria fornisce funzioni di uso comune per rendere più veloce la scrittura del codice.
 */
 // @note Questa libreria è in fase di sviluppo e potrebbe subire modifiche in futuro.
#pragma once

#include "config.h"


#pragma message("📦 [INFO] TbelUtils: Libreria di utilità per la programmazione in C++")
#pragma message("╔══╗   ╔╗ ╔╗   ╔╗")
#pragma message("║╔╗║   ║║ ║║   ║║")
#pragma message("║╚╝╚╦══╣║ ║║  ╔╣╚═╗")
#pragma message("║╔═╗║║═╣║ ║║ ╔╬╣╔╗║")
#pragma message("║╚═╝║║═╣╚╗║╚═╝║║╚╝║")
#pragma message("╚═══╩══╩═╝╚═══╩╩══╝")
#pragma message("By Tommaso Bellandi   V0.1")

#include <iostream>
#include "BelLib/BelPort.h"
#include "BelLib/BelUtils.h"

namespace BelLib {

	/**
	* @brief Comandi di iniziallizazione delle funzioni.
	* 
	* Imposta il setlocale e inizializza il seme per la generazione di numeri casuali.
	*/
	void init() {
		setlocale(LC_ALL, "Italian");
		srand(time(NULL));
	}
}