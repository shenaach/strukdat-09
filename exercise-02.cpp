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

void CreateStack(Stack& Top){
    Top = NULL;
}

void CreateElement(pointer& pBaru){
    pBaru = new ElemtList;
    cout << "Masukkan stack: "; cin >> pBaru->info;
    pBaru->next = NULL;
}

void push(Stack& Top, pointer pBaru){
    cout << "Push Stack" << endl;
    if (Top==NULL){
        Top = pBaru;
    }
    else {
        pBaru->next = Top;
        Top = pBaru;
    }
}

void Pop(Stack& Top, pointer& pHapus){
    cout << "Pop Stack" << endl;
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

void traversal(Stack Top){
    cout << "LIST : ";
    pointer pBantu;
    if(Top==NULL){
        cout << "List Kosong";
    }
    else{
        pBantu=Top;
        do{
            cout << pBantu->info << " ";
            pBantu = pBantu->next;
        } while(pBantu != NULL);
    }
    cout << endl;
}

int main()
{
    pointer p;
    Stack s;
    int n;

    CreateStack(s);

    cout << "Masukkan jumlah stack: "; cin >> n;
    for(int i=0;i<n;i++){
        CreateElement(p);
        push(s,p);
    }

    cout << endl;
    traversal(s);
}
