// hello.cpp: Maggie Johnson
// Description: a program that prints the immortal saying "hello world"

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
 
 for (int i=0;i<4;i++)
 {
 	for (int j=0;j<6;j++)
 	{	
 	cout <<left  << setw(17) << "Hello World!";
 	}
	cout << endl;
 }
 return 0;
}
