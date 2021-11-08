#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
	string i;
	cout << "Which file do you want to open? ";
	cin>>i;
  ifstream test;
	test.open(i);
	string g;
	while(getline(test, g)){
		cout<<g;
	}
} 