#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<iomanip>
#include<string.h>
using namespace std;

class date
{
	int d,m,y;
public:
	void nhap();
	void xuat();
};

void date::nhap()
{
	cout << "Nhap ngay - thang - nam san xuat: "; cin >> d >> m >> y;
}

void date::xuat()
{
	cout << setw(15) << left << "Ngay san xuat: " << d << "-" << m << "-" << y << endl;
}

class nsx
{
	char tennsx[10];
	char diachi[10];
public:
	void nhap();
	void xuat();
};

void nsx::nhap()
{
	cout << "Nhap ten nha san xuat: ";
	fflush(stdin);
	gets(tennsx);
	cout << "Nhap dia chi: ";
	fflush(stdin);
	gets(diachi);
}

void nsx::xuat()
{
	cout << setw(15) << left << "Ten nsx" << setw(15) << "Dia chi" << endl;
	cout << setw(15) << left << tennsx << setw(15) << diachi << endl;
}

class hang
{
protected:
	char tenhang[20];
	nsx x;
	int dongia;
public:
	void nhap();
	void xuat();
	hang();
};

hang::hang()
{
	strcpy(tenhang,"khong co");
	dongia = 0;
}

void hang::nhap()
{
	cout << "Nhap ten hang: "; fflush(stdin); gets(tenhang);
	x.nhap();
	cout << "Nhap don gia: "; cin >> dongia;
}

void hang::xuat()
{
	cout << setw(15) << left << "Ten hang: " << setw(15) << "Don gia" << endl;
	cout << setw(15) << left << tenhang << setw(15) << dongia << endl;
	x.xuat();
}

class tivi : public hang
{
	float kichthuoc;
	date ngaynhap;
public:
	void nhap();
	void xuat();
	tivi();
};

void tivi::nhap()
{
	hang::nhap();
	cout << "Nhap kich thuoc: "; cin >> kichthuoc;
	ngaynhap.nhap();
}

void tivi::xuat()
{
	hang::xuat();
	cout << setw(15) << "Kich thuoc: " << kichthuoc << endl;
	ngaynhap.xuat();
}

tivi::tivi()
{
	kichthuoc = 0;
}

int main()
{
	tivi a;
	a.nhap();
	a.xuat();
	return 0;
}