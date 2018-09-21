//
// Created by vidit on 21/9/18.
//

#include <iostream>

using namespace std;

long long sum_to_limit(int uperLimit){
    long long sum =0;
    for(int i=3;i<=uperLimit;i++){
        if((i%3==0) && (i%5==0)) sum+=i;
    }
    return sum;
}

int main(){
    cout<<sum_to_limit(30);
    return 0;
}