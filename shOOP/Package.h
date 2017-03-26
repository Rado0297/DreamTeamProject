#pragma once
class Package
{
	std::string shape;
	
	int xDim;
	int yDim;
	int zDim;
	bool fragile;
public:
	Package();
	Package(const Package &other);
	Package(std::string _shape,int _xDim,int _yDim,int z_zDim,bool _fragile);
	int getVolume();
	int fitInBox(int x,int y,int z);
	bool isFragile();
	~Package();
};

