#include "InterpInterface.h"
#include <iostream>
#include <vector>

using namespace std;

//Bootstrap class
class Bootstrap {
	
	shared_ptr<InterpolationMethod> InterpolationService = nullptr;

public:
	//set up some dummy containers and variables
	vector <pair<double, double>> xy;
	double x;
	//Inject the interpolation method through the constructor, note the initialisation list is a pointer to a pointer (second order abstraction) equivalent to *Interpolation Method = *service 
	Bootstrap(shared_ptr<InterpolationMethod> interpservice)
		: InterpolationService(interpservice) {
		// If the dependency was not defined, throw an exception.
		if (InterpolationService == nullptr) {
			throw std::invalid_argument("service must not be null");
		}
	}
	void getInterpolation() {
		std::cout << "Interpolate Fwd Rates" << std::endl;
		// Dependency implementation with polymorphism.
		InterpolationService->Interpolate(xy, x);
	}
};