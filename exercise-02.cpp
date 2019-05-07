/*
Nama Program	: exercise-02
Nama 			: Sharashena Chairani
Kelas			: B
NPM				: 140810180022
Deskripsi		: Stack Linked List
*/

#include <iostream>
using namespace std;

struct ElemtList{
    char info;
    ElemtList* next;
};
typedef ElemtList* pointer;
typedef pointer Stack;

void CreateStack(Stack& Top);
void CreateElement(pointer& pBaru);
void push(Stack& Top, pointer pBaru);
void Pop(Stack& Top, pointer& pHapus);
void print(Stack Top);

int main()
{
    pointer p;
    Stack s;
    int n;

    CreateStack(s);
	cout<< "--------------------------------\n";
    cout << "Masukkan jumlah stack: "; cin >> n;
    for(int i=0;i<n;i++){
        CreateElement(p);
        push(s,p);
    }
    cout << endl;
    print(s);
}

void CreateStack(Stack& Top){
    Top = NULL;
}

void CreateElement(pointer& pBaru){
    pBaru = new ElemtList;
    cout << "Masukkan stack: "; cin >> pBaru->info;
    pBaru->next = NULL;
}

void push(Stack& Top, pointer pBaru){
    if (Top==NULL){
        Top = pBaru;
    }
    else {
        pBaru->next = Top;
        Top = pBaru;
    }
}

void Pop(Stack& Top, pointer& pHapus){
    if (Top==NULL){
        cout << "Stack Kosong" << endl;
        pHapus = NULL;
    }
    else if(Top->next==NULL){
        pHapus = Top;
        Top = NULL;
    }
    else{
        pHapus = Top;
        Top = Top->next;
        pHapus->next = NULL;
    }
}

void print(Stack Top){
	cout<< "--------------------------------\n";
    cout << "Reverse Word : ";
    pointer temp;
    if(Top==NULL){
        cout << "List Kosong";
    }
    else{
        temp = Top;
        do{
            cout << temp->info << " ";
            temp = temp->next;
        } while(temp != NULL);
    }
    cout << endl;
}
