#include<bits/stdc++.h>
using namespace std;

void quickSort(int x[], int left, int right)
{
	if (left < right)
	{
		int k = (left + right) /2;
		int t = x[k];
		int i=left;
		int j= right;
		do
		{
			while (x[i] < t) i++;
			while (x[j] > t) j--;
			if (i<=j)
			{
				int tg = x[i];
				x[i] = x[j];
				x[j] = tg;
				i++;
				j--;
			}
		}
		while (i<=j);
		quickSort(x,left,j);
		quickSort(x,i,right);
	}
}

int main()
{
	int a[100];
	int n;
	cout << "Nhap n: "; cin >> n;
	cout << "Nhap day so: ";
	for(int i=0; i<n; i++)
		cin >> a[i]; 
	quickSort(a,0,n-1);
	cout << "Day sau khi sap xep la: ";
	for(int i=0; i<n; i++)
		cout << a[i] << " ";
}