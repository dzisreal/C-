#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<iomanip>

using namespace std;

class printer 
{
public:
	float trongluong;
	char hangsx[10];
	int namsx;
	char tocdo[10];
};

class dotprinter : public printer
{
	char matdokim[10];
public:
	void nhap();
	void xuat();
};

void dotprinter::nhap()
{
	cout << "Nhap trong luong: "; cin >> trongluong;
	cout << "Nhap hang san xuat: "; fflush(stdin); gets(hangsx);
	cout << "Nhap nam san xuat: "; cin >> namsx;
	cout << "Nhap toc do: "; fflush(stdin); gets(tocdo); 
	cout << "Nhap mat do kim: "; fflush(stdin); gets(matdokim);
}

void dotprinter::xuat()
{
	cout << setw(20) << left << "Trong luong" << setw(20) << "Hang san xuat" << setw(20) << "Nam san xuat" << setw(20) << "Toc do" << setw(20) << "Mat do kim" << endl;
	cout << setw(20) << left << trongluong << setw(20) << hangsx << setw(20) << namsx << setw(20) << tocdo << setw(20) << matdokim << endl;
}

class laserprinter : public printer
{
	char dophangiai[10];
public:
	void nhap();
	void xuat();
};

void laserprinter::nhap()
{
	cout << "Nhap trong luong: "; cin >> trongluong;
	cout << "Nhap hang san xuat: "; fflush(stdin); gets(hangsx);
	cout << "Nhap nam san xuat: "; cin >> namsx;
	cout << "Nhap toc do: "; fflush(stdin); gets(tocdo); 
	cout << "Nhap do phan giai: "; fflush(stdin); gets(dophangiai);
}

void laserprinter::xuat()
{
	cout << setw(20) << left << "Trong luong" << setw(20) << "Hang san xuat" << setw(20) << "Nam san xuat" << setw(20) << "Toc do" << setw(20) << "Do phan giai" << endl;
	cout << setw(20) << left << trongluong << setw(20) << hangsx << setw(20) << namsx << setw(20) << tocdo << setw(20) << dophangiai << endl;
}

int main()
{
	dotprinter a;
	laserprinter b;
	a.nhap();
	b.nhap();
	a.xuat();
	b.xuat();
	a.namsx = 2020;
	b.namsx = 2020;
	cout << "May in sau khi thay doi nam san xuat:";
	a.xuat();
	b.xuat();
	return 0;
}
