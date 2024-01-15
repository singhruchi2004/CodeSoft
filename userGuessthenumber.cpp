#include<iostream>//guessnumber by user
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	srand (time(0));
	int secretNumber = rand()%100+1;
	int userGuess;
	int attempts=0;
	cout<<"welcome to the number guessing game!\n";
	do{
		cout<<"enter your guess:";
		cin>>userGuess;
		attempts++;
		if(userGuess>secretNumber){
			cout<<"too high";
		} else if(userGuess<secretNumber){
			cout<<"too low";
		} else{
			cout<<"congratulation! yu guessed the correct number in"<<attempts<<"attempts";
			
		}
		
	} while (userGuess != secretNumber);
	return 0;
}
