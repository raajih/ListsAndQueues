#include <iostream>
#include <string>
#include "ArrayList.h"
#include "ArrayQueue.h"
using namespace std;

int main()
{
	ArrayQueue<int> aq;
	cout << (aq.isEmpty() ? "true" : "false") << endl;

	aq.enqueue(1);
	aq.enqueue(2);
	aq.enqueue(3);
	aq.dequeue();
	cout << (aq.isEmpty() ? "true" : "false") << endl;
	cout << aq.peekFront() << endl;

	
	cout << (aq.isEmpty() ? "true" : "false") << endl;
	

	
	
	return 0;
}