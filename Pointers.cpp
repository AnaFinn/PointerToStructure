// Pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

//prototypes
struct SPCA* input_value(struct SPCA *p);//passign and returning pointer to structure
void output_value(struct SPCA* p);

struct SPCA {
	string dog_name;
	string dog_breed;
	int dog_age;
	float dog_height;

	//costructor is used to initalize member variable. It helps when input is not given to the program. Othewise worning and bug could occur
	SPCA(string dn = "Tony", string db = "beagle", int da = 12, float dh = 60.0)
	{
		dog_name = dn;
		dog_breed = db;
		dog_age = da;
		dog_height = dh;
	}
};

int main()
{
	SPCA animal;
	SPCA* ptr;//declaring pointer which is linked to the SPCA structure
	ptr = &animal;// & - refers to the memory address to be assigned to ptr
	cout << "\nThe value of SPCA name is " << animal.dog_name;
	cout << "\nThe memory adress of animal is " << ptr;

	/*int x = 5;
	int* xp;
	xp = &x;
	cout << "\nThe value of x is " << x;
	cout << "\nThe memory adress of x is " << xp;
	int y = 5;
	int* yp;
	yp = &y;
	cout << "\nThe value of y is " << y;
	cout << "\nThe memory adress of y is " << yp;*/

	input_value(ptr);//passing pointer to structure
	output_value(ptr);
}


//function
struct SPCA* input_value(struct SPCA* p)//!!!!!! we can actually assign the whole structure//*-p-* is a varible for the parameter
{
	cout << "\nInput name of th dog: ";
	getline(cin, p->dog_name);//*-p-* is a varible for the parameter
	cout << "\nInput breed of the dog: ";
	getline(cin, p->dog_breed);
	cout << "\nInput age of the dog: ";
	cin >> p->dog_age;
	cout << "\nInput height of the dog: ";
	cin >>p->dog_height;
	return (p);
}

void output_value(struct SPCA* p)
{
	cout << "The name of the dog is: " << p->dog_name;
	cout << "\n The breed of the dog is: " << p->dog_breed;
	cout << "\nThe age of the dog is: " << p->dog_age;
	cout << "\nThe height of the dog is: " << p->dog_height;
}