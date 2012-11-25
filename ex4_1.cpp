#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>



using namespace std;
int readInput(const char* msg)
{
	int input_var=0;
	cout << msg << endl;
	while (!(cin >> input_var))
	{
		cout << "Invalid input ." << endl;
		cin.clear();
		cin.ignore(1000,'\n');	
	}
	return input_var;
} 
int gcd(int num_1,int num_2)
{
	int min_num = num_1<num_2 ? num_1 : num_2;
	int gcd=0;
	for (int i=1;i<min_num+1;i++){
		if ((num_1 % i)==0 && (num_2 % i)==0 && gcd<i)
			gcd=i; 
	}
	return gcd;

}
int main()
{
	int num_1=readInput("Insert the first number :"); 
	int num_2=readInput("Insert the second number :"); 
	

	
	cout<< "First number is :" << num_1 << endl;
	cout<< "Second number is :" << num_2 << endl;

	printf("gcd(%d,%d) is : %d \n",num_1,num_2,gcd(num_1,num_2));
}
