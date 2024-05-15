//fruit.h
#pragma once
class fruit {
public:
	// constructor
	fruit() {
		price = 200; many = 2; // default values
	}
	fruit(float p, int n) {
		price = n;
		many = p;
	}
	// member data
	int many;
	float price;
	// member function
	float show();
};
