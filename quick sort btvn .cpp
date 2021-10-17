#include<bits/stdc++.h>
using namespace std;

void quickSort(string x[], int left, int right)
{
	if (left < right)
	{
		int k = (left + right) /2;
		string t = x[k];
		int i=left;
		int j= right;
		do
		{
			while (x[i] < t) i++;
			while (x[j] > t) j--;
			if (i<=j)
			{
				string tg = x[i];
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
	int n;
	cout << "Nhap so tu: "; cin >> n;
	string a[100];
	cout << "Nhap day tu: ";
	for(int i=0; i<=n; i++)
	{
		getline(cin,a[i]);
	}
	quickSort(a,0,n-1);
	cout << "Day tu sau khi sap xep la: ";
	for(int i=0; i<=n; i++)
		cout << a[i] << " ";
}