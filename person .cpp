#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<iomanip>

using namespace std;
class person 
{
protected:
	char hoten[10];
	char ngaysinh[10];
	char quequan[10];
};

class kysu : public person
{
	char nganh[10];
	int namtn;
public:
	void nhap();
	void xuat();
};

void kysu::nhap()
{
	cout << "Nhap ho ten :"; fflush(stdin); gets(hoten);
	cout << "Nhap ngay sinh: "; fflush(stdin); gets(ngaysinh);
	cout << "Nhap que quan: "; fflush(stdin); gets(quequan);
	cout << "Nhap nganh: "; fflush(stdin); gets(nganh);
	cout << "Nhap nam tot nghiep: "; cin >> namtn;
}

void kysu::xuat()
{
	cout << setw(20) << left << "Ho ten" << setw(20) << "Ngay sinh" << setw(20) << "Que quan" << setw(20) << "Nganh" << setw(20) << "Nam tot nghiep" << endl;
	cout << setw(20) << left << hoten << setw(20) << ngaysinh << setw(20) << quequan << setw(20) << nganh << setw(20) << namtn << endl;
}

int main()
{
	kysu *a;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	a = new kysu[n];
	for(int i=0; i<n; i++)
		a[i].nhap();
	for(int i=0; i<n; i++)
		a[i].xuat();
	return 0;
}