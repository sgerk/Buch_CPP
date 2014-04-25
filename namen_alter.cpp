#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	cout<< "Bitte geben Sie Ihren Vornamen und Ihr Alter ein\n";
	string first_name = "???";
	double age = -1;
	cin >> first_name >> age;
	cout << "Hallo " << first_name << " (Alter " << age*12 << ") \n"; //age in Monaten
}