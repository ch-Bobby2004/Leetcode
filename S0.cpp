#include <bits/stdc++.h>
using namespace std;
// find unique element
int main() {
	int arr[5] = {1, 2, 2, 4, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans=0;
    for(int i=0;i<n;i++){
        ans = ans^arr[i];
    }
    cout<<ans;

}
