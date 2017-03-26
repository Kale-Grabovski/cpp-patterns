#pragma once

#include <string>
#include "Algorithm.h"

class RSAAlgorithm : public Algorithm {
public:
	virtual std::string crypt(std::string text, std::string key) override;
};
