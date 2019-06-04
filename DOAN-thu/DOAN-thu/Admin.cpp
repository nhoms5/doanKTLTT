#include "Admin.h"



string Admin::getUser( )
{
	return this->uSername;
}
string Admin::getPass ()
{
	return this->pAss;
}
void Admin::setUser(string a)
{
	this->uSername = a;
}
void Admin::setPass(string b)
{
	this->pAss = b;
}
void Admin::ReadAdmin(ifstream &fcin)
{
	rewind(stdin);
	getline(fcin, this->uSername, ',');
	rewind(stdin);
	getline(fcin, this->pAss, '\n');
}
void Admin::WriteAdmin(ofstream &fcout)
{
	fcout << this->uSername << "," << this->pAss << endl;
}
ostream & operator <<(ostream os, Admin &Ad)
{
	os << Ad.uSername << "," << Ad.pAss << endl;
	return os;
}
