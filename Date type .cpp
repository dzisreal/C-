#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<iomanip>

using namespace std;

class Date
{
	int d,m,y;
public:
	void nhap();
	void xuat();
};

void Date::nhap()
{
	cout << "Nhap ngay, thang va nam: ";
	cin >> d >> m >> y;
}

void Date::xuat()
{
	cout << "\nNgay gia nhap :" << d << "-" << m << "-" << y << endl;
}


class nhansu
{
	char manhansu[20];
	char hoten[20];
	Date ns;
public:
	void nhap();
	void xuat();
};

void nhansu::nhap()
{
	cout << "Nhap ma nhan su: ";
	fflush(stdin);
	gets(manhansu);
	cout << "Nhap ho ten nhan su: ";
	fflush(stdin);
	gets(hoten);
	ns.nhap();
}

void nhansu::xuat()
{
	cout << setw(20) << left << "Ma nhan su" << setw(30) << "Ho va ten" << endl;
	cout << setw(20) << left << manhansu << setw(30) << hoten;
	ns.xuat();
}

int main()
{
	nhansu a;
	a.nhap();
	a.xuat();
	return 0;
}

