
#include <bits/stdc++.h>
using namespace std;


int getPairsCount(int arr[], int n, int k)
{
	unordered_map<int, int> m;
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (m.find(k - arr[i]) != m.end()) {
			count += m[k - arr[i]];
		}
		m[arr[i]]++;
	}
	return count;
}


int main()
{
	int arr[] = { 23, 6, 89, -8, 49, 0 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int sum = 6;

	// Function Call
	cout << "Pairs = " << getPairsCount(arr, n, sum);
	return 0;
}
