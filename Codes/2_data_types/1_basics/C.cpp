// auto and decltype

#include <iostream>
using namespace std;

int main(){

	auto a = 21;
	auto b = 1.56;

	cout << a << endl;
	cout << b << endl;

	float c = 10.1;

	decltype(c) d = c;   
	decltype(c) e = c+c;
	decltype(c) f = c*c;

	cout << c << endl;
	cout << d << endl;
	cout << e << endl;
	cout << f << endl;

}