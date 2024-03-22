// https://codeforces.com/contest/405/problem/A
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main(){
    FastIO();

    int n;
	cin >> n;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin >> arr[i];
	}
 
	sort(arr, arr+n);
 
	for(auto i:arr)
	{
		cout << i << " ";
	}cout << endl;
    
return 0;
}