#include "create_password.h"
#include <string>
#include <cstdlib>
#include <ctime>

std::string createPassword() {
    const int length = 12;  // lunghezza della password
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()";
    const int charsetSize = sizeof(charset) - 1;
    
    std::string password;
    srand(time(0));
    
    for (int i = 0; i < length; i++) {
        password += charset[rand() % charsetSize];
    }
    
    return password;
}
