#include<iostream>
using namespace std;

int main(){
int  n,m;                //declearation
cout<<"give dimention  "<<endl;
cin>>n>>m;

cout<<"give inputs "<<endl;
int arr[n][m];

    for(int i=0;i<n;i++){        //taking input

        for(int j=0;j<m;j++){

            cin>>arr[i][j];

        }
    }

    
cout << "youur matrix  is"<<endl;     //we put it any where like 
for(int i=0;i<n;i++){
                                      //here
    for (int j=0;j<m;j++){
                                       //also here
        cout<<arr[i][j]<<"  ";         //<<"  ";  for taking some distance b/w two elements
   
    }
    
    cout<<endl;                      // for taking next line after print first row 

}
return 0;
}
