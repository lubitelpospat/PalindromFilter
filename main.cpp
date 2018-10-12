#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> PalindromFilter(vector<string> words, int minLength) {
    vector<string> result;
     for (string v:words){
         if (v == "" && minLength==0) {
            result.push_back(v);
         }
         int count = 0;
         for (int i = 0; i < v.size(); ++i) {
             if (v[i] != v[v.size() - 1 - i]) {
                 count += 1;
             }
         }
         if (count ==0 && v.size()>=minLength){
             result.push_back(v);
         }
     }
     return result;
}


