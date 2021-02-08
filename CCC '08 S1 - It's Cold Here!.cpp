#include <iostream>
#include <vector>
#include <string>

using namespace std; 

int main() {

	vector<pair<string, float>> cities(10000);
	int lowTemp = 200;
	bool stop = false;

	int i = 0;
	int lowestIndex = 0;
	int tempIndex;
	while(!stop) {

		cin >> cities[i].first >> cities[i].second; 

		if(lowTemp > cities[i].second) {
			lowTemp = cities[i].second;
			lowestIndex = i;
		}
		if (cities[i].first == "Waterloo") {
			stop = true; 
		}
		i++;
	}
	cout << cities[lowestIndex].first;
}