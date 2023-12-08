/*
Lab 1.1: Simple text output
Rajveer Singh

Outputs several lines of information about me
that are formatted using escape sequences.  
*/

#include <iostream> //Needed for cout 

using namespace std;

int main()
{
	// General information about me
	cout << "My name is Rajveer Singh." << endl;
	cout << "I was born in 2004 and raised in Surry, British Columbia." << endl;
	cout << "I'm pursuing an Information Technology degree to become a programmer." << endl;
	cout << "During my free time I enjoy playing video games and watching movies." << endl;
	
	// Hobbies
	cout << "My favorite movie is \"Pirates of the caribbean\"." << endl;
	cout << "\nMy favorite movie characters are:\nJack Sparrow\nJohn Wick\nEthan Hunt" << endl;
	 
	// Graduation information 
	cout << "\nI graduated high school on 06/18/2022, last year." << endl; 	//MMDDYYYY date format
	cout << "My graduation quote was \n\t\"This was due in 5 minutes\"." << endl;
	
	cout << "\nGoodbye, this file is stored in C:\\Users\\house\\Desktop\\C++Projects." << endl;
				
	return 0;
}

