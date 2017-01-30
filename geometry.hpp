#ifndef INCLUDE_GEOMETRY_HPP
#define INCLUDE_GEOMETRY_HPP

#include <vector>

using namespace std;
class Geometry {
	private:
//	int nx;
//    int ny;
    double Lx;
    double Ly;
    vector<double> Nx,Ny,Fx,Fy,BNx,BNy;
    void faces();
    void nodes();
//    void interpolate();

	public:
	int nx;
    int ny;

    Geometry();
    vector<double>& getFacesX() {return Fx;};
    vector<double>& getFacesY() {return Fy;};
    vector<double>& getNodesX() {return Nx;};
    vector<double>& getNodesY() {return Ny;};
    vector<double>& getBoundaryNodesX() {return BNx;};
    vector<double>& getBoundaryNodesY() {return BNy;};
};

#endif
