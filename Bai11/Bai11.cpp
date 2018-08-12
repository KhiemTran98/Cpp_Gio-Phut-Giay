#include<iostream>
#include<conio.h>
#include"CTime.h"
using namespace std;
void main()
{
	//CTime* t = new CTime();
	//cout << "Nhap gio phut giay" << endl;
	//t->Nhap();

	CTime* t = new CTime(1, 1, 1);

	if (t->LaHopLe())
	{
		t->Xuat();
		cout << " la giay thu " << t->LaGiayThuMayTrongNgay() << " trong ngay";
	}
	else
		cout << "Khong hop le";

	delete t;

	_getch();
}