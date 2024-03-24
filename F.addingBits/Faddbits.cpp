#include <iostream> 
#include<cmath>
using namespace std; 


unsigned long long bintodec(unsigned long long x){ 
unsigned long long  dec=0;
unsigned long long rs,n=0;

    while(x>0){
rs=x%10;
dec=dec+pow(2,n)*rs;
x=(x-(x%10))/10;
n++;   
    }

return dec;
}
unsigned long long sombinary(unsigned long long x,unsigned long long y){                                                                                              

unsigned long long  rstx,place=1,rsty; 
unsigned long long binary=0;
while((x+y)!=0){                                                                                                
rstx=x%2;
rsty=y%2;


if(rstx*rsty==0){

binary+=(rstx+rsty)*place;                                                                                              
}
place*=10;                                                                                                      
x/=2;  
y/=2;
rstx=0;
rsty=0;
}                                                                                                               
return binary;                                                                                                  
} 

int main() { 

    //unsigned long long  decimal1,decimal2;


    //cin >> decimal1;
    //cin>>decimal2;
  //  cout<<sombinary(decimal1,decimal2)<<endl;   
   // cout<<bintodec((sombinary(decimal1,decimal2)))<<endl;
    
    unsigned long long w=55555;
    while(w>0){
cout<<bintodec(sombinary(w,10))<<" = "<<w<<"+10" <<endl;
    cout<<sombinary(w,10)<<endl;     
    
w--;


    }
















}
