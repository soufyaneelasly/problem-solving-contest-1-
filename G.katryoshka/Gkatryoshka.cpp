    #include<iostream>
    #include<cmath>
    using namespace std;
     
    long long  fn(long long eyes,long long mouth,long long  body){
    long long res=0;
    if(eyes==0 && body==0){
    cout<<0;
    }else {
    if(!(mouth<body && mouth<eyes)){
        res=min(eyes,body);

    }else{
    res=mouth;
    eyes-=mouth;
    body-=mouth;
    res+=min(eyes/2,body);

    }
    


    }
return res;
    }

    
    int main(){
     
     
    long long  eyes,mouth,body;
     
    cin>>eyes>>mouth>>body;
     
    cout<<fn(eyes,mouth,body)<<endl;
}
