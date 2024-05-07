/*************************************************
* Program    : Using functors
* File       : CelsToFahr.h
* ================================================
* Programmer : Cameron Abo
*************************************************/
#pragma once

class CelsToFahr
{
private:
	float celsTemp;

public:
	CelsToFahr() {
		celsTemp = 0;
	}

	~CelsToFahr() {}

	void setTemp(float celsTemp) {
		this->celsTemp = celsTemp;
	}

	float operator()() {
		return (celsTemp * 9.0 / 5.0) + 32;
	}
};