#include<bits/stdc++.h>

using namespace std;

class ARRAY
{
	int *value;
	int n;
public:
	ARRAY();
	ARRAY(int n);
	~ARRAY();
	void nhap();
	void xuat();
}; 

ARRAY::ARRAY()
{
	n = 0;
}

ARRAY::ARRAY(int n)
{
	n = 3;
	value = new int[n];
	for(int i=0; i<n; i++)
	{
		value[i] = 0;
	}
	
}

ARRAY::~ARRAY()
{
	n = 0;
	delete[] value;
}

void ARRAY::nhap()
{
	cout << "Nhap n: " ; cin >> n;
	value = new int[n];
	for(int i=0; i<n; i++)
		cin >> value[i];
}

void ARRAY::xuat()
{
	for(int i=0; i<n; i++)
		cout << value[i] << " ";
}
int main()
{
	ARRAY a;
	a.nhap();
	a.xuat();
}