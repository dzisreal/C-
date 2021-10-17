#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<iomanip>

using namespace std;

class vehicle 
{
protected:
	char nhanhieu[10];
	int namsx;
	char hang[10];
public:
	void nhap();
	void xuat();
};

void vehicle::nhap()
{
	cout << "Nhap nhan hieu: "; fflush(stdin); gets(nhanhieu);
	cout << "Nhap nam san xuat: "; cin >> namsx;
	cout << "Nhap hang san xuat: "; fflush(stdin); gets(hang);
}

void vehicle::xuat()
{
	cout << setw(15) << left << "Nhan hieu" << setw(15) << "Nam san xuat" << setw(15) << "Hang san xuat";
}

class oto : public vehicle
{
public:
	int sochongoi;
	float dungtich;
	void nhap();
	void xuat();
};

void oto::nhap()
{
	vehicle::nhap();
	cout << "Nhap so cho ngoi: "; cin >> sochongoi;
	cout << "Nhap dung tich xe: "; cin >> dungtich;
}

void oto::xuat()
{
	vehicle::xuat();
	cout << setw(15) << left << "So cho ngoi" << setw(15) << "Dung tich xe" << endl;
	cout << setw(15) << left << nhanhieu << setw(15) << namsx << setw(15) << hang << setw(15) << sochongoi << setw(15) << dungtich << endl;
}

class moto : public vehicle
{
	char phankhoi[10];
public:
	void nhap();
	void xuat();
};

void moto::nhap()
{
	vehicle::nhap();
	cout << "Nhap so phan khoi: "; fflush(stdin); gets(phankhoi);
}

void moto::xuat()
{
	vehicle::xuat();
	cout << setw(15) << left << "So phan khoi" << endl;
	cout << setw(15) << left << nhanhieu << setw(15) << namsx << setw(15) << hang << setw(15) << phankhoi << endl;
}

int main()
{
	oto a;
	moto b;
	a.nhap();
	a.xuat();
	b.nhap();
	b.xuat();
	a.dungtich = 3.0;
	cout << "Xe oto sau khi thay doi dung tich la:\n";
	a.xuat();
	return 0;
}
