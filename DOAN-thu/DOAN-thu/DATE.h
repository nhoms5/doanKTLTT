#ifndef DATE_h

#define DATE_h

#include<iostream>
using namespace std;
#include <string>
#include <iomanip>
#include <vector>
#include <Windows.h>

#pragma warning(disable : 4996)
#define _CRT_SECURE_NO_WARNINGS
#include <ctime>
#include <time.h>
#include <fstream>
#include <conio.h>
#include <stdio.h>
#include <dos.h>
class BANDOC;
class GIAOVIEN;
class SINHVIEN;
class SACH;
class PHIEUMUON;
class DATE
{
protected:
	int nNgay, nTHang, nNam;
public:
	friend BANDOC;
	friend GIAOVIEN;
	friend SINHVIEN;
	friend SACH;
	friend PHIEUMUON;
	DATE(int nNgay, int nTHang, int nNam)
	{
		this->nNgay = nNgay;
		this->nTHang = nTHang;
		this->nNam = nNam;
	}
	DATE()
	{
		time_t rawTime;
		struct tm *info;
		char buffer[80];
		time(&rawTime);
		info = localtime(&rawTime);
		this->nNgay = (info->tm_mday);
		this->nTHang = (info->tm_mon + 1);
		this->nNam = (info->tm_year + 1990);
	}
	int getNgay();
	int getThang();
	int getNam();
	void setNgay( int nNgay);
	void setThang(int nThang);
	void setNam(int nNam);
	void SetNgayThangNam(int nNgay, int nThang, int nNam);
	~DATE() {};
};
#endif // !DATE_h


