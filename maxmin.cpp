#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n; // number of stones
    int a[100001]; // array to store the position of stones
    bool canCross = false; // assume the frog cannot cross the river
    
    cin >> n; // read input
    
    for(int i=0; i<n; i++) {
        cin >> a[i]; // read the position of each stone
    }
    
    int k = 1; // first jump is always 1
    int pos = 0; // starting position is 0
    
    for(int i=0; i<n; i++) {
        if(abs(a[i]-pos) > k) { // if the next stone is too far away
            canCross = false; // the frog cannot cross the river
            break; // exit loop
        } else if(abs(a[i]-pos) == k || abs(a[i]-pos) == k+1) { // if the next stone is reachable
            pos = a[i]; // update position of the frog
            k++; // increment jump length
            i = -1; // start over from the beginning of the array
            if(pos == a[n-1]) { // if the last stone has been reached
                canCross = true; // the frog can cross the river
                break; // exit loop
            }
        }
    }
    
    if(canCross) {
        cout << "The frog can cross the river!" << endl;
    } else {
        cout << "The frog cannot cross the river." << endl;
    }
    
    return 0;
}
