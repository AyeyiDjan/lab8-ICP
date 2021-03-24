#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <sstream>

using namespace std;


string to_string(int n){
	ostringstream ss;
	ss<<n;
	return ss.str();
}
int LinearIndx(int arr[], int i,int j,int dim, int seek){
	for(int i=0;i<dim;++i){
		if(arr[i]==seek) cout<<i<<endl;
	}
return -1;
}
int InverseIdx(int arr[],int I,int dim,int matrix [128][128]){
int x=arr[I];
for (int i=0;i<dim;i++){
	for (int j=0;j<dim;j++){
		if (matrix[i][j]==x){
			cout<<"i="<<i<<"  j="<<j<<endl;
		}
	}
}
return 0;
}

int main(){
	srand(time(0));
	int dim=128;
	int k=0;
	int A[128][128];
	int B[dim*(dim+1)/2];
	int C[128][128];
	int l=0;
	int m=0;
	int n=0;


	for (int i=0;i<dim;i++){
		for(int j=0;j<dim;j++){
			
			A[i][j]=1+(rand() %1000);

		
	}}
	
     
       for (int i = 0; i < dim; i++) 
    { 
        for (int j = 0; j < dim; j++) 
        { 
            if (i >= j) 
            { 
            	if (k<dim*(dim+1)/2){
            		if(m<20){cout << A[i][j] << " ";
            		m++;}
        
        B[k]=A[i][j];
    k++;}
            } 
            else
            cout<<"0 ";
        } 
        cout << endl; 
    } 
    
       for (int i = 0; i < dim; i++) 
    { 
        for (int j = 0; j < dim; j++) 
        { 
        	if (l<dim*(dim+1)/2){
               C[i][j]= B[l];
    k++;}
        }}
        for(int i=0;i<20;i++){
        	cout<<B[i]<<endl;
        }
        for (int i = 0; i < dim; i++) 
    { 
        for (int j = 0; j < dim; j++) 
        { 
        	if (n<20){
               C[i][j];
    n++;}
        }}
	return 0;
}

