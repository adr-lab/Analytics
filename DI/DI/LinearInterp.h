#pragma once
#include "InterpInterface.h"
#include <vector>

using namespace std;

//Class interpolation to be injected
class LinearInterp : public InterpolationMethod {
public:
	 double Interpolate(vector<pair<double, double>>, double);

private:
	vector<pair<double, double>> xy;
	double x;
};

