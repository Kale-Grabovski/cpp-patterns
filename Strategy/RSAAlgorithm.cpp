#include "RSAAlgorithm.h"

std::string RSAAlgorithm::crypt(std::string text, std::string key) {
	return "String " + text + " encrypted with RSA alg and key " + key + "\n";
}
