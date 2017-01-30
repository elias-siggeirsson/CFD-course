#include "interpolation.hpp"

Interpolation::Interpolation(Geometry& g):geo(g) //geo=g
{
    interpolation();
}

void Interpolation::interpolation()
{
//    Geometry geo;
    double Y;
    vector<double>& FX = geo.getFacesX();
    vector<double>& FY = geo.getFacesY();
    vector<double>& NX = geo.getNodesX();
    vector<double>& NY = geo.getNodesY();
    vector<double>& BNX = geo.getBoundaryNodesX();
    
    //cout << geo.nx << '\n';
for(int j = 1; j < geo.ny; j++)
{
    IpX.push_back(1.0);
    for(int i = 1; i<geo.nx-1; i++)
    {
        IpX.push_back(0.5*(FX[i]-FX[i-1])/(NX[i]-NX[i-1]));
    }
    IpX.push_back(1.0);
}
for(int j = 0; j < geo.ny; j++)
{
    if(j == 0 || j == geo.ny-1)
    {
        Y = 1.0;
    }
    else
    {
        Y = 0.5*(FY[j*(geo.ny)]-FY[(j-1)*(geo.ny)])/(NY[j*(geo.ny-1)]-NY[(j-1)*(geo.ny-1)]);
    }
    for(int i = 1; i < geo.nx; i++)
    {
        IpY.push_back(Y);
    }
}
}
