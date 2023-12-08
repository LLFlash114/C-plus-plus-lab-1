/*
Lab 1.3: User Profile
Rajveer Singh

Gets information about user through input to create a user profile, which
is used to generate a fictional mission for them based on the Mission
Impossible movie franchise mission briefings.   
*/

#include <iostream> //Needed for cout,cin, and getline()
#include <string> //Needed for string data type

using namespace std;

int main()
{
	// Store user information 
	string name, dream_country, friend1, friend2, skill,
		 combat, favorite_vehicle, last_country_visited, money_reward;
	
	cout << "Enter your first and last name: ";
	getline(cin,name);
	
	cout << "What country have you always wanted to visit: ";
	cin >> dream_country;
	
	cout << "Enter the first and last name of your best friend: ";
	getline(cin,friend1);	// dummy getline to not get \n as input  
	getline(cin,friend1);
	 
	cout << "Enter the first and last name of another close friend: ";
	getline(cin,friend2);
	
	cout << "What is your best skill? ";
	getline(cin,skill);
	
	cout << "Do you prefer to use karate, guns, or swords in video games? ";
	cin >> combat;  
	
	cout << "What is your favorite vehicle? ";
	cin >> favorite_vehicle;
	
	cout << "What is the country you last visited (or current)? ";
	cin >> last_country_visited;
	
	cout << "Enter the number of cash you want: ";
	cin >> money_reward;
	
	
	// Fictional mission breifing output 
	cout << "\n\nGood morning " << name << ".\n";
	cout << "Your mission, should you choose to accept it, is to recovery an item that was stolen in " << dream_country << ".\n";
	cout << "Highly capable IMF agents " << friend1 << " and " << friend2 << " will assist you in your mission." << endl;
	cout << "You must use your skill of " << skill << " to pursue the thieves and gain photographic proof of the theft." << endl;    
	cout << "The item is held in a warehouse, use " << combat << " to fight off any rogue security." << endl;
	cout << "Upon retreiving the item, use a " << favorite_vehicle << " to escape." << endl;
	cout << "You have 48 hours. Meet me in " << last_country_visited << " after successfully completing the mission." << endl;
	cout << "\nA reward of $" << money_reward << " will be given to you" << endl;
	cout << "Good luck. This message will self-destruct in 15 mintues." << endl;  
	
	return 0;
}


