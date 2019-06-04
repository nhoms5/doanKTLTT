#ifndef SACH_h
#define SACH_h


#include<iostream>
#include<string>
#include "DATE.h"
using namespace std;
#pragma once
class SACH:
	public DATE
{
private:
	string mSach, tuaDe, tacGia, NXb;
	int giaTri, namPH, soTrang;
	DATE ngayNhapKho;
	bool tinhTrang;
public:
	SACH()
	{
		this->giaTri = 0;
		this->namPH = 0;
		this->soTrang = 0;
		this->mSach = " ";
		this->tuaDe = " ";
		this->tacGia = " ";
		this->tacGia = " ";
		this->NXb = " ";
		this->tinhTrang = 0;
	}
	SACH(string mSach, string tuaDe, string tacGia, string NXb,int giaTri, int namPH, int soTrang,int ngay, int thang , int nam,bool tinhTrang)
		:ngayNhapKho(ngay,thang,nam)
	{
		this->mSach = mSach;
		this->tuaDe = tuaDe;
		this->tacGia = tacGia;
		this->NXb = NXb;
		this->giaTri = giaTri;
		this->namPH = namPH;
		this->soTrang = soTrang;
		this->tinhTrang = 0;
	}
	string getmSach();
	string gettuaDe();
	string gettacGia();
	string getNXb();
	int getgiaTri();
	int getnamPH();
	int getsoTrang();
	//
	void setmSach(string mSach);
	void settuaDe(string tuaDe);
	void settacGia(string tacGia);
	void setNXb(string NXb);
	void setgiaTri(int giaTri);
	void setnamPH(int namPH);
	void setsoTrang(int soTrang);
	//
	void outSach();
	void ReadSach( ifstream &file);
	void WriteSach(ofstream &file);
	~SACH() {}
};

#endif // !SACH_h