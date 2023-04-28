#include<iostream>
#include<climits>
using namespace std;

int main() {

	int A[10];
	int n;

	cout << "Enter the value of n : ";
	cin >> n;

	for(int i=0; i<n; i++) 
    {
		cin >> A[i];
	}
	int X = A[0];
	int mss = X;

	for(int i=1; i<n; i++) 
    {
		X = max(X+A[i], A[i]);
		if(X > mss) 
        {
			mss = X;
		}
	}

	cout << mss << endl;
	return 0;
}