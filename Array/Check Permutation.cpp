/*Check Permutation: 
Given two strings, 
write a method to decide if one is a permutation of the other.*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1,s2;
    cin>>s1>>s2;
    int flag = 0 , a[256] ={0};
    // s1 = 'abcd';
    //s2 = 'bcad';
    /* method 1 : 
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    */
  
    // method 2
    if (s1.size() != s2.size()){
        cout<<"different";
    }
    else{
        for(int i = 0 ; i < s1.size() ; i++){
            a[int(s1[i])]++;
            a[int(s2[i])]--;
        }    
        for(int i = 0 ; i < 256 ; i++ ){
            if (a[i]!= 0){
                flag = 1;
                break;
            }
        }
        (flag == 0) ? cout<<"same":cout<<"different";
    }
    return 0;
}  
