#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<iomanip>

using namespace std;

class hang;

class date
{
	int d,m,y;
	friend class hang;
};

class hang
{
	char mahang[10];
	char tenhang[10];
	date ngaysx;
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
	cout << "Nhap ngay - thang - nam san xuat: ";
	cin >> ngaysx.d >> ngaysx.m >> ngaysx.y;
}

void hang::xuat()
{
	if (ngaysx.y == 2017)
	{
		cout << setw(20) << left << "Ma hang" << setw(20) << "Ten hang" << "Ngay san xuat" << endl;
		cout << setw(20) << left << mahang << setw(20) << tenhang << ngaysx.d << "-" << ngaysx.m << "-" << ngaysx.y << endl;
	}
	else cout << "Khong co mat hang san xuat nam 2017\n";
}

int main()
{
	hang a;
	a.nhap();
	a.xuat();
	return 0;
}