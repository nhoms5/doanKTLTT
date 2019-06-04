#include "GIAOVIEN.h"

string GIAOVIEN::getdiachi()
{
	return this->sDiachi;
}
string GIAOVIEN::getsoDT()
{
	return this->sSoDT; 
}
int GIAOVIEN::getloaiBD()
{
	return this->nloaiBD;
}
void GIAOVIEN::setsDiachi(string sDiachi)
{
	this->sDiachi = sDiachi;
}
void GIAOVIEN :: setsSoDT(string sSoDT)
{
	this->sSoDT = sSoDT;
}
void GIAOVIEN::setnloaiBD(int nloaiBD)
{
	this->nloaiBD = nloaiBD;
}
void GIAOVIEN::setGV(string sDiachi, string sSoDT, int nloaiBD)
{
	this->sDiachi = sDiachi;
	this->sSoDT = sSoDT;
	this->nloaiBD = nloaiBD;
}

void GIAOVIEN::ReadBanDoc(ifstream &file)
{
	rewind(stdin);
	getline(file, this->sMaBD, ',');
	rewind(stdin);
	getline(file, this->sHoTen, ',');
	rewind(stdin);
	getline(file, this->sKhoa, ',');
	file >> this->xNgayDK.nNgay;
	file.ignore(1);
	file >> this->xNgayDK.nTHang;
	file.ignore(1);
	file >> this->xNgayDK.nNam;
	file.ignore(1);
	getline(file, this->sDiachi, ',');
	rewind(stdin);
	getline(file, this->sSoDT, '\n');
}
void GIAOVIEN::WriteBanDoc(ofstream &file)
{
	file << this->sMaBD << "," << this->sHoTen << "," << this->sKhoa << ","
		<< this->xNgayDK.nNgay << "," << this->xNgayDK.nTHang << "," << this->xNgayDK.nNam << ","
		<< this->sDiachi << "," << this->sSoDT << endl;
}
void GIAOVIEN::outputBanDoc()
{
	cout << "Loai BD: " << this->nloaiBD << endl;
	BANDOC::xuatBD();
	cout << "Dia Chi: " << this->sDiachi << endl;
	cout << "SDT: " << this->sSoDT << endl;
}
