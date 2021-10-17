#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<iomanip>

using namespace std;


class sv
{
	char masv[10];
	char hoten[20];
	float toan,ly,hoa;
public:
	void nhap();
	void xuat();
	friend void swap(sv *a,int n);
};

void sv::nhap()
{
	cout << "Nhap ma sinh vien: "; fflush(stdin); gets(masv);
	cout << "Nhap ho ten sinh vien: "; fflush(stdin); gets(hoten);
	cout << "Nhap diem toan: "; cin >> toan;
	cout << "Nhap diem ly: "; cin >> ly;
	cout << "Nhap diem hoa: "; cin >> hoa;
}

void sv::xuat()
{
	cout << setw(15) << left << "Ma sinh vien" << setw(15) << "Ho ten sinh vien" << setw(15) << "Diem toan" << setw(15) << "Diem ly" << setw(15) << "Diem hoa" << endl;
	cout << setw(15) << left << masv << setw(15) << hoten << setw(15) << toan << setw(15) << ly << setw(15) << hoa << endl;
	cout << "Tong diem: " << float(toan + ly + hoa) << endl;
}

void swap(sv *a,int n)
{
	for(int i=0; i<n-1; i++)
		for(int j=i+1; j<n; j++)
			if(a[i].toan + a[i].ly + a[i].hoa > a[j].toan + a[j].ly + a[j].hoa)
			{
				sv tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}
}

int main()
{
	int m;
	cout << "Nhap m: "; cin >> m;
	sv *b;
	b = new sv[m];
	for(int i=0; i<m; i++)
		b[i].nhap();
	swap(b,m);
	for(int i=0; i<m; i++)
	{
		b[i].xuat();
	}
}