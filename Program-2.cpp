#include<iostream>
using namespace std;

int main(){

  cout<<"Enter the Value of length of series: ";
  int x;
  cin>>x;
  int cnt = 0;
  for(int i = 1; i<= 2*x; ++i){
      if(i%2){
        cout<<i<<" ";
        cnt++;
      }
    if(cnt == x)
        break;
  }
  return 0;
}
