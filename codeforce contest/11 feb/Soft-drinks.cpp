#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    // total amount of drink in milliters
    int total_drink = k*l;
    // total number of lime slices
    int total_lime_slices = c*d;
    // total amount of salt in grams
    int total_salt = p;

    // max no. of toasts 
    int max_toasts_by_drink = total_drink / nl;
    int max_toasts_by_lime = total_lime_slices;
    int max_toasts_by_salt = total_salt / np;
    // min of three
    int max_toasts = min({max_toasts_by_drink, max_toasts_by_lime, max_toasts_by_salt});

    int result = max_toasts / n;
    cout << result << endl;
    return 0;
}