#pragma once

#include <memory>
#include <string>
#include "Algorithm.h"

class Encryption {
public:
	Encryption(std::shared_ptr<Algorithm> mAlgorithm) : algorithm(mAlgorithm) {}
	std::string crypt(std::string text, std::string key);
private:
    std::shared_ptr<Algorithm> algorithm;
};
