// CS3100 Data Structures and Algorithms
// Created By James Brien Lambert
// Professor Meilin Liu
// 9/14/2019
// Programming Assignment #1

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

#define MENU_TEXT "1. Retrieve and Write a Number of Employee Records\n2. Test to see if two employees are the same\n3. Quit\n\n"

using namespace std;

int main()
{
	ifstream file;
	file.open("Employee-Database.txt");
	
	bool done = false;

	while (!done)
	{
		cout << MENU_TEXT;
		int response = 0;
		cin >> response;
		if (response == 1)
		{
			cout << "What number of employee records to you want to display and copy?\n";
			string s;
			cin >> s;
			cin >> response;
			for (int i = 0; i < response; i++)
			{

			}
		}
		else if (response == 2)
		{

		}
		else if (response == 3)
		{

		}
		else
		{
			cout << "Invalid Input Options, Please Try Again.\n\n";
		}
	}
	
	
	
	
	string s;


	while (file >> s)
	{
		cout << s;
	}

	return 0;
}