// Write a program that asks the user to type an integer and writes "YOU WIN" if the value is between 56 and 78 (both included). In the other case it writes "YOU LOSE". {{solution|title=Solution|text= //Made by: Engineer Reiz Troy D. Durante

#include <iostream>

using namespace std;

int main()
{
	int input;
	cout << "Type a number between 56 and 78: " << endl;
	cin >> input;
	if (input >= 56 && input <= 78)
	{
		cout << "YOU WIN" << endl;
	} 
	else 
	{			
		cout << "YOU LOSE" << endl;
	}
	return 0;
}