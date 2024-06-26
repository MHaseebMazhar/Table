#include <iostream>
using namespace std;
int main(){
    long long  num ;
    cout<<"Enter a number to print the table: "<<endl;
    cin>>num;
  
    if (num<=0) {
        cout<<"This table not exist"<<endl;
        
    }else{
        for (int i =1; i<=10; i++) {
            cout<<num<<" x "<<i<<" = "<<num*i<<endl;
        
        }
    }
    
  
    
        
    
    
}
