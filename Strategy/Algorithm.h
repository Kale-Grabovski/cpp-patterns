#pragma once

#include <string>

class Algorithm {
public:
	virtual std::string crypt(std::string text, std::string key) = 0;
};