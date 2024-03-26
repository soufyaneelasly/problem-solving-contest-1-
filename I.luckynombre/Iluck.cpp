#include<iostream>
using namespace std ;

float f(int n){
//take the first nombre
return n%10;
}

float s(int n){
    //take the seconde nombre
    return  int(n/10)%10;
}

int dv(float a,float b){
//check divisibility
    if(((a/b)-int(a/b)==0) || ((b/a)-int(b/a)==0)){
    return 1;
    }else{
    return 0;

}
}
int main(){

    int n;
    cin>>n;



if(dv(f(n),s(n))==1){

    cout<<"YES"<<endl;
            }else{
cout<<"NO"<<endl;
            }
}
