#ifndef INCLUDE_COEFFS_HPP
#define INCLUDE_COEFFS_HPP

#include "interpolation.hpp"

class Coeffs
{
    private:
    vector<double> aW,aE,aS,aN,aP;
    Geometry& geo;
    Interpolation& inter;

    void coeffs();
    public:



};

#endif
