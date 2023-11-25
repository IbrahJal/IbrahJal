//============================================================================
// Name        : round.cpp
// Author      : 100
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int z;
	int x;
	string s;


	cout << "Enter a number or enter stop" << endl;

	while (s != "stop")
	{
	getline(cin,s);

	if(s == "stop")
	{
		break;
	}


	z = stoi(s.substr(s.size() - 1,1));  // insane line
	x = stoi(s);



	if (z < 5)
	{
		x -= z;
		cout << x << endl;
	}
	else
	{
		 x += 10-z;
		cout << x << endl;
	}
	}



	return 0;
}
