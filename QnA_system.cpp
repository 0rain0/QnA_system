#include <iostream>
#include <string> 
#include <windows.h>
using namespace std;

int choose(int);
int num(int);
int song(int);
char Ans[14]={'B','B','D','C','C','A','C','C','C','B','C','A','D','D'};
double num_Ans[7]={0.05,113,17,3,2,0,9};
//string song_Ans[4]={"will you remember me","���y�s","�ש󵲧����_�I","���n����"};
int point = 0,Q = 0,f = 0,yes[25];
char ans;
double num_ans;
//string song_ans;

int main(void){
	while(Q!=929){ 
		system("cls");
		if(f==3){
			f = 0;
			cout<<"�q���׬O�S���Ϊ���!"<<endl<<"�Ȱ��@����(�m������)������)�m"<<endl;
			Sleep(60000);
			system("cls");
		}		
		cout << "�ثe�o��" << point << "/25\n";
		cout << "�п�J�D��1~25:" << endl;

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
		cout << "�w�^��"<<endl;
		system("pause");
		return 0;
	}
	cout << "�п�J���׿ﶵ:\n��J�d��:A\n";
	cin >> ans;
	if(ans == Ans[Q-1]){
		yes[Q-1]=1; 
		point++;
	}else{
		f++;
		system("cls");
		cout << "�^�����~\n";
		system("pause");
	}
	return 0;
}

int num(int Q){
	if(yes[Q-1]==1){
		system("cls");
		cout << "�w�^��"<<endl;
		system("pause");
		return 0;
	}
	cout << "�п�J����(�Ʀr):\n��J�d��:929 or 9.29\n";
	cin >> num_ans;
	if(num_ans == num_Ans[Q-15]){
		yes[Q-1]=1; 
		point++;
	}else{
		f++;
		system("cls");
		cout << "�^�����~\n";
		system("pause");
	}
	return 0;
}
/* 
int song(int Q){
	if(yes[Q-1]==1){
		system("cls");
		cout << "�w�^��"<<endl;
		system("pause");
		return 0;
	}
	cout << "�п�J�q�W:\n��J�d��:���F���n�R\n";
	cin >> ans;
	if(song_ans == song_Ans[Q-22]){
		yes[Q-22]=1; 
		point++;
	}else{
		f++;
		system("cls");
		cout << "�^�����~\n";
		system("pause");
	}
	return 0;
}
*/ 
