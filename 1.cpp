#include <iostream>

using namespace std;

/*We have two monkeys, a and b, and the parameters a_smile and b_smile indicate if each is smiling.
We are in trouble if they are both smiling or if neither of them is smiling. Return True if we are in trouble. 

monkey_trouble(True, True) → True
monkey_trouble(False, False) → True
monkey_trouble(True, False) → False*/

bool monkey_trouble(bool a_smile, bool b_smile)
{
	return a_smile == b_smile;

}

/*bool monkey_trouble(bool a_smile, bool b_smile)
{
	if(a_smile == b_smile)
	{
		return true;
	}
	else
	{
		return false;
	}

}*/

int main()
{
	cout << monkey_trouble(true, true) << "\n";
	cout << monkey_trouble(true, false) << "\n";
	cout << monkey_trouble(false, false) << "\n";
	cout << monkey_trouble(false, true) << "\n";
	return 0;
}

