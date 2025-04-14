#include <sstream>
#include "BelUtils.h"

namespace BelUtils {
	void debugMessage(const std::string& messaggio, int livello) {
		if (DEBUG){
			if (livello == 0)		std::cout << u8"[INFO] ";
			else if (livello == 1)	std::cout << u8"[WARNING] ";
			else if (livello == 2)	std::cout << u8"[ERROR] ";
			else					std::cout << u8"[DEBUG] ";
			std::cout << messaggio << std::endl;
		}
	}
	
	void allocaMatrice(int** matrice, int righe, int colonne) {
		matrice = new int* [righe];
		for (int i = 0; i < righe; i++) {
			matrice[i] = new int[colonne];
		}
		for (int i = 0; i < righe; i++) {
			for (int j = 0; j < colonne; j++) {
				matrice[i][j] = 0;
			}
		}
	
	    std::ostringstream oss;
	    oss << u8"Allocazione matrice " << righe << u8"x" << colonne << u8" avvenuta con successo.";
	    std::string messaggio = oss.str();
	
		debugMessage(messaggio, 0);
	}
	
	void deallocaMatrice(int** matrice) {
		int righe = sizeof(matrice) / sizeof(matrice[0]);
		for (int i = 0; i < righe; i++) {
			delete[] matrice[i];
		}
		delete[] matrice;
	
		debugMessage(u8"Deallocazione matrice avvenuta con successo.", 0);
	}
}