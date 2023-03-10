#include <iostream>
#include "InterpInterface.h"
#include <vector>

using namespace std;

//Class interpolation to be injected
class QuadraticInterp : public InterpolationMethod {
public:
	virtual double Interpolate(vector<pair<double, double>> xy, double x) {
		std::cout << "Quadratric on Fwd Rates" << std::endl;

		return 0;
	}
};