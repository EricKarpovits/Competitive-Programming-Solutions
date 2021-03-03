/**
 *    Author: Eric Karpovis
 *    Problem Link: https://dmoj.ca/problem/ac19p2
**/

#include <bits/stdc++.h>

using namespace std; 

int main() {
  	int length;
  	int shift;
  	string letter;

  	cin >> length >> shift;
	cin.ignore(); 
  	getline(cin, letter);

	for(int i = 0; i < length; i++) {

		if (letter[i] != ' '){
			int c = letter[i];

			c += shift;
			c %= 26;
			letter[i] =c;
		}
	}
	cout << letter; 
}
