#include "BelPort.h"

namespace BelPort {

	bool init() {
		bool success = false;
		// Imposta la console in modo che possa visualizzare i caratteri unicode
#ifdef PORTABLE
		success = true;
		SetConsoleOutputCP(CP_UTF8);
		SetConsoleCP(CP_UTF8);
		BelUtils::debugMessage(u8"[INFO] ", 0);
#endif
		// Controlla se l'operazione è riuscita
		if (success) {
			BelUtils::debugMessage(u8"Console inizializzata in modalità unicode.", 0);
		}
		else {
			BelUtils::debugMessage(u8"Iniziallizazione della modalità portable non avvenuta, PORTABLE = "+PORTABLE, 2);
		}
		return success;
	}

	void pause() {
		// Pausa la console
		BelUtils::debugMessage(u8"Lancio comando per mettere in pausa la console", 0);
#ifdef _WIN32
		system("pause");
#else
		std::cout << u8"Premere INVIO per continuare...\n";
		std::cin.get();
#endif
	}

	void clear() {
		// Pulisce la console
		BelUtils::debugMessage(u8"Lancio comando per pulire la console", 0);
#ifdef _WIN32
		system("cls");
#else
		system("clear");
#endif
		BelUtils::debugMessage(u8"Console pulita.", 0);
	}
}

