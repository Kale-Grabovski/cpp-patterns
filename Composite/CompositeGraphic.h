#pragma once

#include <map>
#include <memory>
#include "Graphic.h"

class CompositeGraphic : public Graphic {
private:
    std::map<std::shared_ptr<Graphic>, std::shared_ptr<Graphic>> childGraphics;
public:
    explicit CompositeGraphic(const char* mName) : Graphic(mName) {}
	virtual void print() const override;
    void add(const std::shared_ptr<Graphic>);
    void remove(const std::shared_ptr<Graphic>);
};
