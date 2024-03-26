#include<iostream>

using namespace std ;

int main(){

long long me,mo,k;
cin>>me;
cin>>mo;
cin>>k;

if((me%k==0)&&(mo%k==0)){
cout<<"Both"<<endl;
}else if(((me%k)==0) &&((mo%k)!=0)){
cout<<"Memo"<<endl;
}else if (((me%k)!=0) &&((mo%k)==0)){
cout<<"Momo"<<endl;
}else{
cout<<"No One"<<endl;

}

}
