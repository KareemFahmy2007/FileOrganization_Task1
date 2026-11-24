// Task__sec_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
	string name;
	int ID;
	float Grade;

	cout << "Enter Full Name " << endl;
	getline(cin, name);

	cout << "Enter ID " << endl;
	cin >> ID;


	cout << "Enter Grade " << endl;
	cin >> Grade;

	ofstream file;
	file.open("Student.txt");
	file << "Student Name :" << name << endl;
	file << "Student ID :" << ID << endl;
	file << "Student Grade :" << Grade << endl;
	file.close();

}

