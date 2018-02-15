#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <windows.h>
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
using namespace std;
int main(){
	system("color F0");
	cout<<"\n\n\n                                            ";Sleep(70);cout<<"P";Sleep(70);cout<<"r";Sleep(70);cout<<"o";Sleep(70);cout<<"j";Sleep(70);cout<<"e";Sleep(70);cout<<"c";Sleep(70);cout<<"t";Sleep(70);cout<<" ";Sleep(70);cout<<"i";Sleep(70);cout<<"s";Sleep(70);cout<<" ";Sleep(70);cout<<"l";Sleep(70);cout<<"o";Sleep(70);cout<<"a";Sleep(70);cout<<"d";Sleep(70);cout<<"i";Sleep(70);cout<<"n";Sleep(70);cout<<"g";Sleep(70);cout<<" ";Sleep(70);cout<<".";Sleep(70);cout<<".";Sleep(70);cout<<".";Sleep(70);cout<<"\b\b\b ";Sleep(70);cout<<" ";Sleep(70);cout<<" ";Sleep(70);cout<<"\b\b\b.";Sleep(70);cout<<".";Sleep(70);cout<<".";Sleep(70);cout<<"\b\b\b ";Sleep(70);cout<<" ";Sleep(70);cout<<" ";Sleep(70);cout<<"\b\b\b.";Sleep(70);cout<<".";Sleep(70);cout<<".";Sleep(70);cout<<"\b\b\b ";Sleep(70);cout<<" ";Sleep(70);cout<<" ";Sleep(70);cout<<"\b\b\b.";Sleep(70);cout<<".";Sleep(70);cout<<".";
	int c=0;
	system("cls");
	char display[5][5];
	char temp[5]={' '};
	char userinput[26]={' '};
	cout<<"Please input a sentence of 25 characters\n";
	cin.getline(userinput,26);
	system("CLS");
	int counter=0;
	for(int outer=0;outer<5;outer++){
		for(int inner=0;inner<5;inner++){
			display[outer][inner]=userinput[counter];
			counter++;
		}
	}
	top:
	cout<<"\n\n\n                                            ---------------------\n";
	cout<<"                                            | "<<display[0][0]<<" | "<<display[0][1]<<" | "<<display[0][2]<<" | "<<display[0][3]<<" | "<<display[0][4]<<" |\n";
	cout<<"                                            ---------------------\n";
	cout<<"                                            | "<<display[1][0]<<" | "<<display[1][1]<<" | "<<display[1][2]<<" | "<<display[1][3]<<" | "<<display[1][4]<<" |\n";
	cout<<"                                            ---------------------\n";
	cout<<"                                            | "<<display[2][0]<<" | "<<display[2][1]<<" | "<<display[2][2]<<" | "<<display[2][3]<<" | "<<display[2][4]<<" |\n";
	cout<<"                                            ---------------------\n";
	cout<<"                                            | "<<display[3][0]<<" | "<<display[3][1]<<" | "<<display[3][2]<<" | "<<display[3][3]<<" | "<<display[3][4]<<" |\n";
	cout<<"                                            ---------------------\n";
	cout<<"                                            | "<<display[4][0]<<" | "<<display[4][1]<<" | "<<display[4][2]<<" | "<<display[4][3]<<" | "<<display[4][4]<<" |\n";
	cout<<"                                            ---------------------\n";
	while(1){
		switch((c=getch())){
			case KEY_UP:
				for(int i=0;i<5;i++){
					temp[i]=display[0][i];
				}
				for(int outer=0;outer<4;outer++){
					for(int inner=0;inner<5;inner++){
						display[outer][inner]=display[outer+1][inner];
					}
				}
				for(int i=0;i<5;i++){
					display[4][i]=temp[i];
				}
				system("CLS");
				goto top;
				break;
			case KEY_DOWN:
				for(int i=0;i<5;i++){
					temp[i]=display[4][i];
				}
				for(int outer=4;outer>0;outer--){
					for(int inner=0;inner<5;inner++){
						display[outer][inner]=display[outer-1][inner];
					}
				}
				for(int i=0;i<5;i++){
					display[0][i]=temp[i];
				}
				system("CLS");
				goto top;
				break;
			case KEY_LEFT:
				for(int i=0;i<5;i++){
					temp[i]=display[i][0];
				}
				for(int outer=0;outer<5;outer++){
					for(int inner=0;inner<4;inner++){
						display[outer][inner]=display[outer][inner+1];
					}
				}
				for(int i=0;i<5;i++){
					display[i][4]=temp[i];
				}
				system("CLS");
				goto top;
				break;
			case KEY_RIGHT:
				for(int i=0;i<5;i++){
					temp[i]=display[i][4];
				}
				for(int outer=0;outer<5;outer++){
					for(int inner=4;inner>0;inner--){
						display[outer][inner]=display[outer][inner-1];
					}
				}
				for(int i=0;i<5;i++){
					display[i][0]=temp[i];
				}
				system("CLS");
				goto top;
				break;
			default:
				break;
		}
	}
	getch();
	return 0;
}
