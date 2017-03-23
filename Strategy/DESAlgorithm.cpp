#include "DESAlgorithm.h"

std::string DESAlgorithm::crypt(std::string text, std::string key) {
	return "String " + text + " encrypted with DES alg and key " + key + "\n";
}
