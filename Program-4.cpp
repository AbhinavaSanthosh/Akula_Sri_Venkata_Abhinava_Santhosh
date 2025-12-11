#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

  int length;
  int x;
  vector<int> mul(10, 0);
  cout<<"Enter the lenght of the array: ";
  cin>>length;
  cout<<"Enter the values into array: ";
  vector<int> vec;
  for(int i = 0; i<length; ++i){
    cin>>x;
    for(int j = 1; j<=9; ++j){
        if(x%j == 0){
          mul[j] += 1;
        }
    }
  }
  for(int i = 1; i<=9; ++i){
    cout<<i<<":"<<mul[i]<<endl;
  }
  
  return 0;
}
