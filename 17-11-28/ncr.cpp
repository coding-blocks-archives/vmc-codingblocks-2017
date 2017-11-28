// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com

#include <iostream>
using namespace std;
int main() {
    int n, r;
    cin >> n >> r;

    int x = 1;
    int nfact = 1;
    for(x = 1; x <= n; x++){
        nfact = nfact * x;
    }

    int rfact = 1;
    for(x = 1; x <= r; ++x){
        // rfact = rfact * x;
        rfact *= x;
    }

    int nrfact = 1;
    for(x = 1; x <= n - r; ++x){
        nrfact = nrfact * x;
    }

    //computing ncr
    int ncr = nfact / (rfact * nrfact);

    cout << ncr << endl;

}