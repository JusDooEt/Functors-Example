/*************************************************
* Program    : Using functors
* File       : FahrToCells.h
* ================================================
* Programmer : Cameron Abo
*************************************************/
#pragma once

class FahrToCels
{
private:
	float fahrTemp;

public:
	FahrToCels() 
	{
		fahrTemp = 0;
	}

	~FahrToCels() {}

	void setTemp(float fahrTemp)
	{
		this->fahrTemp = fahrTemp;
	}

	float operator()()
	{
		return (fahrTemp - 32) * (5.0 / 9.0);
	}
};