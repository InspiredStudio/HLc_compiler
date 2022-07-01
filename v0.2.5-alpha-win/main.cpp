/*
	Name: Hlc compiler
	Copyright[c]: 
	Author: Gene Luo
	Date: 2022/5/7 18:54
	Description: It is used to compile the HLC code
*/

#include <iostream>
#include <windows.h>
#include "compiler.h"
using namespace std;
int main(){
	cout << "Please input your Absolute path:";
	char path[10000];
	cin >> path;
	char output[10000];
	strcat(output, path);
	strcat(output, ".cpp");
	ifstream fin(path);
	ofstream fout(output);
	int n = 1;
	string s;
	fout << head;
	while(s != "fin"){
		fin >> s;
		if(s == "output"){ 
			getline(fin, s);
			fout << "\n    cout << " << '"' << s << '"' << ';'; 
			
		}else if(s == "input"){
			getline(fin, s);
			fout << "\n    string s;" << "\n    cout << " << '"' << s << '"' << ';' << "\n    cin >> s;\n    cout << s;";
		}else{
			if(s == ""){
				if(n == 1){
					cout << "it's empty!";
					system("color 3F");
					return 0;
				}
				else{
					continue;
				}
			}
			else if(s != "fin"){
			system("color 74");
			cout << "Line:" << n << ",we can't found the directives name " << s << endl;
			}
		}
		n++;
	}
	fout << back;
	fin.close();
	fout.close();
	cout << "The code is ready, Path:";
	cout << output;
	return 0; 
}

