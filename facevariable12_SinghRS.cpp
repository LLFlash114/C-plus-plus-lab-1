/*
Lab 1.2: Design facial expression!
Rajveer Singh

Outputs a face/ASCII art by representing different facial components in variables
and combining them all in 1 single face variable. 
*/

#include <iostream> //Needed for cout
#include <string> //Needed for string data type

using namespace std;

int main()
{
	// Reference image: https://w7.pngwing.com/pngs/561/676/png-transparent-walter-white-say-my-name-youtube-hermanos-walter-white-television-hat-fictional-characters.png
	
	string hat_top = "\t\t***********************\n";
	string hat_sides = "\t\t*\t\t      *\n\t\t*\t\t      *\n\t\t*\t\t      *\n";
	string hat_bottom = "\t  ***********************************\n";
	string eyebrows = "\t        |\t\t      |\n\t        |   ####       ####   |\n";
	string eyes = "\t        |   [ @ ]     [ @ ]   |\n";
	string nose = "\t        |\t\t      |\n\t        |\t   /\\\t      |\n\t        |\t  /  \\\t      |\n";
	string moustache = "\t        |     /////  \\\\\\\\\\    |\n";
	string mouth = "\t        |      ==========     |\n";
	string chin = "\t         \\\t\t     /\n\t          \\_________________/\n";
	
	// Combines facial components into single variable face    
	string face = hat_top + hat_sides + hat_bottom + eyebrows + eyes + nose + moustache + mouth + chin; 
	cout << face << endl;

	return 0;
}


