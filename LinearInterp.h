#pragma once

#include<iostream>
#include "InterpInterface.h"

//Class interpolation to be injected
class LinearInterp : public InterpolationMethod {
public:

	LinearInterp();
	//destructor
	~LinearInterp();

	//Define virtual base class method in the derived class
	virtual void Interpolate();
};