#include <iostream>
using namespace std;

int main(){
	int x;
	int y;

	cin >> x; // 20
	cin >> y; // 10

	int sum = x + y; 
	int sub = x - y;
	int mul = x * y;
	int div = x / y;

	cout << "Sum :- " << sum << endl; // 30
	cout << "Sub :- " << sub << endl; // 10
	cout << "Mul :- " << mul << endl; // 200
	cout << "Div :- " << div << endl; // 2
}