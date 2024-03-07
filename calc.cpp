#include<iostream>
using namespace std;

void bit(int n){

    while(n!=0){
        if(n&1){
            cout<<1;
            n=n>>1;
        }
        else{
            cout<<0;
        }
    }
}


int main(){
    int a,b,c,ch=1;
    char s=' ';
    while(ch!=0){
        cin>>"Enter nos:">>a>>b;
        cin>>"choose operation:">>s;
        switch(s){
            case '+':
            c=a+b;
            break;
            case '-':
            c=a-b;
            break;
            case '*':
            c=a*b;
            break;
            case '/':
            c=a/b;
            break;
            case 'bit':
            bit(a);
            c=99;
            break;
            default:
            exit;

        }
        cin>>"Continue?(Y/N):">>ch;
    
    }
    return c;


}