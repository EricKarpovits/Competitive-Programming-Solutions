#include <iostream>

using namespace std; 

int main() {
	int f, s, t; 
	cin >> f >> s >> t; 
	int middle;
	if((f < s && f > t) || (f < t && f > s))
		cout << f;
	else if ((s < t && s > f) || (s > t && s < f))
		cout << s;
	else 
		cout << t; 
}