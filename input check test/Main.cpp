#include <iostream>
#include <string>
#include "dataStructuresTest.h"

using namespace std;

int get_option();

int main()
{
	Stack sNum1;
	Queue qNum1;

	get_option();

	int opt = get_option();

	cout << opt << endl;

	sNum1.push(10);

	cout << "Stack Size: " << sNum1.size() << endl;
	cout << "Stack Top: " << sNum1.peek() << endl;

	sNum1.push(11);

	cout << "Stack Size: " << sNum1.size() << endl;
	cout << "Stack Top: " << sNum1.peek() << endl;

	sNum1.pop();

	cout << "Stack Size: " << sNum1.size() << endl;
	cout << "Stack Top: " << sNum1.peek() << endl;

	cout << qNum1.size() << endl;

	qNum1.shift(10);

	cout << qNum1.size() << " " << qNum1.get_front() << endl;

	qNum1.shift(11);

	cout << qNum1.size() << " " << qNum1.get_front() << endl;

	qNum1.unshift();

	cout << qNum1.size() << " " << qNum1.get_front() << endl;

	return 0;
}

int get_option()
{
	int x;
	while (!(cin >> x))
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Incorrect input, please enter again:\n";
	}
	return x;
}

