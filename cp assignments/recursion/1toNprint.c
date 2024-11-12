#include<stdio.h>
int natural(int start,int end){
    int i;
    for(i=start;i<=end;i++){
        if(i!=0){
            printf("%d\n",i);
        }
    }
}
int main(){
    
    int start=0,end=100;
    natural(start,end);
}
