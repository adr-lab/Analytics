#include "Bootstrap.cpp"
#include "LinearInterp.cpp"
#include "QuadraticInterp.cpp"
#include <iostream>
#include <vector>

int main() {

	//vector<pair<double, double>> xyin;
	//double xin;

	shared_ptr<InterpolationMethod> InterpolateLinear(new LinearInterp());
	shared_ptr<InterpolationMethod> InterpolateQuadratic(new QuadraticInterp());

	// Bootstrapping curve inject Linear Interpolation
	Bootstrap IRSCurve(InterpolateLinear);
	IRSCurve.getInterpolation();

	// Bootstrapping curve inject Quadratic Interpolation
	Bootstrap OISCurve(InterpolateQuadratic);
	OISCurve.getInterpolation();

	return 0;
}