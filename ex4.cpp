#include <iostream>
#include <stdlib.h>
#include <time.h>



using namespace std;

int main()
{
	int random_number=0;
	srand(time(NULL));
	random_number = rand() % 100+1;	

	int input_var=0;

	do
	{
		cout << "Guess the random number : " << endl;
		if (!(cin >> input_var))
		{
			cout << "Invalid input ." << endl;
			cin.clear();
			cin.ignore(1000,'\n');
			continue;	
		}
		if (input_var > random_number)
			cout << "Too High" << endl;
		else if (input_var < random_number)
			cout << "Too low" << endl;
		else if (input_var == random_number)
		{
			cout << "Bingo ;) " << endl;
		
		}
	}while(input_var != random_number);
}
