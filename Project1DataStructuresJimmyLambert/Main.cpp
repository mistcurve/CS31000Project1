// CS3100 Data Structures and Algorithms
// Created By James Brien Lambert
// Professor Meilin Liu
// 9/14/2019
// Programming Assignment #1

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include "Employee.h"


#define MENU_TEXT "\n\n1. Retrieve and Write a Number of Employee Records\n2. Test to see if two employees are the same\n3. Quit\n\n"

using namespace std;

//make the output file out_jameslambert.txt
//This function needs to test each thing atleast once.
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
		switch (response)
		{
		case 1://get number, copy and print that many from the file
			cout << "What number of employee records to you want to display and copy?\n";
			cin >> response;
			for (int i = 0; i < response; i++)
			{

			}
			break;
		case 2://test if two employees are the same
			cout << "input data for two differnt employees in the following format:\n\"First Last ID\"\n\"First Last ID\"\n\n";
			{
				Employee e1, e2;
				cin >> e1 >> e2;
				if (e1 == e2)
				{
					cout << "The two employees are the same\n";
				}
				else
				{
					cout << "The two employees are differnt\n";
				}
			}
			break;
		case 3://Quit
			done = true;
			break;
		default:
			cout << "Invalid Input Options, Please Try Again.\n\n";
			break;
		}
	}
	
	
	
	
	string s;


	while (file >> s)
	{
		cout << s;
	}

	return 0;
}