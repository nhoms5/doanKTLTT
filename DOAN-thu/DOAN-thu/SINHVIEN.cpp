#include "SINHVIEN.h"



int SINHVIEN::getKhoaHoc()
{
	return this->nKHoahoc;
}
int SINHVIEN::getloaiBD()
{
	return this->nloaiBD;
}
void SINHVIEN::setKhoaHoc(int nKhoaHoc)
{
	this->nKHoahoc = nKHoahoc;
}
void SINHVIEN::setnloaiBD(int nloaiBD)
{
	this->nloaiBD = nloaiBD;
}
void SINHVIEN::setKhoaHocnloaiBD(int nloaiBD, int nKhoaHoc)
{
	this->nKHoahoc = nKHoahoc;
	this->nloaiBD = nloaiBD;
}

void SINHVIEN::ReadBanDoc(ifstream &file)
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
	rewind(stdin);
	file >> this->nKHoahoc;
	file.ignore(1);
}
void SINHVIEN::WriteBanDoc(ofstream &file)
{
	file << this->sMaBD << "," << this->sHoTen << "," << this->sKhoa << ","
		<< this->xNgayDK.nNgay << "," << this->xNgayDK.nTHang << "," << this->xNgayDK.nNam << ","
		<< this->nKHoahoc << endl;
}
void SINHVIEN::outputBanDoc()
{
	cout << "Loai BD: " << this->nloaiBD << endl;
	BANDOC::xuatBD();
	cout << "KHoa hoc: " << this->nKHoahoc << endl;
}
