#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	cout << "Geben Sie einen Gleitkomaert ein: ";
	double n;
	cin >> n;
	cout << "n ==" << n
		<< "\nn+1 == " << n+1
		<<"\ndreimal n == " << 3*n
		<< "\nzweimal n == " << n+n
		<< "\nn zum Quadrat == " << n*n
		<< "\nHaelfte von n == " << n/2
		<< "\nWurzel von n == " << sqrt(n)
		<< endl;
}