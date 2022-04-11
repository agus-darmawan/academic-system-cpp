#include<iostream>
#include<vector>
#include<stdlib.h>
#include<istream>
#include<fstream>
#include<string.h>

#include "include/mahasiswa.hpp"


using namespace std;
mahasiswa::mahasiswa(string id, string nama, int dd, int mm, int yy, 
				string nrp, string departemen, int tahunmasuk)
		: person(id, nama, dd, mm, yy), nrp(nrp), departemen(departemen), tahunmasuk(tahunmasuk)

{
	this->ipk = 0.0;
	this->semesterke = 1;
	this->skslulus = 0;

	this->ips = vector<float>(14,0);
}



void mahasiswa::setSemester(int semesterke){
	this->semesterke = semesterke;
}
	int mahasiswa::getSemester(){
		return this->semesterke;
	}



void mahasiswa::setSKSLulus(int skslulus){
	this->skslulus = skslulus;
}
	int mahasiswa::getSKSLulus(){
		return this->skslulus;
	}



void mahasiswa::hitungIPK(int semester){
	float ipk = 0;
	if(semester == 1){
		ipk = ips[1];
	}
	else{
		for(int i=1; i<=semester; i++){
			ipk = (ipk + ips[i])/2;
		}
	}
	this->ipk = ipk;
}
	float mahasiswa::getIPK(){
		return this->ipk;
	}


void mahasiswa::setIPS(int semester, float ips){
	if (semester < 15) {
		this->ips[semester] = ips;
	}
}
	float mahasiswa::getIPS(int semester)	{
		if (semester < 15){
			return this->ips[semester];
		}
		else{
			return -1.0;
		}
		
	}
	vector<float> mahasiswa::getAllIPS()
	{
		return this->ips;
	}



string mahasiswa::getNRP(){
	return this->nrp;
}
	void mahasiswa::setNRP(string nrp){
		this->nrp = nrp;
	}

void mahasiswa::setDepartemen(string departemen){
	this->departemen = departemen;
}
	string mahasiswa::getDepartemen(){
		return this->departemen;
	}


void mahasiswa::setTahunMasuk(int tahunmasuk){
	this->tahunmasuk = tahunmasuk;
}
	int mahasiswa::getTahunMasuk(){
		return this->tahunmasuk;
	}



