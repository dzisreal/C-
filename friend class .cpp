#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<iomanip>

using namespace std;
class hang;

class nsx
{
	char mansx[10];
	char tennsx[20];
	char dcnsx[20];
	friend class hang;
};

class hang
{
	char mahang[10];
	char tenhang[10];
	int dongia;
	float trongluong;
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
	cout << "Nhap don gia: ";
	cin >> dongia;
	cout << "Nhap trong luong: ";
	cin >> trongluong;
	cout << "Nhap ma nha san xuat: ";
	fflush(stdin);
	gets(x.mansx);
	cout << "Nhap ten nha san xuat: ";
	fflush(stdin);
	gets(x.tennsx);
	cout << "Nhap dia chi nha san xuat: ";
	fflush(stdin);
	gets(x.dcnsx);
}

void hang::xuat()
{
	cout << setw(20) << left << "Ma hang" << setw(20) << "Ten hang" << setw(20) << "Don gia" << setw(20) << "Trong luong" << setw(20) 
	<< "Ma nsx" << setw(20) << "Ten nsx" << setw(20) << "Dia chi nsx" << endl;
	cout << setw(20) << left << mahang << setw(20) << tenhang << setw(20) << dongia << setw(20) << trongluong << setw(20) 
	<< x.mansx << setw(20) << x.tennsx << setw(20) << x.dcnsx << endl;
}

int main()
{
	hang a;
	a.nhap();
	a.xuat();
	return 0;
}