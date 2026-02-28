#include <bits/stdc++.h>

using namespace std;

//variables:
double X1, X2;
double W1, W2, B;
//functions:
//Y function:

double Forward_pass( double X1, double X2){
    return X1*W1+X2*W2+B;
}

int main(){

    //User input code:
    cout<<"perceptron"<<endl;
    cout<<"Type your IQ here: "<<endl;
    cout<<"Type your CGPA here: "<<endl;

    //Forward pass calculation:
    double c= Forward_pass(X1,X2);
    cout<<c<<endl;

    return 0;
}