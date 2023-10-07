#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   string s;
   cout<<"Enter string: ";
   getline(cin,s);
   int count;
   cout<<"Dupliacte Characters from String are:"<<endl;
   for(int i=0;i<s.length();i++){
       count=1;
       for(int j=i+1;j<s.length();j++){
           if(s[i]==s[j] && s[i]!=' '){
               count++;
               s[j]='0';
           }
       }
       if(count>1 && s[i]!='0'){
           cout<<s[i]<<endl;
       }
   }
   return 0;
}
