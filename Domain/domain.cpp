#include<domain.h>

vector<double> Domain::domainSize(double X, double Y, double Z)
{
    return vector<double> (X,Y,Z)
}

vector<double> Domain::faceNumbers(double ni, double nj, double nk)
{
    return vector<double> (ni,nj,nk)
}



