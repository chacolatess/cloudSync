\


#include <iostream>
#include "encryption.h"

int main() {
    std::string data = "Test Data";
    std::string encrypted = encrypt(data);
    std::string decrypted = decrypt(encrypted);

    std::cout << "Original: " << data << std::endl;
    std::cout << "Encrypted: " << encrypted << std::endl;
    std::cout << "Decrypted: " << decrypted << std::endl;

    return 0;
}
