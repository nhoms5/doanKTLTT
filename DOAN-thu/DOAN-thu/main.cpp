#include <iostream>
#include <fstream>
#include<iomanip>
#include<vector>
#include<string>
#include"Admin.h"
#include"BANDOC.h"
#include"DATE.h"
#include"GIAOVIEN.h"
#include"PHIEUMUON.h"
#include"SACH.h"
#include"SINHVIEN.h"
using namespace std;
// khai bao chuong trinh con
void menuchinh();
void menucon();
void menuTinThongTin();
void menuQanLySach();
void menuThongKe();	
void menuQuanLyPhieMuon();
void menuQuanLyBanDoc();
// user
void  docUserPass(vector <Admin> &ad);
void xuatUserPass(vector <Admin> ad);
void login();
bool kTraDn(vector <Admin> ad, string user, string pass);

//DS ban doc
void docDSbanDoc(vector <BANDOC*> &p);
void ghiDSbanDoc(vector <BANDOC*> &p);
void timBanDoc(vector <BANDOC*> p, string sMBD);
void themDSbanDoc(vector <BANDOC*> &p);
void xuatDSbanDoc(vector <BANDOC*> p);
//sach
void docDSsach(vector <SACH*> &s);
void xuatDSsach(vector <SACH*> s);
void timSach(vector <SACH*> s, string sMS);
// khai bao bien
int sophieumuon = 0;
int  PHIEUMUON::soThuTu = 0;
int nChonCN = 0, nTim = 0, nQuanly = 0, nQuanLySach = 0, nQuanbanDoc = 0, nThongke = 0, nQuanlyPM = 0;
vector <SACH> S;
vector <BANDOC*> p;
vector <Admin> Ad;
vector <PHIEUMUON> PM;
string sMA = " ";
void main()
{
	system("pause");
}
//chuong trinh con
void menuchinh()
{
	int nChon;
	cout << "*****************************************************************************\n";
	cout << "**********************           MENU            ****************************\n";
	cout << "*****************************************************************************\n\n\n\n";

	cout << "Hay lua chon cho minh mot con so tuong ung voi danh sach duoi day\n\n";

	cout << "\t>1<  Hien thi thong tin sach." << endl;
	cout << "\t>2<  Tim kiem thong tin." << endl;
	cout << "\t>3<  Quan ly." << endl;
	cout << "\n\t>4<  Thoat chuong trinh." << endl;
	cout << "\n\nNeu ban da chon xong con so cua minh, xin vui long nhap vao day: " << endl;

}
void menucon()
{
	
}
void menuTinThongTin()
{
	int option;
	
	cout << "/t/tNhap vao lua chon cua ban" << endl;
	cout << "/t/t 1.ti kiem thong tin chi tiet ve sach" << endl;
	cout << "/t/t 2.tim kiem va hien thi thong tin chi tiet ve ban doc" << endl;
	cin >> option;
	if (option == 1)
	{	vector <SACH*> s;
		string sMS;
		timSach(s, sMS);
	}
	else
	{
		vector <BANDOC*> p;
		string sMBD;
		timBanDoc(p, sMBD);
	}
}
void menuQanLySach()
{
	vector <SACH*> s;
	string sMS;
	int option;
	SACH* ss;
	ofstream file;
	file.open("file.txt");
	cout << "/t/tNhap lua chon cua ban:" << endl;
	cout << "/t/t 1.Tim kiem sach" << endl;
	cout << "/t/t2.them sach" << endl;
	cout << "/t/t 3.Xoa sach" << endl;
	cin >> option;
	switch (option)
	{
	case 1:
		timSach(s, sMS);
	case 2:
		
		rewind(stdin);
		cout << "nhap vao ten sach: " << endl;
		file >> ss->settuaDe;
		rewind(stdin);
		cout << "nhap vao tac gia: " << endl;
		file >> ss->settacGia;
		cout << "nhap vao ma  sach: " << endl;
		file >> ss->setmSach;
		cout << "nhap vao tac gia: " << endl;
		file >> ss->settacGia;
		s.push_back(ss);
		file.close();
	case 3:
		vector <Admin> ad;
		string user;
		string pass;
		string sMS;
		if (kTraDn(ad, user, pass) == true)
		{
			cout << "nhap vao sMS can xoa: " << endl;
			getline(cin, sMS);
			for (int i = 0;i < s.size();i++)
			{
				if (s[i]->getmSach() == sMS)
				{
					s.erase(s[i]);
				}
			}
		}

	}
}
void menuThongKe()
{

}
void menuQuanLyPhieMuon()
{
	vector <Admin> ad;
	string user;
	string pass;
	if (kTraDn(ad, user, pass) == true)
	{

	}
}
void menuQuanLyBanDoc()
{

}
// user
void  docUserPass(vector <Admin> &ad)
{
	ifstream file;
	file.open("admin.txt");
	if (file.is_open() == true)
	{
		cout << "mo file thanh cong" << endl;
	}
	else
	{
		cout << "mo file that bai" << endl;
	}
	int nN;
	file >> nN;file.ignore(1);
	Admin* q;
	for (int i = 0;i < nN;i++)
	{
		q[i].ReadAdmin(file);
		ad.push_back(q[i]);
	}
}
void xuatUserPass(vector <Admin*> ad)
{
	for (int i = 0;i < ad.size();i++)
	{
		cout<<ad[i]->getPass();
		cout << ad[i]->getUser();
	}
}
void login()
{
	string user, pass;
	cout << "nhap vao username: " << endl;
	getline(cin, user);
	rewind(stdin);
	cout << "nhap vao pass: " << endl;
	getline(cin, pass);
	rewind(stdin);
}
bool kTraDn(vector <Admin> ad, string user, string pass)
{
	for (int i = 0;i < ad.size();i++)
	{
		if (ad[i].getUser == user)
		{
			if (ad[i].getPass == pass)
			{
				return true;
			}
		}
	}
	return false;
}

