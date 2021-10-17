#include<bits/stdc++.h>
using namespace std;

class phieu;

class ncc
{
	char mancc[10];
	char tenncc[20];
	char diachincc[20];
public:
	friend class phieu;
};

class hang
{
	char tenhang[20];
	int dg,sl;
public:
	void nhap()
	{
		cout << "Ten hang: "; fflush(stdin); gets(tenhang);
		cout << "Don gia: "; cin >> dg;
		cout << "So luong: "; cin >> sl;
	};
	void xuat()
	{
		cout << setw(10) << left << tenhang << setw(15) << dg << setw(15) << sl << setw(15) << dg*sl << endl;
		cout << "___________________________________________________________________________________________" << endl;
	};
	friend void tt(phieu b);
};

class phieu
{
	char map[10];
	char nl[20];
	ncc x;
	int n;
	hang *y;
public:
	void nhap()
	{
		cout << "Ma phieu: "; fflush(stdin); gets(map);
		cout << "Ngay lap: "; fflush(stdin); gets(nl);
		cout << "Ma ncc: "; fflush(stdin); gets(x.mancc);
		cout << "Ten ncc: "; fflush(stdin); gets(x.tenncc);
		cout << "Dia chi: "; fflush(stdin); gets(x.diachincc);
		cout << "Nhap so mat hang: "; cin >> n;
		y = new hang[n];
		for(int i=0; i<n; i++)
			y[i].nhap();
	};
	void xuat()
	{
		cout << setw(30) << "PHIEU NHAP HANG" << endl;
		cout << setw(10) << "Ma phieu: " << map << setw(30) << "Ngay lap: " << nl << endl;
		cout << setw(10) << "Ma NCC: " << x.mancc << setw(30) << "Ten NCC: " << x.tenncc << endl;
		cout << setw(10) << left << "Dia chi: " << x.diachincc << endl;
		cout << setw(10) << left << "Ten hang" << setw(15) << "Don gia" << setw(15) << "So luong" << setw(15) << "Thanh tien" << endl;
		cout << "___________________________________________________________________________________________" << endl;
		for(int i=0; i<n; i++)
			y[i].xuat();
	};
	friend void tt(phieu b);
};

void tt(phieu b)
{
	int tt =0;
	for(int i=0; i<b.n; i++)
		tt+=b.y[i].dg*b.y[i].sl;
	cout << setw(40) << "Cong thanh tien: " << tt << endl; 
}

int main()
{
	phieu a;
	a.nhap();
	a.xuat();
	tt(a);
	return 0;
}

