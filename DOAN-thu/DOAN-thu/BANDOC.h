#ifndef BANDOC_h
#define BANDOC_h
#include <iostream>
using namespace std;
#include <string>
#include "DATE.h"
#pragma once
class PHIEUMUON;
class BANDOC
{
protected:
	string sMaBD, sHoTen, sKhoa;
	DATE xNgayDK;
public:
	friend PHIEUMUON;
	BANDOC()
	{
		sMaBD = " ";
		sHoTen = " ";
		sKhoa = " ";
	}
	BANDOC(string sMaBD, string sHoTen, string sKhoa):xNgayDK()
	{
		this->sMaBD = sMaBD;
		this->sHoTen = sHoTen;
		this->sKhoa = sKhoa;
	}
	BANDOC(string sMaBD,string sHoTen,string sKhoa , int nNgay, int nTHang, int nNam) 
		:xNgayDK(nNgay,nTHang,nNam)
	{

	}
	string getsMaBD();
	string getsHoTen();
	string getsKhoa();
	void setsMaBD(string sMaBD);
	void setsHoTen(string sHoTen);
	void setsKhoa(string sKhoa);
	void setsMaBDsHoTensKhoa(string sMaBD, string sHoTen, string sKhoa);
	void xuatBD();
	virtual void outputBanDoc() {};
	virtual void ReadBanDoc(ifstream &file) {};
	virtual void WriteBanDoc(ofstream &file) {};
	
	virtual ~BANDOC() {};
};

#endif // !BANDOC_h
