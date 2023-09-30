#include<bits/stdc++.h>
using namespace std;

string reverseWord(string str)
    {
        int n=str.length();
        int start=0;
        int end=n-1;
        while(start<end){
            char temp=str[start];
            str[start]=str[end];
            str[end]=temp;
            start++;
            end--;
        }
        return str;
    }
    
void printstr(string str){
    for(int i=0;i<str.length();i++){
        cout<<str[i];
    }
    cout<<endl;
}

int main(){
    string str;
    cin>>str;
    string ans=reverseWord(str);
    printstr(ans);
} 
