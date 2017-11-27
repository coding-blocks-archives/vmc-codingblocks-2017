// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com

#include <iostream>
using namespace std;
int main() {
    int n, r;
    cin >> n >> r;

    //computing n!
    int nfact = 1;
    for(int x = 1; x <= n; ++x){
        nfact = nfact * x;
    }   

    //computing r!
    int rfact = 1;
    for(int x = 1; x <= r; ++x){
        rfact = rfact * x;
    }  

    //computing n-r!
    int nrfact = 1;
    for(int x = 1; x <= n-r; ++x){
        nrfact = nrfact * x;
    } 

    //computing ncr
    int ans = nfact / (rfact * nrfact);

    cout << ans;   


}