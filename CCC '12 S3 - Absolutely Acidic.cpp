#include<iostream>
#include <vector>
#include <bits/stdc++.h> 

using namespace std;

int main() {
	vector<int> reading(1002, 0);

	int mostFrequet;

	int range; 
	cin >> range; 
	for(int i = 0; i < range; i++) {
		int N;
		cin >> N;
		reading[N]++;
	}
	vector<int> v;
	v = reading;
	sort(v.begin(), v.end(), greater<int>());

	int freq = v[0];

	int i=0;
	while (freq == v[i] && v[i+1] != 0) {
		i++;
	}

	//cout << endl << endl << i << endl << v[i] << endl;

	int secFreq = v[i];

	vector<int> mostFreq;
	vector<int> mostSecFreq;

	int mostFreqCounter = 0;
	int secMostFreqCounter = 0;
	for (int j=0;j<1000;j++) {
		if(reading[j] == freq) {
			mostFreq.resize(mostFreqCounter +1);
			mostFreq[mostFreqCounter] = j;
			mostFreqCounter++;
		} 
		if (reading[j] == secFreq) {
			mostSecFreq.resize(secMostFreqCounter +1);
			mostSecFreq[secMostFreqCounter] = j;
			secMostFreqCounter++;
		}
	}

	sort(mostFreq.begin(), mostFreq.end());
	sort(mostSecFreq.begin(), mostSecFreq.end());
    
	int a;
	if (mostFreq.size() > 1){
		a = abs(mostFreq[0] - mostFreq[mostFreq.size() -1]);
	} else {
		if(mostFreq[0] > mostSecFreq[0]) {
			a = abs(mostFreq[0] - mostSecFreq[0]);
		} else {
			a = abs(mostFreq[0] - mostSecFreq[mostSecFreq.size() -1]);
		}
	}



	cout << a;
}