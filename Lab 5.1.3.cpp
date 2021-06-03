#include <iostream>
#include "Header.h"
using std::cout;
using std::cin;
using std::endl;




int main() {

	double a;

	cout << "Enter value: " << endl;
	cin >> a;
	LazySquare sq(a);
	cout << sq.get_area() << endl;

	cout << "Enter value: " << endl;
	cin >> a;
	sq.set_side(a);
	cout << sq.get_area() << endl;


	return 0;
}