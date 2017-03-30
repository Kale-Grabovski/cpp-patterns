#pragma once

#include <memory>

class Shape {
protected:
    int id;
public:
	int getId() const;
    void setId(int);
    virtual std::shared_ptr<Shape> clone() const = 0;
	virtual void draw() const = 0;
};
