#ifndef SINHVIEN_h
#define SINHVIEN_h

#pragma once
#include "BANDOC.h"
class PHIEUMUON;
class SINHVIEN :
	public BANDOC
{
private:
	int nKHoahoc,nloaiBD;
public:
	friend PHIEUMUON;
	SINHVIEN()
	{
		nKHoahoc = 0;
		nloaiBD = 1;
	}
	SINHVIEN(int nKHoahoc, int nloaiBD)
	{
		this->nKHoahoc = nKHoahoc;
		this->nloaiBD = 1;
	}
	SINHVIEN(int nKHoahoc, int nloaiBD, string sMaBD, string sHoTen, string sKhoa)
		:BANDOC(sMaBD, sHoTen, sKhoa)
	{
		this->nKHoahoc = nKHoahoc;
		this->nloaiBD = 1;
	}
	SINHVIEN(int nKHoahoc, int nloaiBD, string sMaBD, string sHoTen, string sKhoa, int nNgay, int nTHang, int nNam)
		:BANDOC(sMaBD, sHoTen, sKhoa, nNgay, nTHang, nNam)
	{
		this->nKHoahoc = nKHoahoc;
		this->nloaiBD = 1;
	}
	int getKhoaHoc();
	int getloaiBD();
	void setKhoaHoc(int nKhoaHoc);
	void setnloaiBD(int nloaiBD);
	void setKhoaHocnloaiBD(int nloaiBD, int nKhoaHoc);
	void outputBanDoc();
	void ReadBanDoc(ifstream &file);
	void WriteBanDoc(ofstream &file);
	virtual ~SINHVIEN() {};
};

#endif // !SINHVIEN_h
