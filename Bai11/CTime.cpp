#include<iostream>
#include"CTime.h"
using namespace std;
CTime::CTime()
{
	h, m, s = 0;
}
CTime::CTime(int h, int m, int s	)
{
	this->h = h;
	this->m = m;
	this->s = s;
}
CTime::~CTime() {}
void CTime::Nhap()
{
	cout << "Nhap gio: ";
	cin >> h;
	cout << "Nhap phut: ";
	cin >> m;
	cout << "Nhap giay: ";
	cin >> s;
}
void CTime::Xuat()
{
	cout << h << ":" << m << ":" << s;
}
bool CTime::LaHopLe()
{
	if (h < 1 || h > 23)
		return false;
	if (m < 0 || m > 59)
		return false;
	if (s < 0 || s > 59)
		return false;
	return true;
}
int CTime::LaGiayThuMayTrongNgay()
{
	return h * 60 * 60 + m * 60 + s;
}