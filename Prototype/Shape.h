#pragma once

#include <memory>

class Shape {
public:
	int getId() const;
    void setId(int);
    virtual std::shared_ptr<Shape> clone() const = 0;
	virtual void draw() const = 0;
protected:
    int id;
};
