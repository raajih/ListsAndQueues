//Raajih Roland
//Data Structures and Algorithms
#include <iostream>
#include <string>
#include "ArrayList.h"
#include "ArrayQueue.h"
#include "ArrayStack.h"
using namespace std;

bool isPalindrome(string);

int main()
{
	bool keepPlaying = true;
	string testWord;

	//Outputs game to user.
	cout << "Welcome to Raajih's Palindrome tester!\n";
	while (keepPlaying)
	{
		cout << "\nPlease enter the word you would like to test: ";
		getline(cin, testWord);

		cout << testWord << " " << (isPalindrome(testWord) ? "is a palindrome!" : "is NOT a palindrome!") << endl;

		cout << "Would you like to play again? (Y or N): ";
		string keepPlayingEntry;
		getline(cin, keepPlayingEntry);
		keepPlaying = (keepPlayingEntry == "Y" || keepPlayingEntry == "y") ? true : false;

	}
	
	return 0;
}

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
		if (tolower(stackTop[0]) == tolower(queueFront[0])) //Only added the tolower to keep it case insensitive. Not necessary otherwise.
		{
			stack.pop();
			queue.dequeue();
		}
		else
			charAreEqual = false;
	}
	return charAreEqual;
}