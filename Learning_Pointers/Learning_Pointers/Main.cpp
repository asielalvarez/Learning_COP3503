#include <iostream>
#include <string>
using namespace std;

void getName();

int main() {
	cout << "Hello World!" << endl;
	getName();
	cin.get();
}

void getName() {
	string name;
	cout << "Enter your name" << endl;
	cin >> name;
}