#include <iostream>
using namespace std;

// Calculate Area & Perimeter of Circle
int main(){
	float pi = 3.14;

	int r;
	cin >> r;

	cout << "Area of Circle : " << pi*r*r << endl;
	cout << "Perimeter of Circle : " << 2*pi*r << endl;
}