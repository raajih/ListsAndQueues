#include <iostream>
#include <string>
#include "ArrayList.h"
#include "ArrayQueue.h"
#include "ArrayStack.h"
using namespace std;

int main()
{
	ArrayStack<int> as;

	cout << (as.isEmpty() ? "empty" : "not empty") << endl;

	as.push(1000);
	as.push(5);
	as.push(0);
	cout << as.peek();
	

	
	
	return 0;
}