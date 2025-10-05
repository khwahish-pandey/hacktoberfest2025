#include<iostream>
#include <cmath>
using namespace std;
int main(){
  int n;
  cout<<"enter trhr value of n :";
  cin>>n;
  int a[n];
  cout<<"the no are  :"<<endl;
  for (int i = 0; i < n; i++){
    cin>>a[i];
  
  }
  cout<<"[";
  for (int i = 0; i < n; i++)
  {
    cout<<a[i]<<" ,";
   
  }
  cout<<"]"<<endl;
  
  int m;
  cout<<"the target no is : ";
  cin>> m;

 for(int z=0;z<n;z++){
   for(int i=1;i<n;i++){
    if(   a[z]+a[i]==m && a[z]<a[i]){
        cout<<"the points are :  ["<<z<<","<<i<<"]"<<endl;
       
    }
    
 }
}
 
  

return 0;
}
