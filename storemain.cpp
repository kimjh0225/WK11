// storemain.cpp
#include <iostream>
#include "store.h"
using namespace std;
int main() {
	store A, B;
	B = store(3, 4, 5, 6, 100, 200, 300, 400);
	cout << A.total() << endl;
	cout << B.total() << endl;
	cout << "A peach is " << A.peach.price<<" won" << endl;
	return 123;
}
