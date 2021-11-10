#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;
//I am not sure why you guys don't do this
vector<string> variables;
int main() {
	string i;
	cout << "Which file do you want to open? ";
	cin>>i;
	if(i.find(".shrek")==i.length()-6){
  	ifstream test;
		test.open(i);
		string g;
		while(getline(test, g)){
			//print statement
			if(g.find("shreksays(")==0 && g.find(")")==g.length()-1){
				for(int o=10; o<g.length()-1;o++){
					cout<<g[o];
				}
				cout<<"\n";
			}else if(g.find("ogres are like ")==0 && g.find(" they have ")){
				//Variables
	
				string varname="";
				string varcontent="";
				for(int o=15; o<g.find(" they have"); o++){
					varname+=g[o];
				};
				variables.push_back(varname);
				for(int o=26+varname.length(); o<g.length(); o++){
					varcontent+=g[o];
				}
				variables.push_back(varcontent);
				cout << varcontent;
			}
		}
	}
} 