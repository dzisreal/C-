#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>

using namespace std;

class nsx
{
	char mansx[10];
	char tennsx[20];
	char dcnsx[20];
public:
	void nhap();
	void xuat();
};

void nsx::nhap()
{
	cout << "Nhap ma nha san xuat: ";
	fflush(stdin);
	gets(mansx);
	cout << "Nhap ten nha san xuat: ";
	fflush(stdin);
	gets(tennsx);
	cout << "Nhap dia chi nha san xuat:";
	fflush(stdin);
	gets(dcnsx);
}

void nsx::xuat()
{
	cout << setw(20) << left << "Ma nha san xuat" << setw(20) << "Ten nha san xuat" << setw(20) << "Dia chi nha san xuat" << endl;
	cout << setw(20) << left << mansx << setw(20) << tennsx << setw(20) << dcnsx << endl;
}

class hang
{
	char mahang[10];
	char tenhang[10];
	nsx x;
public:
	void nhap();
	void xuat();
};

void hang::nhap()
{
	cout << "Nhap ma hang: ";
	fflush(stdin);
	gets(mahang);
	cout << "Nhap ten hang: ";
	fflush(stdin);
	gets(tenhang);
	x.nhap();
}

void hang::xuat()
{
	cout << setw(15) << left << "Ma hang" << setw(15) << "Ten hang" << endl;
	cout << setw(15) << left << mahang << setw(15) << tenhang << endl;
	x.xuat();
}

int main()
{
	hang a;
	a.nhap();
	a.xuat();
	return 0;
}