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
void output(Stack Top);

int main()
{
    pointer p;
    Stack a, b;
    int n;

    CreateStack(a);

    cout << "Masukkan jumlah stack: "; cin >> n;
    for(int i=0;i<n;i++){
        CreateElement(p);
        push(a,p);
    }

    cout << endl;
    cout << "Push : ";
    output(a);

    CreateStack(b);
    for (int i=n;i>0;i--){
        Pop(a,p);
        push(b,p);
    }
    cout << endl;
    cout << "Reverse Stack: ";
    output(b);
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

void output(Stack Top){
    pointer temp;
    if(Top==NULL){
        cout << "Stack Kosong";
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
