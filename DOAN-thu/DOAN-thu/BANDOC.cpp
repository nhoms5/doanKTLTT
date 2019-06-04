#include "BANDOC.h"


string BANDOC::getsMaBD()
{
	return this->sMaBD;
}
string BANDOC::getsHoTen()
{
	return this->sHoTen;
}
string BANDOC::getsKhoa()
{
	return this->sKhoa;
}
void BANDOC::setsMaBD(string sMaBD)
{
	this->sMaBD = sMaBD;
}
void BANDOC::setsHoTen(string sHoTen)
{
	this->sHoTen = sHoTen;
}
void BANDOC::setsKhoa(string sKhoa)
{
	this->sKhoa = sKhoa;
}
void BANDOC::setsMaBDsHoTensKhoa(string sMaBD, string sHoTen, string sKhoa)
{
	this->sMaBD = sMaBD;
	this->sHoTen = sHoTen;
	this->sKhoa = sKhoa;
}
void BANDOC::xuatBD()
{
	ofstream xBD;
	xBD << this->sHoTen << endl;
	xBD << this->sMaBD << endl;
	xBD << this->sKhoa << endl;
}