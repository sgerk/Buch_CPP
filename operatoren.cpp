#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	cout << "Geben Sie einen Gleitkomaert ein: ";
	int a;
	int b;
	cin >> a >> b;
	cout << (a/b*b + a%b == a) << "\n"; //Ausgabe gibt true "1" aus
}