#include "trygonometria.h"
#include <cmath>


double degreemath::sin(double degree){



double radian = degree*3.141592/180.0;
return std::sin(radian);


}

double degreemath::cos(double degree) {

	double radian = degree*3.141592/180.0;
return std::cos(radian);



}

double degreemath::tg(double degree){


double radian = degree*3.141592/180.0;
return std::tan(radian);



}

double degreemath:ctg(double degree){



double radian = degree*3.141592/180.0;
return 1/std::tan(radian);



}