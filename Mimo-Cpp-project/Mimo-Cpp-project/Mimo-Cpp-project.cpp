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
    cout << result << "\n";
    
	// chap2 variables
	int numOfLanguages = 10;
	numOfLanguages++;

	string aLanguage = "C++";

	cout << "I've got " << numOfLanguages << " languages here and one of them is " << aLanguage << ".\n";
	
	// chap3 booleans
	bool savvy = false;
	bool ready = false;
	savvy = !savvy;
	ready = !ready;
	
	cout << boolalpha << savvy << "\n" << ready << "\n";

	// strings
	string header = "This is about halfway. ";
	string body = "This is the body";
	string message = header + "\n" + body;

	int startIndex = message.find("halfway");

	cout << "The index for halfway is: " << startIndex;
	
	return 0;
}
