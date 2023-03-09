// => classes should be defined in header files, you should NEVER include a .cpp file
#include "Bootstrap.cpp"
#include "LinearInterp.cpp"
#include "QuadraticInterp.cpp"
#include <iostream>

int main() {

	//create pointer to new interpolation method object
	// => when writing "modern" C++, using raw pointer is frown upon. Using a shared pointer would be more appropriate here
	InterpolationMethod *InterpolateLinear = new LinearInterp();
	InterpolationMethod *InterpolateQuadratic = new QuadraticInterp();

	// Bootstrapping curve inject Linear Interpolation
	Bootstrap IRSCurve(InterpolateLinear);
	IRSCurve.getInterpolation();

	// Bootstrapping curve inject Quadratic Interpolation
	Bootstrap OISCurve(InterpolateQuadratic);
	OISCurve.getInterpolation();

	// => with smart pointers, no need to delete!
	// (if any of the code above throws, with raw pointers you'd have a memory leak)
	delete InterpolateLinear;
	delete InterpolateQuadratic;

	return 0;
}