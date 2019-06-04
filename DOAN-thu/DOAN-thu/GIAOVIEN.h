#ifndef GIAOVIEN_h
#define GIAOVIEN_h


#pragma once
#include "BANDOC.h"
#include "SACH.h"
class PHIEUMUON;
class GIAOVIEN :
	public BANDOC, SACH 
{
private:
	string sDiachi, sSoDT;
	int nloaiBD;
public:
	friend PHIEUMUON;
	GIAOVIEN()
		:BANDOC()
	{
		sDiachi = "";
		sSoDT = " ";
		nloaiBD = 1;
	}
	GIAOVIEN(string sDiachi, string sSoDT ,int nloaiBD , string sMaBD, string sHoTen, string sKhoa)
		:BANDOC(sMaBD, sHoTen, sKhoa)
	{
		this->nloaiBD = 1;
		this->sDiachi = sDiachi;
		this->sSoDT = sSoDT;
	}
	GIAOVIEN(string sDiachi, string sSoDT, int nloaiBD, string sMaBD, string sHoTen, string sKhoa, int nNgay, int nTHang, int nNam)
		:BANDOC(sMaBD, sHoTen, sKhoa, nNgay, nTHang, nNam) 
	{
		this->nloaiBD = 1;
		this->sDiachi = sDiachi;
		this->sSoDT = sSoDT;
	}
	string getdiachi();
	string getsoDT();
	int getloaiBD();
	
	void setsDiachi(string sDiachi);
	void setsSoDT(string sSoDT);
	void setnloaiBD(int nloaiBD);
	void setGV(string sDiachi, string sSoDT, int nloaiBD);
	void outputBanDoc();
	void ReadBanDoc(ifstream &file);
	void WriteBanDoc(ofstream &file);
	virtual ~GIAOVIEN() {};
};

#endif // !GIAOVIEN_h