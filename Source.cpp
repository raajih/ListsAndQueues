#include <iostream>
#include <string>
#include "ArrayList.h"
#include "ArrayQueue.h"
#include "ArrayStack.h"
using namespace std;

bool isPalindrome(string);

int main()
{
	string testString = "";
	cout << (isPalindrome(testString) ? "is a palindrome" : "is NOT a palindrome");
	

	
	
	return 0;
}
//TODO: implement test conditions in case someone passes an empty string.
bool isPalindrome(string aString)
{
	ArrayStack<string> stack;//Will hold the string in reverse order.
	ArrayQueue<string> queue;//Will hold the string in regular order.

	string currentLetter;
	for (int i = 0; i < aString.length(); i++)
	{
		currentLetter = aString[i];
		stack.push(currentLetter);
		queue.enqueue(currentLetter);
	}

	bool charAreEqual = true;
	while (charAreEqual && !queue.isEmpty()) //Stop looping if characters are not equal or if we have finished the string.
	{
		string stackTop = stack.peek();
		string queueFront = queue.peekFront();
		if (stackTop == queueFront)
		{
			stack.pop();
			queue.dequeue();
		}
		else
			charAreEqual = false;
	}
	return charAreEqual;
}