/*This program is designed to challenge the user to find the coded words. Each time a word is completed a harder pattern will be used.
The user will be allowed three mistakes per word befoer the program exits and starts over.*/

#include<iostream>;

int main()
{
	std::cout << "Welcome to the Keywords program. This program will challenge you to find the pattern for three random words."
		" You get three mistakes per word that you attempt. If you strike out or correctly guess all three words the program will end."
		" Good luck!!" << std::endl;
	//todo::create variables for counting tries
	//todo::create loop for game "game loop"
	//todo::create loop for radom selection of words
	//todo::create enum to hold 10 words

	//this variable will hold the number of tries for each word;
	int attempts = 0;
	//this variabel will hold how many words the user has attempted to solve
	int wordNum = 0;
	//enumeration to hold all the words used for the program
	enum{spyglass,suitcase,Secret,Agent,Target,PhoneTap,Gun,Car,SpyGear,Banana};
	//
	
	return 0;
}