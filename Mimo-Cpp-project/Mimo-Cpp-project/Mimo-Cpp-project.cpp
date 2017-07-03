// Mimo-Cpp-project.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	// chap1
	string name1 = "Captain"; 
    string name2 = "Code";
	string result = name1.append(" ").append(name2);
    cout << result;
    return 0;
}
