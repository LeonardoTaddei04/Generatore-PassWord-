#include <iostream>
#include <cstdlib>
#include <ctime>
#include "create_password.h"
#include "save_password.h"

void displayMenu() {
    std::cout << "1. Crea Password\n";
    std::cout << "2. Salva Password\n";
    std::cout << "3. Esci\n";
}

int main() {
    int choice;
    std::string password;
    
    while (true) {
        displayMenu();
        std::cout << "Seleziona un'opzione: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                password = createPassword();
                std::cout << "Password generata: " << password << std::endl;
                break;
            case 2:
                if (!password.empty()) {
                    savePassword(password);
                } else {
                    std::cout << "Nessuna password generata da salvare!\n";
                }
                break;
            case 3:
                std::cout << "Uscita...\n";
                return 0;
            default:
                std::cout << "Opzione non valida. Riprova.\n";
        }
    }
}
