#include "encryption.h"
#include <iostream>

std::string encrypt(const std::string& data) {
    std::string encrypted = "Encrypted:" + data;
    return encrypted;
}

std::string decrypt(const std::string& data) {
    std::string decrypted = data.substr(10);
    return decrypted;
}
