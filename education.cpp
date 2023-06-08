#include "log.h"
#include <iostream>
using namespace std;




int main() {
	
	

	int a, b;


	Log("Please enter two numbers for multiplication:");

	//Taking input from the user
	cin >> a >> b;

	inputLog(a,b);
	
	Log("The result of the multiplication operation is:");
	MultiplyAndLog(a, b);
	

	

	cin.get();
}