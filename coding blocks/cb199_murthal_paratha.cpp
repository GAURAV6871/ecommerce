#include<iostream>
#include<climits>

using namespace std;

int numOfPratasCookedByACook(int r, int timeLimit) {
	int count = 0; // to store the count of pratas that can be cooked in the 
			       // given timeLimit by a cook with rank 'r'
	int time = 0;  // to store the time consumed by the given cook of rank 'r'
	int n = 1;     // to store the current prata no. 

	while(true) {
		// ask the 'r' ranked cook to cook the nth prata
		time += n*r;
		if(time > timeLimit) {
			break;
		}
		n++;
		count++;
	}

	return count;
}

int numOfPratasCooked(int l, int* ranks, int timeLimit) {
	int totalPratas = 0;
	for(int i=0; i<l; i++) {
		// compute no. of pratas that can be cooked by the ith cook in the given timeLimit
		totalPratas += numOfPratasCookedByACook(ranks[i], timeLimit);
	}
	return totalPratas;
}

int getMinTime(int p, int l, int* ranks) {
	int s = 0; // loose lower-bound
	int e = INT_MAX; // loose upper-bound or assign the resp. to the highest rank cook
	int ans;
	while(s <= e) {
		int m = s+(e-s)/2;
		int x = numOfPratasCooked(l, ranks, m);
		if(x >= p) {
			// 'l' cooks can also cook 'p' pratas in 'm' units of time
			ans = m;
			// continue the search towards the left of 'm'
			// i.e. search space reduces from [s, e] to [s, m-1]
			e = m-1;
		} else {
			// 'l' cooks cannot cook 'p' pratas in 'm' units of time
			// continue the search towards the right of 'm'
			// i.e. search space reduces from [s, e] to [m+1, e]
			s = m+1;
		}
	}
	return ans;
}

int main() {

	//int t;
	//cin >> t;

	int p, l;
	int* ranks = new int[l];

	//while(t--) {
		cin >> p >> l;
		for(int i=0; i<l; i++) {
			cin >> ranks[i];
		}
		cout << getMinTime(p, l, ranks) << endl;
	//}

	return 0;
}