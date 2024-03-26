#include<iostream>

using namespace std ;

int main(){

double a,k,n;
cin>>a>>k>>n;
double p=(a*k)/n;
long long longp=p;

 if (p-longp !=0.0){
    cout<<"double"<<endl;
 
 }else{
    if(longp==int(p)){
    cout<<"int"<<endl;
    }else{
    cout<<"long long"<<endl;
    }

 }




}

