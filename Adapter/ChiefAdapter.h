#pragma once

#include <memory>
#include "Ment.h"
#include "Chief.h"

class ChiefAdapter : public Chief {
private:
	std::shared_ptr<Ment> ment;
public:
	ChiefAdapter();
	virtual void makeBreakfast() const;
	virtual void makeDinner() const;
	virtual void makeSupper() const;
};
