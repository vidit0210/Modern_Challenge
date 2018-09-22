//
// Created by vidit on 21/9/18.
//

// gcd
#include <iostream>
#include <numeric>
#include <math.h>
using namespace std;
 int gcd_nre(unsigned int a ,unsigned int b){
     while(b!=0){
         int r = a%b;
         a=b;
         b=r;
     }
     return a;
 }

 int gcd_r(unsigned a , unsigned b){
     return b==0?a:gcd_r(b,a%b);
 }
int main(){
//     cout<<gcd_nre(20,4)<<endl;
//     cout<<gcd_r(48,14);
    //cout<<gcd_nre(357,234);
    cout<<pow(2,0.3)<<endl;
    cout<<pow(2,0.5)<<endl;

 }
