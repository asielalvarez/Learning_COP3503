#include <iostream>
#include <string>
using namespace std;
void getLastName();

void getName();

int main() {
	cout << "Hello World!" << endl;
	getName();
	getLastName();
	cin.get();
}

void getLastName() {
	string lastname;
	cout << "Enter Last Name" << endl;
	cin >> lastname;

}

void getName() {
	string name;
	cout << "Enter your name" << endl;
	cin >> name;
}