#include<iostream>
using namespace std;
int calculator(int var1,int var2,char symbol){

    switch (symbol)
    {
    case '+':
        return var1+var2;
        break;
    case '-':
        return var1-var2;
        break;
    case '*':
        return var1*var2;
        break;
    
    default:
        return var1/var2;
        break;
    }
}
int main(){

    int num1,num2;
    char symbol;
    cout<<"Enter number1 opeerator and number2"<<endl;
    cin>>num1>>symbol>>num2;
    int result=calculator(num1,num2,symbol);

    cout<<result<<endl;


    return 0;

}