#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Admin
{
private:
	string uSername, pAss;
public:
	Admin()
	{
		uSername = " ";
		pAss = " ";
	}
	Admin(string uSername = "" ,string pAss="")
	{
		this->uSername = uSername;
		this->pAss = pAss;
	}
	string getUser();
	string getPass();
	void setUser(string a);
	void setPass(string b);
	void ReadAdmin(ifstream &fcin);
	void WriteAdmin( ofstream &fcout);
	friend ostream & operator <<(ostream os, Admin &Ad);
	~Admin() {}
};

