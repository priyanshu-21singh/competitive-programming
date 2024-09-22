#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    vector<int> num(n);
    vector<int> even_ind, odd_ind;
   
   for(int i=0;i<n;i++){
    cin>>num[i];

    if(num[i]%2==0){
        even_ind.push_back(i+1);
    }else{
        odd_ind.push_back(i+1);
    }
   }
   if(even_ind.size()==1){
    cout<<even_ind[0]<<endl;
   }else{
    cout<<odd_ind[0]<<endl;
   }
   return 0;
}
