#include "save_password.h"
#include <fstream>
#include <iostream>

void savePassword(const std::string& password) {
    std::ofstream file("passwords.txt", std::ios::app);
    if (file.is_open()) {
        file << password << std::endl;
        file.close();
        std::cout << "Password salvata con successo.\n";
    } else {
        std::cout << "Errore nell'apertura del file!\n";
    }
}
