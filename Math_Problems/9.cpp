//
// Created by vidit on 21/9/18.
//

#include <iostream>

using namespace std;

long long sum_to_limit(unsigned int uperLimit){
    unsigned long long int  sum =0;
    for(int i=3;i<=uperLimit;i++){
        if((i%3==0) && (i%5==0)) sum+=i;
    }
    return sum;
}

int main(){
    cout<<sum_to_limit(60);
    return 0;
}