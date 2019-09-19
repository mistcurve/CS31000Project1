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
#define BIG_DATABASE "Employee-Database.txt"
#define SMALL_DATABASE "Small-Database.txt"

using namespace std;

void readNumberOfEmployees();
void testTwoEmployees();
//make the output file out_jameslambert.txt
//This function needs to test each thing atleast once.
int main()
{
	cout << "Testing Employee Parameter and Copy Constructor:\n";
	Employee eOriginal(1010, "Lambert", "James");
	Employee eCopy(eOriginal);
	cout << "eOriginal: " << eOriginal;
	cout << "eCopy: " << eCopy;
	cout << "Testing all set functions:\n";
	eOriginal.setID(1011);
	eOriginal.setID(-1);
	eOriginal.setLastName("Davidson");
	eOriginal.setFirstName("Sabrielle");
	cout << eOriginal << "\nAll other methods are tested with the standard menu program.\nProceding with rest of program...\n\n\n";


	ifstream file;

	bool done = false;

	while (!done)
	{
		cout << MENU_TEXT;
		int response = 0;
		cin >> response;
		while (cin.fail())
		{
			cout << "Invalid input, please enter an integer from 1-3\n";
			cin.clear();
			cin.ignore();
			cin >> response;
		}
		switch (response)
		{
		case 1://get number, copy and print that many from the file
			readNumberOfEmployees();
			break;
		case 2://test if two employees are the same
			testTwoEmployees();
			break;
		case 3://Quit
			done = true;
			break;
		default:
			cout << "Invalid Integer, Please Try Again with a value 1-3.\n\n";
			break;
		}
	}

	return 0;
}

void readNumberOfEmployees()
{
	int response;
	cout << "What number of employee records to you want to display and copy?\n";
	cin >> response;

	while (cin.fail() || response < 0)
	{
		cout << "Invalid input, please enter a positive integer\n";
		cin.clear();
		cin.ignore();
		cin >> response;
	}
	{
		ifstream infile;
		infile.open(SMALL_DATABASE, ios::in);

		ofstream outfile;
		outfile.open("out_jameslambert.txt", ios::out);

		for (int i = 0; i < response; i++)
		{
			Employee temp;
			infile >> temp;
			cout << temp;
			outfile << temp;
			if (infile.eof())
			{
				cout << "No more employees to read in the file. stopping action.\n" << i + 1 << " Employees read and wrote.\n";
				break;
			}
		}
		infile.close();
		outfile.close();
	}
}

void testTwoEmployees()
{
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
}