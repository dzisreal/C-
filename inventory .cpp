#include<bits/stdc++.h>
using namespace std;

class phieu;

class nv
{
	char tennv[20];
	char cv[20];
public:
	friend class phieu;
};

class phong
{
	char tenphong[20];
	char maphong[20];
	char tp[20];
public:
	friend class phieu;
};

class taisan
{
	char tents[20];
	int sl;
	char tinhtrang[20];
public:
	void nhap()
	{
		cout << "Ten tai san: "; fflush(stdin); gets(tents);
		cout << "So luong: "; cin >> sl;
		cout << "Tinh trang: "; fflush(stdin); gets(tinhtrang);
	};

	void xuat()
	{
		cout << setw(10) << left << tents << setw(15) << sl << setw(15) << tinhtrang << endl;
		cout << "________________________________________________________________________________" << endl;
	};

	friend class phieu;
};

class phieu
{
	char mp[20];
	char ngay[20];
	nv x;
	phong y;
	int n;
	taisan *z;
public:
	void nhap()
	{
		cout << "Ma phieu: "; fflush(stdin); gets(mp);
		cout << "Ngay kiem ke: "; fflush(stdin); gets(ngay);
		cout << "Nhan vien kiem ke: "; fflush(stdin); gets(x.tennv);
		cout << "Chuc vu: "; fflush(stdin); gets(x.cv);
		cout << "Kiem ke tai phong: "; fflush(stdin); gets(y.tenphong);
		cout << "Ma phong: "; fflush(stdin); gets(y.maphong);
		cout << "Ten truong phong: "; fflush(stdin); gets(y.tp);
		cout << "Nhap so tai san: "; cin >> n;
		z = new taisan[n];
		for(int i=0; i<n; i++)
			z[i].nhap();
	};

	void xuat()
	{
		int s = 0;
		cout << setw(30) << "PHIEU KIEM KE TAI SAN" << endl;
		cout << setw(10) << left << "Ma phieu: " << mp << setw(20) << "Ngay kiem ke: " << ngay << endl;
		cout << setw(10) << left << "Nhan vien kiem ke: " << x.tennv << setw(20) << "Chuc vu: " << x.cv << endl;
		cout << setw(10) << left << "Kiem ke tai phong: " << y.tenphong << setw(20) << "Ma phong: " << y.maphong << endl;
		cout << setw(10) << left << "Truong phong: " << y.tp << endl;
		cout << "________________________________________________________________________________" << endl;
		cout << setw(10) << left << "Ten tai san" << setw(15) << "So luong" << setw(15) << "Tinh trang" << endl;
		cout << "________________________________________________________________________________" << endl;
		for(int i=0; i<n; i++)
		{
			z[i].xuat();
			s+=z[i].sl;
		}
		cout << "So tai san da kiem ke: " << n << setw(20) << "Tong so: " << s << endl;
	}
};

int main()
{
	phieu a;
	a.nhap();
	a.xuat();
	return 0;
}