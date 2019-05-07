/*
Nama Program	: exercise-01
Nama 			: Sharashena Chairani
Kelas			: B
NPM				: 140810180022
Deskripsi		: Stack Array
*/

#include<iostream>
using namespace std;

const int maxElemen = 255;
struct Stack{
    char isi[maxElemen];
    int Top;
};
Stack S;

void createStack(Stack& S);
void push(Stack& S, char elemenBaru);
void pop(Stack& S, char& elemenHls);
void output(Stack S);

int main(){
    Stack s;
    int n;
    char data;

    createStack(s);
	
	cout<< "--------------------------------\n";
    cout << "Input banyak huruf : "; cin >> n;
    for (int i = 0; i<n; i++){
        cout << "Masukkan satu huruf: "; cin >> data;
        push(s, data);
    }
    cout<< "--------------------------------\n";
    cout << "Reverse Word: ";
    output(s);
}

void createStack(Stack& S){
    S.Top = -1;
}

void push(Stack& S, char elemenBaru){
    if (S.Top == maxElemen - 1){
        cout << "Tumpukan sudah penuh" << endl;
    }
    else {
        S.Top++;
        S.isi[S.Top] = elemenBaru;
    }
}

void pop(Stack& S, char& elemenHls){
    if (S.Top < 0){
        cout << "Tumpukan kosong" << endl;
    }
    else {
        elemenHls = S.isi[S.Top];
        S.Top--;
    }
}

void output(Stack S){
    char temp;
    while(S.Top != -1){
        pop(S,temp);
        cout << temp;
    }
}
