#include<iostream>
using namespace std;

 int main(){
int  n,m;                

cout<<"give dimention  "<<endl;
cin>>n>>m;

cout<<"give inputs "<<endl;
int arr[n][m];

    for(int i=0;i<n;i++){        

        for(int j=0;j<m;j++){
            
            cout<<"index of "<<i<<" "<<j<<" = ";
            cin>>arr[i][j];
            
        }
    }

 cout<<"your first matrix is  "<<endl;
for(int i=0;i<n;i++){        

        for(int j=0;j<m;j++){

           cout<<arr[i][j]<<"  ";
        }
        cout<<endl;       
    } 
 
cout<<"give inputs sec "<<endl;
int arr2[n][m];

    for(int k=0;k<n;k++){        

        for(int l=0;l<m;l++){
            
            cout<<"index of "<<k<<" "<<l<<" = ";
            cin>>arr2[k][l];
            
        }
    }

 cout<<"your sec matrix is  "<<endl;
for(int k=0;k<n;k++){        

        for(int l=0;l<m;l++){

           cout<<arr[k][l]<<"  ";
        }
        cout<<endl;       
    }  

 //cout<<"your sum matrix is  "<<endl;
int arr3[n][m];
for(int o=0;o<n;o++){        

        for(int p=0;p<m;p++){

          arr3[o][p]=arr[o][p]+arr2[o][p];  
        
        }
         cout<<endl;
    }

cout<<"your sum matrix is  "<<endl;
for(int o=0;o<n;o++){        

        for(int p=0;p<m;p++){

           cout<<arr3[o][p]<<"  ";
        }
        cout<<endl;       
    }  


    return 0;  
}   
 