#pragma once

#include "Graphic.h"

class Ellipse : public Graphic {
public:
    explicit Ellipse(const char* mName) : Graphic(mName) {}
	virtual void print() const override;
};
