#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<iomanip>
#include<math.h>

using namespace std;

class ptb2
{
	int a[2],b[2],c[2];
public:
	void nhap();
	void xuat();
	void giai();
};

void ptb2::nhap()
{
	cout << "Nhap cac bien cua phuong trinh P(x): ";
	cin >> a[0] >> b[0] >> c[0];
	cout << "Nhap cac bien cua phuong trinh Q(x): ";
	cin >> a[1] >> b[1] >> c[1];
}

void ptb2::xuat()
{
	cout << "Phuong trinh P vua nhap la: " << a[0] << "x^2+" << b[0] << "x+" << c[0] << endl;
	cout << "\nPhuong trinh Q vua nhap la: " << a[1] << "x^2+" << b[1] << "x+" << c[1] << endl;
}

void ptb2::giai()
{
	float d1 = b[0]*b[0] - 4*a[0]*c[0];
	float d2 = b[1]*b[1] - 4*a[1]*c[1];
	if (d1<0) cout << "\nPhuong trinh P vo nghiem!";
	else if (d1==0) cout << "\nPhuong trinh P co nghiem kep x = " << (-1)*float(b[0]/(2*a[0]));
	else
	{
		cout << "\nPhuong trinh P co nghiem x1 = " << float(((-1)*b[0]+(float)sqrt(d1))/(2*a[0]));
		cout << "\nPhuong trinh P co nghiem x2 = " << float(((-1)*b[0]-(float)sqrt(d1))/(2*a[0]));
	}
	if (d2<0) cout << "\nPhuong trinh Q vo nghiem!";
	else if (d2==0) cout << "\nPhuong trinh Q co nghiem kep x = " << (-1)*float(b[1]/(2*a[1]));
	else
	{
		cout << "\nPhuong trinh P co nghiem x1 = " << float(((-1)*b[1]+(float)sqrt(d2))/(2*a[1]));
		cout << "\nPhuong trinh P co nghiem x2 = " << float(((-1)*b[1]-(float)sqrt(d2))/(2*a[1]));
	}
}

int main()
{
	ptb2 a;
	a.nhap();
	a.xuat();
	a.giai();
	return 0;
}