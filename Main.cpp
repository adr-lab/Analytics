#include "Bootstrap.cpp"
#include "LinearInterp.cpp"
#include "QuadraticInterp.cpp"
#include <iostream>

int main() {
	
	//create pointer to new interpolation method object
	InterpolationMethod *InterpolateLinear = new LinearInterp();
	InterpolationMethod *InterpolateQuadratic = new QuadraticInterp();

	// Bootstrapping curve inject Linear Interpolation
	Bootstrap IRSCurve(InterpolateLinear);
	IRSCurve.getInterpolation();

	// Bootstrapping curve inject Quadratic Interpolation
	Bootstrap OISCurve(InterpolateQuadratic);
	OISCurve.getInterpolation();

 	delete InterpolateLinear;
	delete InterpolateQuadratic;

	return 0;
}