#include <bits/stdc++.h>
using namespace std;
double fact(double x){
    if(x==1){return 1;}
    if(x==0){return 0;}
    return fact(x)*fact(x-1);
}
double add(double a,double b){
    return a+b;
}
double subtract(double a,double b){
    return a-b;
}
double multiply(double a,double b){
    return a*b;
}
double divide(double a,double b){
    return a/b;
}
int main(){
    char op; double a,b; double result; char option; bool validop;
    cout<<"---------~----------ZAGHLOUL'S CALCULATOR-----------~--------\n\n";
    cout<<"Enter (y) to start (n) to exit: \n ";
    cin>>option;
    while(option!='y' && option!='n'){
        cout<<"Error!Enter a valid option either (y) or (n): \n";
        cin>>option;
    }
    while(option=='y'){
    validop = true;
    cout<<"Enter your first number: \n";
    cin>>a;
    while (!cin) {
        cout << "Error! Please enter a valid number: \n";
        cin.clear();                 // Clear the error flag
        cin.ignore(10000, '\n');     // Discard the bad input up to the next newline
        cin >> a;                    
    }
    cout<<"Enter your operator(+,-,*,/,!): \n";
    cin>>op;
    while (op != '+' && op != '-' && op != '*' && op != '/'&& op!='!') {
            cout << "Error! Please enter a valid operator (+, -, *, /,!): \n";
            cin >> op;
        }
    if(op=='!'){    //needs fixing
        return fact(a);
        //break,continue idk really 
    }
    cout<<"Enter your second number: \n";
    cin>>b;
    while (!cin) {
        cout << "Error! Please enter a valid number: \n";
        cin.clear();                 // Clear the error flag
        cin.ignore(10000, '\n');     // Discard the bad input up to the next newline
        cin >> b;                    
    }
    if(op=='+'){
        result=add(a,b);
    }
    else if(op=='-'){
        result=subtract(a,b);
    }
    else if(op=='*'){
        result=multiply(a,b);
    }
    else if(op=='/'){
        if(b==0){
            cout<<"Error! cannot divide by zero!.\n";
            validop = false;
        }
        else{result=divide(a,b);}
    }
    
    if(validop){
    cout<<"Result: "<<result<<endl<<endl;
    }
    
    cout<<"Enter (y) to go again (n) to exit: \n ";
    cin>>option;
    while(option!='y' && option!='n'){
        cout<<"Error!Enter a valid option either (y) or (n): \n";
        cin>>option;
    }
}
    if(option=='n'){
        cout<<"Goodbye!\n";
    }
    return 0;
}
