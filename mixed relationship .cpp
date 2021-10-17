#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>

using namespace std;

class may
{
	char mamay[10];
	char kieumay[10];
	char tinhtrang[10];
public:
	void nhap();
	void xuat();	
};

void may::nhap()
{
	cout << "Nhap ma may: ";
	fflush(stdin);
	gets(mamay);
	cout << "Nhap kieu may: ";
	fflush(stdin);
	gets(kieumay);
	cout << "Nhap tinh trang: ";
	fflush(stdin);
	gets(tinhtrang);
}

void may::xuat()
{
	cout << setw(20) << left << "Ma may" << setw(20) << "Kieu may" << setw(20) << "Tinh trang" << endl;
	cout << setw(20) << left << mamay << setw(20) << kieumay << setw(20) << tinhtrang << endl;
}

class quanly
{
	char maql[10];
	char hoten[10];
public:
	void nhap();
	void xuat();
};

void quanly::nhap()
{
	cout << "Nhap ma quan ly: ";
	fflush(stdin);
	gets(maql);
	cout << "Nhap ho va ten: ";
	fflush(stdin);
	gets(hoten);
}

void quanly::xuat()
{
	cout << setw(20) << left << "Ma quan ly" << setw(20) << "Ho va ten" << endl;
	cout << setw(20) << left << maql << setw(20) << hoten << endl;
}

class phongmay
{
	char maphong[10];
	char tenphong[10];
	int dientich;
	quanly x;
	may *y;
	int n;
public:
	void nhap();
	void xuat();
};

void phongmay::nhap()
{
	cout << "Nhap ma phong: ";
	fflush(stdin);
	gets(maphong);
	cout << "Nhap ten phong: ";
	fflush(stdin);
	gets(tenphong);
	cout << "Nhap dien tich: ";
	cin >> dientich;
	x.nhap();
	cout << "Nhap n: ";
	cin >> n;
	y = new may[n];
	for(int i=0; i<n; i++)
	{
		y[i].nhap();
	}
}

void phongmay::xuat()
{
	cout << setw(20) << left << "Ma phong" << setw(20) << "Ten phong" << setw(20) << "Dien tich" << endl;
	cout << setw(20) << left << maphong << setw(20) << tenphong << setw(20) << dientich << endl;
	x.xuat();
	for(int i=0; i<n; i++)
	{
		y[i].xuat();
	}
}

int main()
{
	phongmay a;
	a.nhap();
	a.xuat();
	return 0;
}