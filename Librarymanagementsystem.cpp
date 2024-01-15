#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
using namespace std;
//****************LIBRARY MANAGEMENT SYSTEM***********//
struct classstudent{
	int bookID;
	char title[30];
	char authorofbook[30];
	int costofbook;
};
const int books=5;
int arr;
classstudent classstudentobj[books];
void Add_Book(){
	if(arr<books){
		cout<<"--*** enter the details of books------***"<<endl;
		cout<<"enter a book id"<<endl;
		cin>>classstudentobj[arr].bookID;
		cout<<"enter  boook title"<<endl;
		cin>>classstudentobj[arr].title;
		cout<<"enter name of author"<<endl;
		cin>>classstudentobj[arr].authorofbook;
		cout<<"enter the cost of book"<<endl;
		cin>>classstudentobj[arr].costofbook;
		arr++;
	}
	else{
		cout<<"no more space is system or author"<<endl;
	}
}
void Display_Books(){
	for(int i=0;i<arr;i++){
		cout<<"***Details of all books in library***--";
		cout<<"BookID"<<classstudentobj[i].bookID<<endl;
		cout<<"Book Title is"<<classstudentobj[i].authorofbook<<endl;
		cout<<"cost of book"<<classstudentobj[i].costofbook<<endl;
	}
}
void Book_Author(){
	char search_book[30];
	cout<<"enter the name of Author"<<endl;
	cin>>search_book;
	int i=0;
	while(arr){
		if((search_book,classstudentobj[i].authorofbook)){
			cout<<endl;
			cout<<"Book ID"<<classstudentobj[i].bookID<<endl;
			cout<<"Book Title is"<<classstudentobj[i].title<<endl;
			cout<<"author Name"<<classstudentobj[i].authorofbook<<endl;
			cout<<"cost of book"<<classstudentobj[i].costofbook<<endl;
			i++;
		}
	}
}
int main(){
	int choice;
	char input;
	do{
		cout<<"Library Book record system--"<<endl;
		cout<<"press 1 to enter a book record:"<<endl;
		cout<<"press 2 to display all records of books:"<<endl;
		cout<<"press 3 to search book by author name:"<<endl;
		cout<<"press 4 to count total books is library:"<<endl;
		cout<<"press 5 to exist from the system:"<<endl;
		cout<<"enter the choice!"<<endl;
		cin>>choice;
		switch(choice){
		case 1:
			Add_Book();
			break;
		case 2:
			Display_Books();
			break;
		case 3:
			Book_Author();
			break;
		case 4:
			cout<<"Total Number of books in library are"<<arr<<endl;
			break;
		case 5:
			return 0;
		default:
			cout<<"invalid choice please try again:";
	
		cout<<"are you want to continue ,please press y or Y"<<endl;
		cin>>input;
	}
}
		while(input=='y'|| input== 'Y');
	
}