//DS ban doc
void docDSbanDoc(vector <BANDOC*> &p)
{
	ifstream file;
	file.open("bandoc.txt");
	if (file.is_open() == true)
	{
		cout << "mo file thanh cong!" << endl;
	}
	else
	{
		cout << "mo file that ai!" << endl;
	}
	int nLoaibandoc = 0, nN = 0;
	file >> nN;
	file.ignore(1);
	BANDOC* q;
	for (int i = 0; i < nN;i++)
	{
		file >> nLoaibandoc;
		file.ignore(1);
		if (nLoaibandoc == 1)
		{
			q = new GIAOVIEN;
			q->ReadBanDoc(file);
			p.push_back(q);
		}
		else
		{
			q = new SINHVIEN;
			q->ReadBanDoc(file);
			p.push_back(q);
		}
	}
	file.close();
}
void ghiDSbanDoc(vector <BANDOC*> &p)
{
	ofstream file;
	file.open("bandoc.txt");
	if (file.is_open() == true)
	{
		cout << "mo file thanh cong !" << endl;
	}
	else
	{
		cout << "mo file bai !" << endl;
	}
	file << p.size() << endl;
	for (int i = 0;i < p.size();i++)
	{
		p[i]->WriteBanDoc(file);
	}

}
void timBanDoc(vector <BANDOC*> p, string sMBD)
{
	cout << "nhap vao MA BAN DOC :" << endl;
	getline(cin, sMBD);
	rewind(stdin);
	for (int i = 0; i < p.size();i++)
	{
		if (p[i]->getsMaBD() == sMBD)
		{
			cout << p[i] << endl;
		}
	}
}
void themDSbanDoc(vector <BANDOC*> &p)
{

}
void xuatDSbanDoc(vector <BANDOC*> p)
{
	ofstream file;
	file.open("bandoc.txt");
	if (file.is_open() == true)
	{
		cout << "mo file thanh cong" << endl;
	}
	else
	{
		cout << "mo file that bai" << endl;
	}
	for (int i = 0;i < p.size();i++)
	{
		p[i]->xuatBD();
	}

}
//sach
void docDSsach(vector <SACH*> &s)
{
	ifstream file;
	file.open("sach.txt");
	if (file.is_open() == true)
	{
		cout << "mo file thanh cong\n";
	}
	else
	{
		cout << "mo file that bai" << endl;
	}
	int nN;
	file >> nN; file.ignore(1);
	SACH* q;
	for (int i = 0;i < nN;i++)
	{
		q = new SACH;
		q->ReadSach(file);
		s.push_back(q);
	}
}
void xuatDSsach(vector <SACH*> s)
{
	ofstream file;
	file.open("sach.txt");
	if (file.is_open() == true)
	{
		cout << "mo file thanh cong" << endl;
	}
	else
	{
		cout << "mo file that bai" << endl;
	}
	for (int i = 0;i < s.size();i++)
	{
		s[i]->outSach();
	}
}
void timSach(vector <SACH*> s, string sMS)
{
	string sMS;
	cout << "nhap vao MA SACH CAN TIM: " << endl;
	cin >> sMS;
	for (int i = 0;i < s.size();i++)
	{
		if (s[i]->getmSach()== sMS)
		{
			cout << s[i] << endl;
		}
	}
}

