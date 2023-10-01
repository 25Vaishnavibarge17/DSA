#include<bits/stdc++.h>
using namespace std;
 
void reve(string&s,int i,int j){
         while (i < j) {
                    swap(s[i], s[j]);
                    i++;
                    j--;
                }
    }
string reverseWords(string s) {
        int n = s.length();
        int start = 0;
        for (int i = 0; i < n; i++) {
              if(s[i]==' '){
                  reve(s,start,i-1);
                  start=i+1;
              }
              else if(i==n-1){
                  reve(s,start,i);
              }
            }
        return s;
    }
int main(){
    string str;
    getline(cin,str);
    cout<<reverseWords(str);
}
