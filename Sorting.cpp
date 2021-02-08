#include <iostream>
#include <bits/stdc++.h> 

using namespace std;

int main() {
	vector <int> v;
	int numberOfInputs;
	cin >> numberOfInputs;
	v.resize(numberOfInputs);
	for(int i = 0; i < numberOfInputs; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end()); 
	for(int i = 0; i < numberOfInputs; i++) {
		cout << v[i] << endl;
	}
}