#include <iostream>
#include <string>
#include "FictionHeader.h"

using namespace std;




//initiating main function
int main()
{
	//title of the window when launched
	system("title P.T.S.");


	cout << "\n\t\t\t AWAKENING FROM CRYOSTASIS \n\n";

	//runs the spacers function from IntFiction
	spacers();
	welcome();
	spacers();
	help();
	spacers();
	startingUp();
	spacers();
	goingDown();
	spacers();
	conc();
	spacers();

	//pauses the system
	system("pause");
	return 0;
}

