#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<iomanip>
#include<string.h>
using namespace std;

class faculty;
class student;

class school
{
	char name[20];
	char date[20];
public:
	friend class faculty;
	friend class student;
};

class faculty
{
	char name[20];
	char date[20];
	school x;
public:
	void input();
	void output();
	friend class student;
};

void faculty::input()
{
	cout << "Faculty's name: "; fflush(stdin); gets(name);
	cout << "Date of Faculty: "; fflush(stdin); gets(date);
	cout << "School's name: "; fflush(stdin); gets(x.name);
	cout << "Date of School: "; fflush(stdin); gets(x.date);
}

void faculty::output()
{
	cout << setw(20) << left << "Faculty's name" << setw(20) << "Date of Faculty" << setw(20) << "School's name" << setw(20) << "Date if School" << endl;
	cout << setw(20) << left << name << setw(20) << date << setw(20) << x.name << setw(20) << x.date << endl;
}

class person
{
protected:
	char name[20];
	char birth[20];
	char address[20];
public:
	void input();
	void output();
	person();
};

void person::input()
{
	cout << "Name: "; fflush(stdin); gets(name);
	cout << "Birth: "; fflush(stdin); gets(birth);
	cout << "Address: "; fflush(stdin); gets(address);
}

void person::output()
{
	cout << "\n"<<setw(20) << left << "Name" << setw(20) << "Birth" << setw(20) << "Address" << endl;
	cout << setw(20) << left << name << setw(20) << birth << setw(20) << address << endl;
}

person::person()
{
	strcpy(name,"khongco");
	strcpy(birth,"khong co");
	strcpy(address,"khongco");
}

class student : public person
{
	faculty y;
	char Class[10];
	float score;
public:
	void input();
	void output();
	student();
};

void student::input()
{
	y.input();
	person::input();
	cout << "Class: "; fflush(stdin); gets(Class);
	cout << "Score: "; cin >> score;
}

void student::output()
{
	y.output();
	person::output();
	cout << "\n" << setw(20) << left << "Class" << setw(20) << "Score" << endl;
	cout << setw(20) << left << Class << setw(20) << score << endl;
}

student::student()
{
	strcpy(Class,"Khong co");
	score = 0;
}
int main()
{
	student a;
	a.input();
	a.output();
	strcpy(a.y.x.name,"DHCNHN");
	cout << "Thong tin sau khi doi ten truong la: " << endl;
	a.output();
	return 0;
}