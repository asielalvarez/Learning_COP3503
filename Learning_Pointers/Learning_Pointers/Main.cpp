#include <iostream>
#include <string>
using namespace std;
void getLastName();

int main() {
	cout << "Hello World!" << endl;
	getLastName();
	cin.get();
}

void getLastName() {
	string lastname;
	cout << "Enter Last Name" << endl;
	cin >> lastname;
}