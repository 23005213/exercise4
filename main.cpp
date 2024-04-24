#include <iostream>

using namespace std;

int main(){
void displayMenu();
int multiplication;
int substraction;
int division;

    char choice;
int num1;
int num2;

do {
         displayMenu();
            cin>>choice;
            cout<<"Enter first number: ";
            cin>>num1;
            cout<<"Enter second number: ";
            cin>>num2;

            switch(choice){
            case'1':
                cout<<"Addition Results: "<<num1 + num2<<endl;
                break;
            case '2':
                cout<<"Substraction Result: "<<num1-num2<<endl;
                break;

            case '3':
                cout<<"Multiplication Result: "<<num1*num2<<endl;
                    break;
            case '4':
                if(num2 !=0)
                cout<<"Division Result: "<<num1/num2<<endl;
                else
                    cout<<"The second integer is zero, divided by zero"<<endl;
                break;

            default:
                cout<<"Invalid choice"<<endl;
                }

cout<<"Do you want to continue? (y/n):";
cin>>choice;

    }while(choice=='y' || choice=='Y');

    return 0;
}
void displayMenu(){
    cout<<"Menu:"<<endl;
        cout<<"1. Addition"<<endl;
        cout<<"2. Substraction"<<endl;
        cout<<"3. Multiplication"<<endl;
        cout<<"4. Division"<<endl;
        cout<<"5. Modulus"<<endl;
        cout<<"Enter your choice(1-5): ";
}


 int addition(int a, int b) {
    return a + b;
}
int substract(int a, int b){
return a - b;
}
int multiply(int a, int b){
return a * b;
}
double divide(int a, int b){
return static_cast<float>(a) / (b);
}
