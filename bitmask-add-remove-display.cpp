#include<bits/stdc++.h>
using namespace std;


void add(int &subset,int x){
  subset  = (subset^(1<<(x-1)));
}

void remove(int &subset,int x ){

  subset  =(subset ^ (1<<(x-1)));


}

void display(int subset){

  for(int bit_no=0;bit_no<=9;bit_no++){
    if(subset &(1<<bit_no)){
      cout<<bit_no+1<<endl;
    }
  }
}


int main() {

  

  //ye maat likhnaa  endif tk
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif  
      

    int set = 15;

    remove(set,2);

    add(set,6);

    display(set);



return 0;
}