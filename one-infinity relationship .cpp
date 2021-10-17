#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>

using namespace std;

class hang
{
	char mahang[10];
	char tenhang[10];
	int dongia;
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
}

void hang::xuat()
{
	cout << setw(20) << left << "Ma hang" << setw(20) << "Ten hang" << setw(20) << "Don gia" << endl;
	cout << setw(20) << left << mahang << setw(20) << tenhang << setw(20) << dongia << endl;
}

class phieu
{
	char maphieu[10];
	hang x[100];
	int n;
public:
	void nhap();
	void xuat();
};

void phieu::nhap()
{
	cout << "Nhap ma phieu: ";
	fflush(stdin);
	gets(maphieu);
	cout << "Nhap n: ";
	cin >> n;
	for(int i=0; i<n; i++)
	{
		x[i].nhap();
	}
}

void phieu::xuat()
{
	cout << setw(20) << right << "Ma phieu: " << maphieu << endl;
	for(int i=0; i<n; i++)
	{
		x[i].xuat();
	}
}

int main()
{
	phieu a;
	a.nhap();
	a.xuat();
	return 0;
}