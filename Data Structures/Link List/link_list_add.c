#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct temp{ //dugum yapisini tanimladik

    int data;
    struct temp *next;

}Node;

void print(Node *root);
void add(Node *root,int data);

int main(){

    Node *root = (Node*) malloc(sizeof(Node)); //root node'ın baslangıcını gosterecek pointer atamadi ve bellek tahsisi
    //Node *iteration;
    root->next = NULL; //rootun nexti yani ilk node null deger gostermeli
    root -> data = 50; // root'un gosterdigi node'ın datasina 50 atadik.

    for(int i = 0; i < 5; i++){

        add(root,i*10);
        // iteration->next = (Node*) malloc(sizeof(Node));
        // iteration = iteration -> next;
        // iteration -> data = i * 10;
        // iteration -> next = NULL; 
    }
    
    print(root);
    
    getch();
}

void print(Node *root){

    while(root != NULL){ //null deger gostermeyene kadar yazdir
        printf("%d  ",root->data); //rooutun gosterdigi node'daki datayi yazdir.
        root = root->next; //bir sonraki node'ı goster.
    }
}

void add(Node *root,int data){

    while(root->next != NULL){ //null deger gostermeye kadar yazdir.
        root = root->next; //bir sonraki node'I goster.
    }
    root->next = (Node*) malloc(sizeof(Node)); //bir sonraki node'a bellek tahsisi yap.
    root->next->data = data; // root'un gosterdigi node'un bir sonrakie datasini yazdir.
    root->next->next = NULL; // root'un nextinin nexti null

}