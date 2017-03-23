#include "Encryption.h"

std::string Encryption::crypt(std::string text, std::string key) {
	return algorithm->crypt(text, key);
}
