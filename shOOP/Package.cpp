#include "stdafx.h"
#include "Package.h"



Package::Package()
{
}

Package::Package(const Package &other)
{
	shape = other.shape;
	xDim = other.xDim;
	yDim = other.yDim;
	zDim = other.zDim;
	fragile = other.fragile;
}

Package::Package(std::string _shape="", int _xDim=0, int _yDim=0, int z_Dim=0, bool _fragile=0)
{
	shape = _shape;
	xDim = _xDim;
	yDim = _yDim;
	zDim = z_Dim;
	fragile = _fragile;
}

int Package::getVolume()
{

	int z = xDim*zDim*yDim;
	return z;
}

int Package::fitInBox(int x,int y,int z)
{
	int n=0;
	if(x%xDim<=y%yDim)
	{
		n = (x / xDim)*(y / yDim)*(z / zDim);
	}
	n = (y / xDim)*(x / yDim)*(z / zDim);
	return n;
}

bool Package::isFragile()
{
	return fragile;
}

Package::~Package()
{
}
