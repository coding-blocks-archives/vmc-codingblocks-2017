// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com

#include <iostream>
using namespace std;

int factorial(int); //fn declaration/prototype

int main() {
    int n, r;
    cin >> n >> r;

    int nfact = factorial(n);
    int rfact = factorial(r);
    int nrfact = factorial(n-r);
    int ans = nfact / (rfact * nrfact);

    cout << ans;     
}

int factorial(int n){   //fn definition
    int ans = 1;
    for(int x = 1; x <= n; ++x){
        ans = ans * x;
    }
    return ans;
}