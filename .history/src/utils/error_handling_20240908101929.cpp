#include "error_handling.h"
#include <iostream>

void ErrorHandling::handleError(const std::string& error) {
    std::cerr << "ERROR: " << error << std::endl;
}
