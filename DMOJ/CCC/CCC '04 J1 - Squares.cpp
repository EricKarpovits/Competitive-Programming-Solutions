/**
 *    Author: Eric Karpovis
 *    Problem Link: https://dmoj.ca/problem/ccc04j1
**/

#include <iostream>
#include <math.h>

using namespace std; 

int main() {
	
	int userInput;
	cin >> userInput; 

	userInput = sqrt(userInput);

	cout << "The largest square has side length "<< userInput << "."; 
}
