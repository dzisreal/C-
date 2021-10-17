//Cài đặt mảng số nguyên
//Toán tử cộng 2 mảng cùng kích thước
//Toán tử đổi dấu 1 mảng
//Toán tử sắp xếp mảng tăng dần
//Toán tử >> , <<

#include<bits/stdc++.h>
using namespace std;

class mang
{
	int *a;
	int n;
public:
	mang operator+(mang b);
	mang operator-();
	mang operator++();
	friend istream& operator>>(istream& x, mang &y);
	friend ostream& operator<<(ostream& x, mang y);
};

istream& operator>>(istream& x, mang &y)
{
	cout << "Nhap n: ";
	x >> y.n;
	y.a = new int[y.n];
	for(int i=0; i<y.n; i++)
		x >> y.a[i];
	return x;
}

ostream& operator<<(ostream& x, mang y)
{
	cout << "Mang vua nhap la: ";
	for(int i=0; i<y.n; i++)
		x << y.a[i] << " ";
	return x;
}

mang mang::operator+(mang b)
{
	mang c;
	if (n!=b.n) cout << "2 mang khong cung do dai!";
	else
	{
		c.n = n;
		c.a = new int[n];
		for(int i=0; i<n; i++)
			c.a[i] = a[i] + b.a[i];
	}
	return c;
}

mang mang::operator-()
{
	for(int i=0; i<n; i++)
		a[i] = -a[i];
	return *this;
}

mang mang::operator++()
{
	for(int i=0; i<n-1; i++)
		for(int j=i+1; j<n; j++)
			if (a[i] > a[j])
			{
				swap(a[i],a[j]);
			}
	return *this;
}

int main()
{
	mang a,b;
	cin >> a;
	cin >> b;
	cout << a << endl;
	cout << b << endl;
	mang c = a+b;
	cout << c << endl;
	cout << -a << endl;
	cout << ++a << endl;
}
