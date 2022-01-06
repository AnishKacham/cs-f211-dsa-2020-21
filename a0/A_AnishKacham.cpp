#include <bits/stdc++.h>
using namespace std;
int main(){
    string A;
    string B;
    string sum;
    
    cin >> A >> B;
    int lenA = A.length();
    int lenB = B.length();
    reverse(A.begin(),A.end());
    reverse(B.begin(),B.end());
    int digSum{};
    int carry{};
    for(int i{},j{}; i<lenA || j<lenB ; i++,j++){
        if(i<lenA && j<lenB) digSum = (A[i]-'0') + (B[j]-'0') + carry;
        else if(i>=lenA) digSum = (B[j]-'0') + carry;
        else digSum = (A[i]-'0') + carry;
        sum = sum + to_string(digSum%10);
        carry = digSum/10;
    }    
    reverse(sum.begin(),sum.end());
    cout << sum;
}
/*
TESTCASES

Input
736478265827647826487264782648723647832647832648732648723 
3427364786487236478236487326487264872468327

Output
736478265827651253852051269885201884319974319913605117050
*/