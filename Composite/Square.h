#pragma once

#include "Graphic.h"

class Square : public Graphic {
public:
    explicit Square(const char* mName) : Graphic(mName) {}
	virtual void print() const override;
};
