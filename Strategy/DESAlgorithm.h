#pragma once

#include <string>
#include "Algorithm.h"

class DESAlgorithm : public Algorithm {
public:
	std::string crypt(std::string text, std::string key) override;
};
