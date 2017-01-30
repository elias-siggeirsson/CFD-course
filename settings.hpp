#ifndef INCLUDE_GEOMETRY_HPP
#define INCLUDE_GEOMETRY_HPP

class Settings {
    private:
        int nx,ny;double Lx,Ly;
    public:
        void Nodes(int,int);
        double Length(int);
};

#endif
