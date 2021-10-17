#include<bits/stdc++.h>
using namespace std;

void merge(int x[],int l, int m, int r)
{
	int i,j,k;
	int n1 = m - l + 1;
	int n2 = r - m;
	int L[n1], R[n2];
	for(int i=0; i<n1; i++)
		L[i] = x[l+i];
	for(j=0; j<n2; j++)
		R[j] = x[m+1+j];
	i=0;
	j=0;
	k=l;
	while (i<n1 && j<n2)
	{
		if (L[i] <= R[j])
		{
			x[k] = L[i];
			i++;
		}
		else
		{
			x[k] = R[j];
			j++;
		}
		k++;
	}
	while (i<n1)
	{
		x[k] = L[i];
		i++;
		k++;
	}
	while (j<n2)
	{
		x[k] = R[j];
		j++;
		k++;
	}
}

void mergeSort(int x[],int l, int r)
{
	if (l<r)
	{
		int m = l + (r-l)/2;
		mergeSort(x,l,m);
		mergeSort(x,m+1,r);
		merge(x,l,m,r);
	}
}

int main()
{
	int a[100],n;
	cout << "Nhap n: "; cin >> n;
	for(int i=0; i<n; i++)
		cin >> a[i];
	cout << "\nDay vua nhap la: ";
	for(int i=0; i<n; i++)
		cout << a[i] << " ";
	mergeSort(a,0,n-1);
	cout << "\nDay sau khi sap xep la: ";
	for(int i=0; i<n; i++)
		cout << a[i] << " ";
}