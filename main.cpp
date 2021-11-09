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
	string g="test";
	while(getline(test, g)){
		if(g.find("shreksays(")==0 && g.find(")")==g.length()-1){
			for(int o=10; o<g.length()-1;o++){
				cout<<g[o];
			}
			cout<<"\n";
		}
	}
} 