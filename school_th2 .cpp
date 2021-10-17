#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<iomanip>

using namespace std;

class truongdh;

class khoa
{
	char makhoa[10];
	char tenkhoa[10];
	char truongkhoa[20];
public:
	friend class truongdh;
};

class ban
{
	char maban[10];
	char tenban[10];
	char ngaythanhlap[20];
public:
	friend class truongdh;
};

class truong
{
	char matruong[10];
	char tentruong[10];
	char diachi[10];
public:
	void nhap();
	void xuat();
};

void truong::nhap()
{
	cout << "Nhap ma truong: "; fflush(stdin); gets(matruong);
	cout << "Nhap ten truong: "; fflush(stdin); gets(tentruong);
	cout << "Nhap dia chi: "; fflush(stdin); gets(diachi);
}

void truong::xuat()
{
	cout << setw(15) << left << "Ma truong" << setw(15) << "Ten truong" << setw(15) << "Dia chi" << endl;
	cout << setw(15) << left << matruong << setw(15) << tentruong << setw(15) << diachi << endl;
}

class truongdh : public truong
{
	int n;
	khoa *x;
	int m;
	ban *y;
public:
	void nhap();
	void xuat();
};

void truongdh::nhap()
{
	truong::nhap();
	cout << "Nhap n: "; cin >> n;
	x = new khoa[n];
	for(int i=0; i<n; i++)
	{
		cout << "Nhap ma khoa: "; fflush(stdin); gets(x[i].makhoa);
		cout << "Nhap ten khoa: "; fflush(stdin); gets(x[i].tenkhoa);
		cout << "Nhap truong khoa: "; fflush(stdin); gets(x[i].truongkhoa);
	}
	cout << "Nhap m: "; cin >> m;
	y = new ban[m];
	for(int i=0; i<m; i++)
	{
		cout << "Nhap ma ban: "; fflush(stdin); gets(y[i].maban);
		cout << "Nhap ten ban: "; fflush(stdin); gets(y[i].tenban);
		cout << "Nhap ngay thanh lap: "; fflush(stdin); gets(y[i].ngaythanhlap); 
	}
}

void truongdh::xuat()
{
	truong::xuat();
	for(int i=0; i<n; i++)
	{
		cout << "\n" << "Ma khoa: " << x[i].makhoa << endl;
		cout << "Ten khoa: " << x[i].tenkhoa << endl;
		cout << "Truong khoa: " << x[i].truongkhoa << endl;
	}
	for(int i=0; i<m; i++)
	{
		cout << "\n" << "Ma ban: " << y[i].maban << endl;
		cout << "Ten ban: " << y[i].tenban << endl;
		cout << "Ngay thanh lap: " << y[i].ngaythanhlap << endl;
	}
}

int main()
{
	truongdh a;
	a.nhap();
	a.xuat();
	return 0;
}
