#include<iostream>
#include<vector>
using namespace std;
void gameBoard(const vector<vector<char>>& board) {

for(const auto& row: board){
	for(char cell : row){
		cout<<cell<<" ";
	}
	cout<<endl;
   }
}
bool checkWin(const vector<vector<char>>& board,char player){
	 //check 3*3 
	 for(int i=0;i<3;i++){
	 	if((board[i][0]==player && board[i][1]==player && board[i][2]== player)||
		 board[0][i]==player && board[1][i]== player && board[2][i]==player)){
		 	return true;
		 }
	 }
	 
	 if((board[0][0]==player && board[1][1]== player && board[2][2]==player)||
	 (board[0][2]== player && board[1][1]== player && board[2][0]== player)){
	 	return true;
	 }
	 return false;
}
bool checkDraw(const vector<vector<char>>& Board){
	for(const auto& row: board){
		for(char cell : row){
			if(cell== ' '){
				return false;
			}
		}
	}
	return true;
}
int main(){
	vector<vector<char>>board(3,vector<char>(3, ' '));
	char currentPlayer='X';
	cout<<"welcome to tic-tac-tow!\n";
	do{
		gameBoard(board);
		int row,col;
		cout<<"player"<<currentPlayer<<"enter your move(row and column)";
		cin>>row>>col;
		if(board[row][col]== ' '){
			board[row][col]=currentPlayer;
			if(checkWin(board,currentPlayer)){
				printBoard(board);
				cout<<"player"<<currentPlayer<<"win!\n";
				break;			}
		}
		if(checkDraw(board)){
			printBoard(borad);
			cout<<"it is a draw";
			break;
		}
		currentPlayer=(currentPlayer=='X');
	}else{
		cout<<"cell already occupied,play againnn";
	}


	while(true);
	return 0;
}

