#include <iostream>
#include <math.h>

using namespace std;

int main(){
    float a=0.0,b=0.0,c=0.0, sum=0, ans=0;
    cin>>a>>b>>c;
    if(c-b == 0 && a==0){
        cout<<"NWR"<<endl;
    } else if(c-b !=0 && a==0){
        cout<<"BR"<<endl;
    } else{
        sum=(c-b)/a;
        ans = (round(sum*100))/100;
        if(ans == 2){
            cout<<"2.00"<<endl;
        } else{
            cout<<(float)ans<<endl;
        }
        
    } 
    return 0;
}
