#include "PHIEUMUON.h"


int PHIEUMUON::getsoThuTu()
{
	return soThuTu;
}
string PHIEUMUON::getmPhieuMuon()
{
	return this->mPhieuMuon;
}
bool PHIEUMUON::getttPhieuMuon()
{
	return this->ttPhieuMuon;
}
void PHIEUMUON::setsoThuTu(int soThuTu)
{
	this->soThuTu = soThuTu;
}
void PHIEUMUON::setmPhieuMuon(string mPhieuMuon)
{
	this->mPhieuMuon = mPhieuMuon;
}
void PHIEUMUON::setttPhieuMuon(bool ttPhieuMuon)
{
	this->ttPhieuMuon = ttPhieuMuon;
}
void PHIEUMUON::setsoThuTumPhieuMuonttPhieuMuon(int soThuTu, string mPhieuMuon, bool ttPhieuMuon)
{
	this->soThuTu = soThuTu;
	this->mPhieuMuon = mPhieuMuon;
	this->ttPhieuMuon = ttPhieuMuon;
}
void PHIEUMUON::ReadPhieuMuon(ifstream &file)
{
	rewind(stdin);
	getline(file, this->mPhieuMuon, ',');
	rewind(stdin);
	file >> this->ngayMuon.nNgay;
	file.ignore(1);
	file >> this->ngayMuon.nTHang;
	file.ignore(1);
	file >> this->ngayMuon.nNam;
	file.ignore(1);
	file >> this->ttPhieuMuon;
}
void PHIEUMUON::WritePhieuMuon(ofstream &file)
{
	file << this->mPhieuMuon << "," << this->ngayMuon.nNgay << "," << this->ngayMuon.nTHang << "," << this->ngayMuon.nNam << ","
		<< this->ngayTra.nNgay << "," << this->ngayTra.nTHang << "," << this->ngayTra.nNam << "," << this->ttPhieuMuon << endl;
}
DATE& PHIEUMUON::tinhNgayTra()
{
	switch (ngayMuon.nTHang)
	{
	case 1:case 3:case 5: case 7: case 8: case 10: case 12: // co 31 ngay
	{
		ngayTra.nNgay = ngayMuon.nNgay + 7;
		if (ngayMuon.nNgay > 31)
		{
			ngayTra.nNgay = ngayMuon.nNgay - 31;
			ngayTra.nTHang++;
		}
		if (ngayMuon.nTHang > 12)
		{
			ngayTra.nTHang = 1;
			ngayTra.nNam++;
		}
	}
	case 4:case 6: case 9: case 11: // co 30 ngay 
	{
		ngayTra.nNgay = ngayMuon.nNgay + 7;
		if (ngayMuon.nNgay > 30)
		{
			ngayTra.nNgay = ngayMuon.nNgay - 30;
			ngayTra.nTHang++;
		}
		if (ngayMuon.nTHang > 12)
		{
			ngayTra.nTHang = 1;
			ngayTra.nNam++;
		}
	}

	default:
	{
		if ((ngayMuon.nNam % 400 == 0) || (ngayMuon.nNam % 4 == 0 && ngayMuon.nNam % 100 != 0))
		{
			ngayTra.nNgay = ngayMuon.nNgay + 7;
			if (ngayMuon.nNgay > 29)
			{
				ngayTra.nNgay = ngayMuon.nNgay - 29;
				ngayTra.nTHang++;
			}
			if (ngayMuon.nTHang > 12)
			{
				ngayTra.nTHang = 1;
				ngayTra.nNam++;
			}
		}
		else
		{
			ngayTra.nNgay = ngayMuon.nNgay + 7;
			if (ngayMuon.nNgay > 28)
			{
				ngayTra.nNgay = ngayMuon.nNgay - 28;
				ngayTra.nTHang++;
			}
			if (ngayMuon.nTHang > 12)
			{
				ngayTra.nTHang = 1;
				ngayTra.nNam++;
			}
		}
		break;
	}
	}
	return ngayTra;
}
void PHIEUMUON::xuatPhieuMuon()
{
	BANDOC::xuatBD();
	cout << "ma phieu muon: " << this->mPhieuMuon << endl;
	cout << "ngay muon: " << this->ngayMuon.nNgay << "/" << this->ngayMuon.nTHang << "/" << this->ngayMuon.nNam << endl;
	cout << "ngay tra: " << this->ngayTra.nNgay << "/" << this->ngayTra.nTHang << "/" << this->ngayTra.nNam << endl;
	cout << "tinh trang phieu muon: " << this->ttPhieuMuon << endl;
}
