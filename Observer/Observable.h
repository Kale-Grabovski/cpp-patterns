#pragma once

#include <memory>

class Observer;
class Observable
{
public:
	virtual void registerObserver(std::shared_ptr<Observer>) = 0;
	virtual void removeObserver(std::shared_ptr<Observer>) = 0;
	virtual void notify() = 0;
};
