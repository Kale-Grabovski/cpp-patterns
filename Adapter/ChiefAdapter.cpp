#include "Ment.h"
#include "ChiefAdapter.h"

ChiefAdapter::ChiefAdapter() {
	ment = std::make_shared<Ment>();
}

void ChiefAdapter::makeBreakfast() const {
	ment->kick();
}

void ChiefAdapter::makeDinner() const {
	ment->squirtPepperSpray();
}

void ChiefAdapter::makeSupper() const {
	ment->shot();
}
