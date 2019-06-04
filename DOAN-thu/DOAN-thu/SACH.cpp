#include "SACH.h"


string SACH::getmSach()
{
	return this->mSach;
}
string SACH::gettuaDe()
{
	return this->tuaDe;
}
string SACH::gettacGia()
{
	return this->tacGia;
}
string SACH::getNXb()
{
	return this->NXb;
}
int SACH::getgiaTri()
{
	return this->giaTri;
}
int SACH::getnamPH()
{
	return this->namPH;
}
int SACH::getsoTrang()
{
	return this->soTrang;
}
//
void SACH::setmSach(string mSach)
{
	this->mSach = mSach;
}
void SACH::settuaDe(string tuaDe)
{
	this->tuaDe = tuaDe;
}
void SACH::settacGia(string tacGia)
{
	this->tacGia = tacGia;
}
void SACH::setNXb(string NXb)
{
	this->NXb = NXb;
}
void SACH::setgiaTri(int giaTri)
{
	this->giaTri = giaTri;
}
void SACH::setnamPH(int namPH)
{
	this->namPH = namPH;

}
void SACH::setsoTrang(int soTrang)
{
	this->soTrang = soTrang;
}
//
void  SACH::outSach()
{
	cout << "ten sach: " << this->tuaDe << endl;
	cout << "ma sach: " << this->mSach << endl;
	cout << "tac gia: " << this->tacGia << endl;
	cout << "nha xuat ban: " << this->NXb << endl;
	cout << "gia tri: " << this->giaTri << endl;
	cout << "nam phat hanh: " << this->namPH << endl;
	cout << "ngay nhap kho: " << this->ngayNhapKho.nNgay << "/" << this->ngayNhapKho.nTHang << "/" << this->ngayNhapKho.nNam << endl;
	cout << "tinh trang : " << this->tinhTrang << endl;
}
void  SACH::ReadSach(ifstream &file)
{
	rewind(stdin);
	getline(file, this->mSach, ',');
	rewind(stdin);
	getline(file, this->tuaDe, ',');
	rewind(stdin);
	getline(file, this->tacGia, ',');
	rewind(stdin);
	getline(file, this->NXb, ',');
	//
	file >> this->giaTri;
	file.ignore(1);
	file >> this->namPH;
	file.ignore(1);
	file >> this->soTrang;
	file.ignore(1);
	//
	file >> ngayNhapKho.nNam;
	file.ignore(1);
	file >> ngayNhapKho.nTHang;
	file.ignore(1);
	file >> ngayNhapKho.nNam;
	file.ignore(1);
	file >> this->tinhTrang;
	file.ignore(1);

}
void  SACH::WriteSach(ofstream &file)
{
	file << this->mSach << "," << this->tuaDe << "," << this->tacGia << "," << this->NXb << ","
		<< this->giaTri << "," << this->namPH << "," << this->soTrang << ","
		<< this->ngayNhapKho.nNam << "," << this->ngayNhapKho.nTHang << "," << this->ngayNhapKho.nNgay << ","
		<< this->tinhTrang << endl;
}