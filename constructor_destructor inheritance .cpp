#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<iomanip>
#include <string.h>

using namespace std;

class electronic
{
protected:
	char congsuat[10];
	char dienap[10];
public:
	electronic(char* cs, char* da);
};

electronic::electronic(char* cs, char* da)
{
	strcpy(congsuat, cs);
	strcpy(dienap, da);
}

class maygiat : public electronic
{
	float dungtich;
	char loai[10];
public:
	void xuat();
	maygiat(char * cs, char* da, float dt, char* lo);
};

void maygiat::xuat()
{
	cout << setw(15) << left << "Cong suat" << setw(15) << "Dien ap" << setw(15) << "Dung tich" << setw(15) << "Loai" << endl;
	cout << setw(15) << left << congsuat << setw(15) << dienap << setw(15) << dungtich << setw(15) << loai << endl;
}

maygiat::maygiat(char* cs, char* da, float dt, char* lo):electronic(cs, da)
{
	dungtich = dt;
	strcpy(loai, lo);
}

class tulanh : public electronic
{
	float dungtich;
	int songuoian;
public:
	tulanh(char* cs, char* da, float dt, int sna);
	void xuat();
};

tulanh::tulanh(char* cs, char* da, float dt, int sna):electronic(cs, da)
{
	dungtich = dt;
	songuoian = sna;
}

void tulanh::xuat()
{
	cout << setw(15) << left << "Cong suat" << setw(15) << "Dien ap" << setw(15) << "Dung tich" << setw(15) << "So nguoi an" << endl;
	cout << setw(15) << left << congsuat << setw(15) << dienap << setw(15) << dungtich << setw(15) << songuoian << endl;
}
int main()
{
	maygiat a("100W","10A",70,"Panasonic");
	a.xuat();
	tulanh b("200W","15A",75.5,5);
	b.xuat();
}