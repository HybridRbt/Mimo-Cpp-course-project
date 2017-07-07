// Mimo-Cpp-project.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

// chap10 class
class App
{
public:
	App(string name)
	{
		_name = name;
	}

	string getName()
	{
		return _name;
	}

private:
	string _name;
};

// chap9 functions
string timeSpent(string lang, int hours)
{
	string result = "You have spent ";
	result += to_string(hours);
	result += " hours on " + lang + ".\n";
	return result;
}

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

	// chap4 conditions
	int limit = 45;
	int baggage = 40;

	if (baggage > limit)
	{
		cout << "Your baggage is over the limit. ";
	}
	else if (baggage == limit)
	{
		cout << "Your baggage is just good." << "\n";
	}
	else
	{
		cout << "You can carry this." << "\n";
	}

	// chap5 arrays
	string languages[5][2];
	
	languages[0][0] = "C++";
	languages[0][1] = "Ongoing";

	languages[1][0] = "C#";
	languages[1][1] = "Done";

	languages[2][0] = "Ruby";
	languages[2][1] = "Done";

	languages[3][0] = "Java";
	languages[3][1] = "Done";

	languages[4][0] = "Python";
	languages[4][1] = "Done";

	cout << "The learning of " << languages[0][0] << " is " << languages[0][1] << "\n";

	// chap6 strings
	string header = "This is about halfway. ";
	string body = "This is the body";
	string message = header + "\n" + body;

	int startIndex = message.find("halfway");

	cout << "The index for halfway is: " << startIndex << "\n";

	// chap7 pointers
	string languagesArray[3] = { "Ruby", "C++", "Python" };
	
	string *languagesArrayPtr = languagesArray;
	cout << *languagesArrayPtr << "\n";

	languagesArrayPtr++;
	cout << *languagesArrayPtr << "\n";
	
	languagesArrayPtr++;
	cout << *languagesArrayPtr << "\n";

	// chap8 loops
	string names[3] = { "Sasha", "Finn", "Seth" };

	int i = 0;
	int length = sizeof(names) / sizeof(names[0]);
	
	while (i < length)
	{
		cout << names[i] << "\n";
		i++;
	}

	// chap9 functions
	cout << timeSpent("C++", 5);

	// chap10 class
	App app("app name");
	cout << app.getName() << "\n";

	// chap11 I/O
	string favLang;
	string favTopic;

	cout << "What's your fav programming language?";
	cin >> favLang;

	cout << "What's your fav programming topic?";
	cin >> favTopic;

	cout << "Your responce: \n";
	cout << "Your fav language is: " << favLang;
	cout << ". And your fav topic is: " << favTopic << ".\n";

	return 0;
}



