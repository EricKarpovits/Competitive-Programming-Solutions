#include <iostream>
#include <stack>

using namespace std; 

int main() {
	int userBlock;
	int prev = 101; 
	int current;
	stack <int> blocks;

	for(int i = 0; i < 3; i++) {
		cin >> userBlock;
		blocks.push(userBlock);
	}

	while (blocks.size() != 0)  { 
		current = blocks.top();
		blocks.pop();
		if(current > prev){
			cout << "Try again!";
			return 0;
		}
		prev = current;
	}

	cout << "Good job!";
	return 0;
}