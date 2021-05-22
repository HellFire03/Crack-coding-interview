/*Is Unique: 
Implement an algorithm to determine if a string has all unique characters. 
What if you cannot use additional data structures?*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int flag = 0 , a[256];
    sort(s.begin(),s.end());
    //Time Complexity = O(n*log(n))
    for (int i = 0 ; i < s.size() ; i++){
        if(a[int(s[i])] == NULL){
            a[int(s[i])] = 1;
        }
        else{
            flag = 1;
            break;
        }
    }
    (flag == 0) ? cout<<"character not repeated"
                : cout<<"character repeated";
	return 0;
}
