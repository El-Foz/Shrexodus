//These are the libraries I included
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
//something to shorten the code significantly
using namespace std;
//variables
vector<string> variables;
//finds where an element is in a vector
int maybe(vector<string> i, string test){
	for(int c=0; c<i.size(); c++){
		if(i[c]==test){
			return c;
		}
	}
	return -1;
}
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
				//tests if the variable is real
				string tempvar="";
				//this adds to the temporary variable so that it contains a variable name
				for(int o=10; o<g.length()-1; o++){
					tempvar+=g[o];
				}
				//references the variable name and prints the one after
				if(maybe(variables, tempvar) > 0-1 && maybe(variables, tempvar)%2==0){
					cout<<variables[maybe(variables, tempvar)+1];
				}else{
					//error
					cout<<"Get out of my swamp!\n";
					break;
				}
				cout<<"\n";
			}else if(g.find("ogres are like ")==0 && g.find(" they have ")){
				//Variables	
				string varname="";
				string varcontent="";
				//gets the variable name
				for(int o=15; o<g.find(" they have "); o++){
					varname+=g[o];
				};
				//pushes it to the vector (like a dictionary)
				variables.push_back(varname);
				//this is the variable content
				for(int o=26+varname.length(); o<g.length(); o++){
					varcontent+=g[o];
				}
				variables.push_back(varcontent);
			}else if(g.find("shrekis")==0){
				//comment syntax
				continue;
			}else if(g==""){
				//just make sure that blankspace is ignored
				continue;	
			}else{
				//error
				cout<<"That's not very shreksy\n";
				break;
			}
		}
	}
} 