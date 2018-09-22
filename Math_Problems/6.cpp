//
// Created by vidit on 21/9/18.
//

//Implementing FiboNacci Series
#include <iostream>
using namespace std;

int cal_FiboNacci(int n){
    int sum=0;
    if(n<=1) return -1;
    int a=0,b=1;
    int i=0;
    while(i<n){
        sum=a+b;
        a=b;
        b=b+1;
        i++;
    }
    return sum;
}
int main(){
    cout<<cal_FiboNacci(3);
}