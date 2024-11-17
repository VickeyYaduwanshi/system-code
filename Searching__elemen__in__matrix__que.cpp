#include<iostream>
using namespace std;

int main (){ 
    int n,m;
    cout<<"give dimention  "<<endl ;
    cin>>n>>m;
    cout<<"enter elements  "<<endl;

    int arr[n][m];

    for(int i=0; i<n; i++){

        for(int j=0; j<m; j++){

            cin>>arr[i][j];

        }

    }

int x;
cout<<"enter x  ";
cin>>x;

for(int i=0;i<n;i++){
                                     
    for (int j=0;j<m;j++){ 

        if(arr[i][j]==x){
                                       
        cout<<" x is found ";   
        cout<<i<<" x "<<j << " is par mila hai ye "<<x ;
        }
    }
    
    cout<<endl;  

}                  
return 0;

}