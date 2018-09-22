//
// Created by vidit on 21/9/18.
//

// greedy Algorithmn
#include <iostream>
#include <vector>

using namespace std;

int MinRefills(vector<int> x, int n, int L) {
    //n=x.size()-2;
    int minrefill = 0, currentRefill = 0;
    while (currentRefill <= n) {
        int lastRefill = currentRefill;
        while (currentRefill <= n && (x[currentRefill + 1] - x[lastRefill]) <= L) {
            currentRefill ++;
            //cout<<"In this";
        }
        if (currentRefill == minrefill) return -1;
        if (currentRefill <= n) {
            minrefill++;
        }
        //cout<<"here";
    }
    return minrefill;
}

int main() {

    vector<int> myVector;
    myVector.push_back(0);
    myVector.push_back(100);
    myVector.push_back(200);
    myVector.push_back(300);
    myVector.push_back(400);
    myVector.push_back(500);
    myVector.push_back(600);
    int x = myVector.size() - 2;
    cout << MinRefills(myVector, x, 250);
}
