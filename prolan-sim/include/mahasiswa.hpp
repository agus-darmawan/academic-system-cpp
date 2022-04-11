#ifndef __MAHASISWA_HPP__
#define __MAHASISWA_HPP__


#include<iostream>
#include<istream>
#include<fstream>
#include<stdlib.h>
#include<string.h>

#include "include/person.hpp"

using namespace std;
class mahasiswa : public person {
private:
	string nrp;
	string departemen;
	int tahunmasuk;
	int semesterke;
	int skslulus;
	float ipk;
	vector<float> ips;

public:
	mahasiswa(string id, string nama, int dd, int mm, int yy,
					string nrp, string departemen, int tahunmasuk);

	void setSemester(int semesterke);
	int getSemester();

	void setSKSLulus(int skslulus);
	int getSKSLulus();

	void hitungIPK(int semester);

	void setIPS(int semester, float ips);
	float getIPS(int semester);
	vector<float> getAllIPS();

	void setNRP(string nrp);
	string getNRP();

	void setDepartemen(string departemen);
	string getDepartemen();

	void setTahunMasuk(int tahunmasuk);
	int getTahunMasuk();
	float getIPK();
};

#endif
