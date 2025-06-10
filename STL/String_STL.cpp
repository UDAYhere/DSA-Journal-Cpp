//this us the code for solution of the problem "REMOVE ALL OCCURANCE" which is the medium level of problem in terms of difficulty and this question is also available on the platform leetcode(1910) and other 
#include<iostream>
#include<string>
using namespace std;


//this function is hoing to return the string by removing all the ocuurence of it and also if there is no ocuurencr of the part in the string the string is going to be returned as it is.
//we are also goinf to use the STL function here which are s.find() and s.erase(start, length)
string removeOccurrences(string s, string part){
        while (s.find(part)<s.length())//here we are checking the validity of the part 
        {
            s.erase(s.find(part), part.length());
        }
        return s;
}
int main(){
    string s, part;

    cout << "Enter the string: ";
    getline(cin, s);// we use getline to take the string input with spaces
    cout << "Enter the part to remove: ";
    getline(cin, part);// we use getline to take the string input with spaces
    string result = removeOccurrences(s, part);
    cout<<result<<endl;
    return 0;
}