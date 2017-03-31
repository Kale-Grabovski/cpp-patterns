#pragma once

class Graphic {
public:
    explicit Graphic(const char* mName) : name(mName) {}
	virtual void print() const = 0;
protected:
    std::string name;
};
