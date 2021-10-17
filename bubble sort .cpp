#include<bits/stdc++.h>

using namespace std;

int a[100],n;

void swap(int a[],int n)
{
	for(int i=n-1; i>1; i--)
		for(int j=0; j<i; j++)
			if (a[j] < a[j+1])
			{
				int tg = a[j];
				a[j] = a[j+1];
				a[j+1] = tg;
			}
}

int main()
{
	cout << "Nhap n: "; cin >> n;
	for(int i=0; i<n; i++)
		cin >> a[i];
	cout << "\n";
	swap(a,n);
	for(int i=0; i<n; i++)
		cout << a[i] << " ";
}