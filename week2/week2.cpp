// week2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Bryce Jefferson
/*
1) a function that outputs all numbers from 0 to 1000 that are divisible by two different numbers, which should be passed into the function.
2) a function to reverse the letters in a string ("hello world" => "dlrow olleh")
3) a function that returns a string with the vowels removed ("the cake is a lie" => "th ck s  l"
*/
#include <iostream>
#include <string>

using namespace std;

void divisibleByTwo(int a, int b)
{

    for (int i = 0; i < 1000; i++) // as long as i is less than 1000 we will increment i by 1 
    {
        if (i % a == 0) // if i divided by a returns 0 for the remainder output i
        {
            cout << i  << endl; // Displays output of i
        }
        if (i % b == 0) // if i divided by b returns 0 for the remainder output i
        {
            cout << i << endl; // Displays output of i
        }
		
    }
	
}

void reverseLetters()
{
    string myString; // declare mystring as the string 
    cout << "Enter a word to reverse "; // output that asks the user to enter a word to reverse 
    getline(cin, myString); // allows us to get the entire users input which the variable myString will contain
    reverse(myString.begin(), myString.end()); // built in reverse function that will take the users input and reverse it from beginning to end  
    cout << myString << endl; // outputs the users input after it has been reversed.
}

void removedVowels()
{
	
	char str[100];// initializing variable that will contain the users input

	
	cout << "Enter a word to remove vowels : "; // asking the user to enter a string 
	cin >> str; // get the users input on screen

	int len = strlen(str); // find the length of the users input 

	
	for (int i = 0; i < len; i++) // iterating the string
	{
		// if statment that will check to see if the users input contains any vowels 
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'
			|| str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
		{

			
			for (int j = i; j < len; j++) // deleting vowels by shifting left all upcoming characters left 
			{
				str[j] = str[j + 1];
			}
			i--;
			len--;
		}
	}
	
	cout << "After removing Vowels: " << str; // print the new input of the users input 

	
}

    

int main()
{
   divisibleByTwo(10, 50);
	
   reverseLetters();

	removedVowels();
	
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
