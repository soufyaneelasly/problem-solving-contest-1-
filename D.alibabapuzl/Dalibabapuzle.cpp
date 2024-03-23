#include<iostream>

using namespace std ;


int xek(long long a,long long b,long long c,long long d){
    if (a+b-c==d){
    return 1;

}else if (a+b*c==d){ 
    return 1;
 
}else if (a-b+c==d){ 
    return 1;
}else if (a-b*c==d){ 
    return 1;
 
}else if (a*b+c==d){ 
    return 1;
 
}else if (a*b-c==d){ 
    return 1;
 
}else{
return 0;}
 
}






int main(){

long long a,b,c,d;
cin>>a;
cin>>b;
cin>>c;
cin>>d;

if (xek(a,b,c,d)==1){
    cout<<"YES"<<endl;
}else{
cout<<"NO"<<endl;
}
}
