#include<iostream>
using namespace std;

int main(){
  int n = 4;
  
  for(int i=0; i<n; i++){    //outer loop  top/lest side
        for(int j=0; j<(i+1); j++){   //inner loop for stars
            cout<<"* ";
        }
        for(int j=0; j<(2*(n-i)-2); j++){   //inner loop spaces
            cout<<"  ";
        }
        for(int j=0; j<(i+1); j++){   //inner loop star
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=0; i<n; i++){   //outer loop  bottom/right side
        for(int j=0; j<(n-i); j++){     //inner loop for stars
            cout<<"* ";
        }
        for(int j=0; j<(2*i); j++){            //inner loop for spaces
            cout<<"  ";
        }
        for(int j=0; j<(n-i); j++){           //inner loop for stars
            cout<<"* "; 
        }
        cout<<endl;
    }

  return 0;
  }
