#include <iostream>
using namespace std;

bool isfreqSame(int freq1[], int freq2[]){
  for(int i = 0; i<26; i++){
    if(freq1[i] != freq2[i]){
      return false;
    }
  }
  return true;
}

int main() {
  string s1 = "abc";
  string s2 = "eidbacooo";

  int freq[26] = {0};

  // cout << freq[25] << endl;
  for (int i =0; i<s1.length(); i++){
    int idx = s1[i] - 'a';
    freq[idx]++;
    // cout << *freq << endl;
  }

  int windSize = s1.length();
  for(int i =0; i < s2.length(); i++){
    int windIdx=0;
    int idx=i;
    int windfreq[26]={0};

    while(windIdx < windSize && idx<s2.length()){
      windfreq[s2[idx]-'a']++;
      windIdx++; 
      idx++;
    }

    if(isfreqSame(freq, windfreq)){
      cout << "Permutation found!" << endl;
      return true;
    }
  }
  cout << "No permutation found." << endl;
  return 0;
  
}