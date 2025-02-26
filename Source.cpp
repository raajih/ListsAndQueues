#include <iostream>
#include <string>
#include "ArrayList.h"
using namespace std;

int main()
{
	ArrayList<int> l1;
	ArrayList<string> l2;
	ArrayList<bool> l3;

	cout << (l1.isEmpty() ? "empty" : "not empty") << endl;
	cout << l2.getLength() << endl;
	cout << l3.isEmpty() << endl;

	l1.insert(1, 1);
	l1.insert(2, 3);
	l1.clear();
	//l1.insert(1, 3);
	//l1.insert(1, 4);

	cout << l1.getLength() << endl;
	 
	return 0;
}