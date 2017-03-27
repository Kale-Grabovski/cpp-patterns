#include <iostream>
#include <memory>
#include "RSAAlgorithm.h"
#include "DESAlgorithm.h"
#include "Encryption.h"

int main () {
	Encryption rsaAlg(std::make_shared<RSAAlgorithm>());
	Encryption desAlg(std::make_shared<DESAlgorithm>());

	std::cout << rsaAlg.crypt("Eba", "pzdc1111");
	std::cout << desAlg.crypt("Zalupa", "hash1234");
    
    return 0;
}
