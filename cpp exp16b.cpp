//Aryaman Pathak EnTCA2 031
//divide by zero
#include <iostream>
using namespace std;
int main() {
float n1, n2, ans;

    cout << "Enter the values of numbers 1 and 2: ";
    cin >>n1>>n2;
    try{
        if(n2==0){
            throw n2;}
        else{
            ans = n1/n2;
            cout << "The answer is "<< ans;
        }
    }
catch(float num){
    cout<<"\n ERROR: Division by "<<num<<endl;
}
    return 0;
}

/*
Enter the values of numbers 1 and 2: 12 13
The answer is 0.923077
    */
