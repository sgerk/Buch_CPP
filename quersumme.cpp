#include <iostream>

using namespace std;

int main()
{
int num;
int sum = 0;

cout << " Enter a number : ";
cin >> num;

while ( num > 0 ) {
sum += num % 10;
num /= 10;
}

cout << "Sum = " << sum << '\n';

return 0;
}