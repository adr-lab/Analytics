#pragma once
#include<vector>

// => it is a bad practice to use "using namespace std": https://stackoverflow.com/questions/1452721/why-is-using-namespace-std-considered-bad-practice
// => it is a VERY BAD practice to have any kind of "using namespace ..." in a header, since would pollutes all the other files that include it
using namespace std;

//Interpolation DI Interface
class InterpolationMethod {
public:
	virtual void Interpolate(vector<pair<double, double>>, double) = 0;
	virtual ~InterpolationMethod() = default;
};
