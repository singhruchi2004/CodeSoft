#include<iostream>
using namespace std;
int main(){
	float num1,num2;
	char operation;
	cout<<"enter the num1"<<endl<<operation;
	cin>>num1;
	cout<<"enter the num2"<<endl<<operation;
	cin>>num2;
	cout<<"choose an operator(+,-,*,/):";
	cin>>operation;
      switch(operation){
      	case '+':
      		cout<<"result"<<num1+num2<<endl;
      		break;
      	case '-':
      		cout<<"result"<<num1-num2<<endl;
      		break;
      	case '*':
      		cout<<"result"<<num1*num2<<endl;
      		break;
      	case '/':
      		if(num2 !=0){
      			cout<<"result"<<num1/num2<<endl;
			  }else{
			  	cout<<"error,division by zero not allowed"<<endl;
			  }
			  break;
		default:
			cout<<"invalid operation perfrom";
    }
    return 0;
}
