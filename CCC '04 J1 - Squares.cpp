#include <iostream>
#include <math.h>

using namespace std; 

int main() {
	
	int userInput;
	cin >> userInput; 

	userInput = sqrt(userInput);

	cout << "The largest square has side length "<< userInput << "."; 
}