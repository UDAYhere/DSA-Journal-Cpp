//i am going to solve the peobelm whcih is available on leetcode as question no.567 in which two strings are given s1 and s2 and i have to find or check that the permutation for s1 is present in s2 or not.

// for example: s1="ab" and s2="eidbaooo" which is true because s2 contains "ba". so i have to return true otherwise false.

// so i am going to divide the approach that i am going to follow :
//1--> in first store the frequency of each character that is in the string s1
//it will be like int freq[26]={0} beause we have a constraint that the string is going to be in a lowercase letter.

//2--> then we will come to the second part in which we will create a window of same lenght as s1 and store it in a new array and then check that the array freq and new arr are same or not then return value accordingly.
#include<iostream>
#include<string>
using namespace std;

bool isPermutationSame(int a[], int b[]){
    for (int i = 0; i < 26; i++)
    {
        if(a[i]!=b[i]){
            return false; // if any character frequency is not same then we will return false
        }
    }
    return true;
    
}

bool checkPermutation(string s1, string s2){
    int freq[26]={0};
    for(int i=0;i<s1.length();i++){
        freq[s1[i]-'a']++;// we are storing the frequency of each character in s1 through this line by ascii value.
    }
    
    

    for (int i = 0; i < s2.length(); i++)
    {
        int freq2[26]={0}; // this is the frequency array for the second string s2
        int window=0, idx=i;
        while(window<s1.length()&& idx<s2.length()){
            freq2[s2[idx]-'a']++;
            idx++;
            window++;
        }

        if(isPermutationSame(freq, freq2)){
            return true;
        }
    }
    return false;
    

}

int main(){
    string s1, s2, s3;
    s1="ab";
    s2="eidbaooo";
    s3="eigdhgngfxv";
    bool result = checkPermutation(s1, s3);
    if(result) cout<<"true"<<endl;
    else cout<<"false"<<endl; 
    return 0;
}