#include <iostream>
#include <ctime>
#include <cstdlib>




int main() {

	std::cout << "Welcome to Guess The Number game!";
	std::cout << "You have to guess a number between 1 and 10. ";
	std::cout << "Good luck!" << std::endl;

	// generating secret number
	
	srand(time(0));
	int secretnumber = 1 + (rand() % 10);
	int playerchoice;


	// enter number 

	std::cout << "Enter your number:";
		std::cin >> playerchoice;




	if (playerchoice == secretnumber) {
		std::cout << "Well played! You won! " 
			<< playerchoice << " is the secret number" << std::endl;
			system("cls");
	}

	else if (playerchoice > secretnumber) {
		std::cout << "Secret number is smaller than the number you have chosen";
		main();
	}

	else if (playerchoice < secretnumber) {
		std::cout << "Secret number is greater than the number you have chosen.";
		main();
	
	}

   
}

