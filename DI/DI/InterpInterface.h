#pragma once
#include<vector>

using namespace std;

//Interpolation DI Interface
class InterpolationMethod {
public:
	virtual double Interpolate(vector<pair<double, double>>, double) = 0;
	virtual ~InterpolationMethod() = default;
};
