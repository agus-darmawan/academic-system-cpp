#include<iostream>
#include<istream>
#include<fstream>
#include<stdlib.h>
#include<string.h>

#include "include/tendik.hpp"

using namespace std;
tendik::tendik(string id, string nama, int dd, int mm, int yy, string npp, string unit, string departemen)
		: person(id, nama, dd, mm, yy), npp(npp), unit(unit), departemen(departemen)
{
}

void tendik::setUnit(string unit) {
	this->unit = unit;
}
	string tendik::getUnit(){
		return this->unit;
	}


void tendik::setNPP(string npp) {
	this->npp = npp;
}
	string tendik::getNPP(){
		return this->npp;
	}


void tendik::setDepartemen(string departemen) {
	this->departemen =departemen;
}
	string tendik::getDepartemen(){
		return this->departemen;
	}

