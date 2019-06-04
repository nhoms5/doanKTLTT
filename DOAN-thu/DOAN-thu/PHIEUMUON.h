#ifndef PHIEUMUON_h
#define PHIEUMUON_h
#include <iostream>
#include <string>
#include "DATE.h"
#include "BANDOC.h"
using namespace std;
#pragma once
class PHIEUMUON :
	public BANDOC
{
	
private:
	static int soThuTu;
	string mPhieuMuon;
	DATE ngayMuon , ngayTra;
	bool ttPhieuMuon;
public:
	PHIEUMUON()
	{
		mPhieuMuon = " ";
		soThuTu = 1;
		ttPhieuMuon = 0;
	}
	PHIEUMUON(int soThuTu,string mPhieuMuon,int nNgay , int nThang , int nNam,bool ttPhieuMuon)
		:ngayMuon(nNgay, nThang, nNam)
	{
		mPhieuMuon = BANDOC::getsMaBD();
		soThuTu++;
		ttPhieuMuon = 0;
	}
	static int getsoThuTu();
	string getmPhieuMuon();
	bool getttPhieuMuon();
	void setsoThuTu(int soThuTu);
	void setmPhieuMuon(string mPhieuMuon);
	void setttPhieuMuon(bool ttPhieuMuon);
	void setsoThuTumPhieuMuonttPhieuMuon(int soThuTu, string mPhieuMuon, bool ttPhieuMuon);
	void ReadPhieuMuon(ifstream &file);
	void WritePhieuMuon(ofstream &file);
	DATE& tinhNgayTra();
	void xuatPhieuMuon();
	~PHIEUMUON() {};
};
#endif // !PHIEUMUON_h
