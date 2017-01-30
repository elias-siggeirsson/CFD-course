#include "geometry.hpp"
#include <iostream>

Geometry::Geometry()
{
    nx = 4; // Number faces
    ny = 4;
    Lx = 1.0;
    Ly = 1.0;
    faces();
    nodes();
};

void Geometry::faces()
{
    double D;
    double dx = Lx/(nx-1);
    for(int j = 0; j<ny;j++)
    {
	    //input cell sizes into a vector
	    Fx.push_back(0.0);
        for(int i = 2; i<nx; i++)
	    {
            D = Fx[i-2]+dx;
		    Fx.push_back(D);
        }
        Fx.push_back(Lx);
    }

    double dy = Lx/(nx-1);
    for(int j = 0; j<ny;j++)
    {
        if(j == 0)
        {   
            D = 0.0;
        }
        else
        { 
            D = j*dy;
        }
        for(int i = 0; i<nx; i++)
	    {
		    Fy.push_back(D);
        }
    }

}

void Geometry::nodes()
{
    double dx,dbx,dy,dby,D;
    dx = Lx/(nx-1);
	dbx = dx/2.0; //Distance between boundary node and the first internal one
	//input cell sizes into a vector
    for(int j = 0; j < ny-1; j++)
    {
//        Nx.push_back(dbx);
        for(int i = 0; i<nx-1; i++)
        {
            D = i*dx+dbx;
            Nx.push_back(D);
        }
        //Nx.push_back(Lx);
    }
    dy = Ly/(ny-1);
    dby = dy/2.0;
    for(int j = 0; j<ny-1; j++)
    {
        //Calculate the node coordinates based on the faces
        D = j*dy+dby;
        for(int i = 0; i<nx-1; i++)
       	{
            Ny.push_back(D);
        }
    }
    BNx = {0,Lx};
    BNy = {0,Ly};
}




