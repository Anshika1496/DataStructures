//problem link: https://www.codechef.com/AUG20B/problems/LINCHESS

#include <iostream>
#define N 1000
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t) {
	    long long int n, p[N], val, res1 = -1;
	    cin>>n>>val;
	    for(int i=0;i<n;i++) {
          cin>>p[i];
        }
        //default is ascending order
        sort(p, p+n, greater<int>());
	    for(int i=0;i<n;i++) {
	        if((val%p[i]) == 0) {
                res1 = p[i];
                break;
            }
	    }
	    cout<<res1<<endl;
        
	    t--;
	}
	return 0;
}
