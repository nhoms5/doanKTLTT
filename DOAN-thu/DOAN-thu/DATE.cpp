#include "DATE.h"

int DATE::getNgay()
{
	return this->nNgay;
}
int DATE::getThang()
{
	return this->nTHang;
}
int DATE::getNam()
{
	return this->nNam;
}
void DATE::setNgay(int nNgay)
{
	this->nNgay = nNgay;
}
void DATE::setThang(int nThang)
{
	this->nTHang = nTHang;
}
void DATE::setNam(int nNam)
{
	this->nNam = nNam;
}
void DATE::SetNgayThangNam(int nNgay, int nThang, int nNam)
{
	this->nNgay = nNgay;
	this->nTHang = nTHang;
	this->nNam = nNam;
}