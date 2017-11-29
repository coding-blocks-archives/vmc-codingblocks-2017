// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com

#include <iostream>
using namespace std;
int main() {
    int n, r;
    cin >> n >> r;

    // n!
    int nfact = 1;
    int x = 1;
    for(x = 1; x <= n; ++x){
        nfact = nfact * x;
    }

    // r!
    int rfact = 1;
    for(x = 1; x <= r; ++x){
        rfact = rfact * x;
    }

    //n-r!
    int nrfact = 1;
    for(x = 1; x <= n-r; ++x){
        nrfact = nrfact * x;
    }

    //ncr   
    int ans = nfact / (rfact * nrfact);
    // int ans = nfact / rfact / nrfact;
    cout << ans;
}