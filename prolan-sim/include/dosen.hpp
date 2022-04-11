#ifndef __DOSEN_HPP__
#define __DOSEN_HPP__

#include<iostream>
#include<istream>
#include<fstream>
#include<stdlib.h>
#include<string.h>

#include "include/person.hpp"

using namespace std;

class dosen : public person {
private:
	string npp;
	string departemen;
	string pendidikan;

public:
	dosen(string id, string nama, int dd, int mm, int yy, string npp, string departemen, string pendidikan);

	void setPendidikan(string pendidikan);
	string getPendidikan();

	void setNPP(string npp);
	string getNPP();

	void setDepartemen(string departemen);
	string getDepartemen();
};
#endif 
