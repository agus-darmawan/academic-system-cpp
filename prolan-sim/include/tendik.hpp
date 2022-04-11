#ifndef __TENDIK_HPP__
#define __TENDIK_HPP__

#include<iostream>
#include<istream>
#include<fstream>
#include<stdlib.h>
#include<string.h>

#include "include/person.hpp"
using namespace std;

class tendik : public person {
private:
	string npp;
	string unit;
	string departemen;

public:
	tendik(string id, string nama, int dd, int mm, int yy, string npp, string unit, string departemen);

	void setUnit(string unit);
	string getUnit();	

	void setNPP(string npp);
	string getNPP();	

	void setDepartemen(string departemen);
	string getDepartemen();

	
	
};

#endif
