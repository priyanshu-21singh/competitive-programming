#include<stdio.h>
int find_len(char[],int);
int main()
{
    char str[100]="let's call priyanshu singh and divya";
    int len = 0;
    len = find_len(str,0);
    printf("the length of given string is: %d\n",len);
    return 0;
}
int find_len(char str[],int index){
    
    static int l = 0;
    if(str[index] == '\0')
    return l;
    else
    l++;
    
    find_len(str,index + 1);
}