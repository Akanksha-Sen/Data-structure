#include<iostream> //include iostream for input and output
#include <string> //include string for the string object

using namespace std; //using namespace std for string and cout

int main()
{
	string userinput; //stores the numbe that the user enters
	cout << "Please enter a number: ";
	getline(cin, userinput); //Place the user's # that they typed into the string userinput
	int numberlength = userinput.size(); //number length holds the # of digits of the user input
	for (int i = 0; i < numberlength; i++) //for each digit in the user input
	{
		if (userinput[i] >= '0' && userinput[i] <= '9') //if digit is 0-9
		{
			cout << userinput[i] << " "; //Print out digit with a space after the digit
		}
	}

	return 0;
}