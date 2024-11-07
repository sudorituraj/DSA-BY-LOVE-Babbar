#include<iostream>
using namespace std;
int main(){
    
   int n;
  cout<<"Enter the value of n"<<endl;
  cin>>n;// cin nahi hi enter,space,tab ko read krta hai
  cout<<"value of n ="<<n<<endl;
  if(n>0){
      cout<<"n is a positive number"<<endl;
     // agr hum sirf if condition ko use krenge aur uska condtion agre full nhi hoga to output kuchh v display nhi hoga
  }  else{
      cout<<"n is a negative number"<<endl;
  }
  // Another program
    int a;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    int b;
     cout<<"Enter the value of b "<<endl;
    cin>>b;

    if(a>=b){
        cout<<"a is greater than b"<<endl;
    }
    else
    {
        cout<<"b is greater than a"<<endl;
    }
    
}