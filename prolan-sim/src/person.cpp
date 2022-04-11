#include<iostream>
#include<istream>
#include<fstream>
#include<stdlib.h>
#include<string.h>

#include "include/person.hpp"

using namespace std;
person::person(string id, string nama, int dd, int mm, int yy)
		: id(id), nama(nama), dd(dd), mm(mm), yy(yy)
{
}


void person::setId(string id){
	this->id = id;
}
	string person::getId() {
		return this->id;
	}



void person::setNama(string nama){
	this->nama = nama;
}
	string person::getNama(){
		return this->nama;
	}



void person::setTglLahir(int dd, int mm, int yy){
	this->dd = dd;
	this->mm = mm;
	this->yy = yy;
}
	int person::getTglLahir(){
		return this->dd;
	}
	int person::getBulanLahir(){
		return this->mm;
	}
	int person::getTahunLahir(){
		return this->yy;
	}