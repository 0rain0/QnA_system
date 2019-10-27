#include <iostream>
#include <string> 
#include <windows.h>
using namespace std;

int choose(int);
int num(int);
int song(int);
char Ans[14]={'B','B','D','C','C','A','C','C','C','B','C','A','D','D'};
double num_Ans[7]={0.05,113,17,3,2,0,9};
//string song_Ans[4]={"will you remember me","浪流連","終於結束的起點","說好不哭"};
int point = 0,Q = 0,f = 0,yes[25];
char ans;
double num_ans;
//string song_ans;

int main(void){
	while(Q!=929){ 
		system("cls");
		if(f==3){
			f = 0;
			cout<<"猜答案是沒有用的喔!"<<endl<<"暫停一分鐘(σ′▽‵)′▽‵)σ"<<endl;
			Sleep(60000);
			system("cls");
		}		
		cout << "目前得分" << point << "/25\n";
		cout << "請輸入題號1~25:" << endl;

		cin >> Q;
		system("cls");
		switch(Q){
			case(1):{
				choose(Q);
				break;
			}
			case(2):{
				choose(Q);
				break;
			}
			case(3):{
				choose(Q);
				break;
			}
			case(4):{
				choose(Q);
				break;
			}
			case(5):{
				choose(Q);
				break;
			}
			case(6):{
				choose(Q);
				break;
			}
			case(7):{
				choose(Q);
				break;
			}
			case(8):{
				choose(Q);
				break;
			}
			case(9):{
				choose(Q);
				break;
			}
			case(10):{
				choose(Q);
				break;
			}
			case(11):{
				choose(Q);
				break;
			}
			case(12):{
				choose(Q);
				break;
			}
			case(13):{
				choose(Q);
				break;
			}
			case(14):{
				choose(Q);
				break;
			}
			case(15):{
				num(Q);
				break;
			}
			case(16):{
				num(Q);
				break;
			}
			case(17):{
				num(Q);
				break;
			}
			case(18):{
				num(Q);
				break;
			}
			case(19):{
				num(Q);
				break;
			}
			case(20):{
				num(Q);
				break;
			}
			case(21):{
				num(Q);
				break;
			}
			default:
				cout << "error" << endl;
				break;
		}	
	}
	
	return 0;
}

int choose(int Q){
	if(yes[Q-1]==1){
		system("cls");
		cout << "已回答"<<endl;
		system("pause");
		return 0;
	}
	cout << "請輸入答案選項:\n輸入範例:A\n";
	cin >> ans;
	if(ans == Ans[Q-1]){
		yes[Q-1]=1; 
		point++;
	}else{
		f++;
		system("cls");
		cout << "回答錯誤\n";
		system("pause");
	}
	return 0;
}

int num(int Q){
	if(yes[Q-1]==1){
		system("cls");
		cout << "已回答"<<endl;
		system("pause");
		return 0;
	}
	cout << "請輸入答案(數字):\n輸入範例:929 or 9.29\n";
	cin >> num_ans;
	if(num_ans == num_Ans[Q-15]){
		yes[Q-1]=1; 
		point++;
	}else{
		f++;
		system("cls");
		cout << "回答錯誤\n";
		system("pause");
	}
	return 0;
}
/* 
int song(int Q){
	if(yes[Q-1]==1){
		system("cls");
		cout << "已回答"<<endl;
		system("pause");
		return 0;
	}
	cout << "請輸入歌名:\n輸入範例:死了都要愛\n";
	cin >> ans;
	if(song_ans == song_Ans[Q-22]){
		yes[Q-22]=1; 
		point++;
	}else{
		f++;
		system("cls");
		cout << "回答錯誤\n";
		system("pause");
	}
	return 0;
}
*/ 
