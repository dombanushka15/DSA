//We want to check if count of all characters is Equal in both Strings, then these strings will be 
// called Anagrams
// Given two strings s and t, return true if t is an anagram of s, and false otherwise.

#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
     
    // if we put s.length is not equal to t.length,then return false.
    // because if the lengths are different the words or the phrases are not anagrams.
    // i.e "rat"!="car" -> not an anagram.

     vector<int> freq(26,0);
     // initilize the values as 0.

     for(char c: s){
        freq[c-'a']++;
     }

     for(char c: t){
        freq[c-'a']--;
     }

     for(int count : freq){
        if(count!=0)
        return false ;
     }

     return true ;
}
 int main(){

    string s = "rat",t = "cat";

    cout << isAnagram(s,t);

 }