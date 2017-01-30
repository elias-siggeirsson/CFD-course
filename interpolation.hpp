#ifndef INCLUDE_INTERPOLATION_HPP
#define INCLUDE_INTERPOLATION_HPP

#include "geometry.hpp"
#include <vector>
#include <iostream>
class Interpolation
{
    private:
    vector<double> IpX,IpY;
    Geometry& geo;

    void interpolation();
    //void acoeffs();

    public:
    Interpolation(Geometry&);
    vector<double>& getInterpolationX() {return IpX;};
    vector<double>& getInterpolationY() {return IpY;};

    //void redoCoeffs(const Geometry&);
};


#endif
