#ifndef INCLUDE_GEOMETRY_HPP                                                                                    
#define INCLUDE_GEOMETRY_HPP

#include <vector>
using namespace std;

class Domain {
    private:
        double X,Y,Z;
        double ni,nj,nk;
    public:
        vector<double> domainSize(double, double, double);
        vector<double> faceNumbers(double, double, double);
};

#endif

