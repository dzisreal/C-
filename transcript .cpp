#include<bits/stdc++.h>
using namespace std;

class phieu;

class sv
{
	char masv[20];
	char tensv[20];
	char lop[20];
	int khoa;
public:
	void nhap()
	{
		cout << "Ma sinh vien: "; fflush(stdin); gets(masv);
		cout << "Ten sinh vien: "; fflush(stdin); gets(tensv);
		cout << "Lop: "; fflush(stdin); gets(lop);
		cout << "Khoa: "; cin >> khoa;
	};
	void xuat()
	{
		cout << setw(10) << "Ma sinh vien: " << masv << setw(30) << "Ten sinh vien: " << tensv << endl;
		cout << "Lop: " << lop << setw(30) << "Khoa: " << khoa << endl;
	};
};

class diem
{
	char tenmon[20];
	int sotrinh,diem;
public:
	void nhap()
	{
		cout << "Ten mon: "; fflush(stdin); gets(tenmon);
		cout << "So trinh: "; cin >> sotrinh;
		cout << "Diem: "; cin >> diem;
	};

	void xuat()
	{
		cout << setw(15) << left << tenmon << setw(15) << sotrinh << setw(15) << diem << endl;
	};
	friend void tb(phieu &b);
	friend void chen(phieu &b);
};

class phieu
{
	sv x;
	int n;
	diem *y;
public:
	void nhap()
	{
		x.nhap();
		cout << "Nhap so mon: "; cin >> n;
		y = new diem[n];
		for(int i=0; i<n; i++)
			y[i].nhap();
	};

	void xuat()
	{
		cout << setw(30) << "PHIEU BAO DIEM" << endl;
		x.xuat();
		cout << "Bang diem: " << endl;
		cout << "__________________________________________" << endl;
		cout << setw(15) << left << "Ten mon" << setw(15) << "So trinh" << setw(15) << "Diem" << endl;
		cout << "__________________________________________" << endl;
		for(int i=0; i<n; i++)
		{
			y[i].xuat();
			cout << "__________________________________________" << endl;
		}
	};
	friend void tb(phieu &b);
	friend void chen(phieu &b);
};

void tb(phieu &b)
{
	int st = 0,tong = 0;
	for(int i=0; i<b.n; i++)
	{
		st+=b.y[i].sotrinh;
		tong += b.y[i].diem*b.y[i].sotrinh;
	}
	cout << setw(30) << "Diem trung binh: " << setprecision(3) << (float) tong/st << endl;
}

void chen(phieu &b)
{
	cout << "Nhap mon hoc muon chen: " << endl;
	b.n++;
	b.y[b.n-1].nhap();
	cout << "\n";
}


int main()
{
	phieu a;
	a.nhap();
	a.xuat();
	tb(a);
	chen(a);
	a.xuat();
	tb(a);
	return 0;
}

