#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	string previous = "";
	string current;
	while (cin >> current) {
		if (previous == current)
			cout << "Wortwiederholung: " << current << '\n';
		previous = current;
	}
}