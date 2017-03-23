#pragma once

#include <memory>
#include <string>
#include "Algorithm.h"

class Encryption {
private:
	std::shared_ptr<Algorithm> algorithm;
public:
	Encryption(std::shared_ptr<Algorithm> mAlgorithm) : algorithm(mAlgorithm) {}
	std::string crypt(std::string text, std::string key);
};
