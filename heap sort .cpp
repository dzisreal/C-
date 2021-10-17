#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b)
{
	int tg = a;
	a = b;
	b = tg;
}

void B1(int x[],int n, int i)
{
	int left = 2*(i+1)-1;
	int right = 2*(i+1);
	int max;
	if(left < n && x[left] < x[i])
		max = left;
	else max = i;
	if (right < n && x[right] < x[max])
		max = right;
	if (i!=max)
	{
		swap(x[i],x[max]);
		B1(x,n,max);
	}
}

void B2(int x[],int n)
{
	for(int i=n/2-1; i>=0; i--)
		B1(x,n,i);
}

void heapSort(int x[],int n)
{
	B2(x,n);
	for(int i=n-1; i>0; i--)
	{
		swap(x[0],x[i]);
		B1(x,i,0);
	}
}

int main()
{
	int a[1000],n;
	cout << "Nhap so phan tu: ";cin >> n;
	for(int i=0; i<n; i++)
		cin >> a[i];
	for(int i=0; i<n; i++)
		cout << a[i] << " ";
	cout << "\nMang sau khi sap xep la: ";
	heapSort(a,n);
	for(int i=0; i<n; i++)
		cout << a[i] << " ";
}