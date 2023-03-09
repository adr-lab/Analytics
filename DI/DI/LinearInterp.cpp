#include<iostream>
#include "InterpInterface.h"
#include <vector>

using namespace std;

//Class interpolation to be injected
class LinearInterp : public InterpolationMethod {
public:
	// => virtual is un-necessary here
	// => more importantly, override is missing!
	virtual void Interpolate(vector<pair<double, double>> xy, double x) {
		std::cout << "Quadratric on Fwd Rates" << std::endl;
	}
};