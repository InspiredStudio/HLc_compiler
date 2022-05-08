/*
	Name: Hlc compiler
	Copyright[c]: 
	Author: Gene Luo
	Date: 2022/5/7 18:54
	Description: It is used to compile the HLC code
*/

#include <iostream>
#include <fstream>
#include <cstring>
#include <windows.h>
#include "compiler.h"
using namespace std;
int main(){
	ifstream fin("D:/HLc/project.HLc");
	ofstream fout("D:/HLc/project.cpp");
	int n = 1;
	string s;
	fout << head;
	while(s != "fin"){
		fin >> s;
		if(s == "say"){ 
			fin >> s;
			fout << "\n    cout << " << '"' << s << '"' << ';'; 
			
		}else if(s == "asking"){
			fin >> s; 
			fout << "\n    string s;" << "\n    cout << " << '"' << s << '"' << ';' << "\n    cin >> s;\n    cout << s;";
		}else{
			if(s != "fin"){
			system("color 74");
			cout << "Line:" << n << ",we can't found the directives name " << s << endl;
			}
		}
		n++;
	}
	fout << back;
	fin.close();
	fout.close();
	return 0; 
}

