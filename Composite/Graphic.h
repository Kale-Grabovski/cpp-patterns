#pragma once

class Graphic {
protected:
    std::string name;
public:
    explicit Graphic(const char* mName) : name(mName) {}
	virtual void print() const = 0;
};
