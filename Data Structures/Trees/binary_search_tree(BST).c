/* Agactaki Temel Operasyonlar
    Insertion(ekleme)
    Traversal(dolasma) 3 tip olur. Solu sagi komple dolastiktan sonra rootun tek bir soluna degil ilk sola sonra onun solu sonra onun solu aynı sekil sag icinde gecerli.
        -Inorder (left root right) ve ya (right root left) ortada root olma durumu inorder.Dolasma sirasi
        -Preorder (root left right ve ya root right left ) olarak preorder
        -Postorder (left right root veya right left root ) rootun sonda olma durumu postorder
    Search(arama)
    Max ve min
    Deletion(silme)

                        56
                26              200
           18      28      190     213
        12   24  27
        Inorder = ilk sol 26 sonra 18 sonra 12 gittik sonra rootu yani 18 sonra rootun righti yani 24 (18 in oldugu agac bitti) bu sefer roout yaz 26 rootun sagina gec aama onun solu var onu yaz sonra sagi yaz 
                12-18-24-26-27-28-56-190-200-213 (kucukten buyugesilrama aslinda cunku sol da bir onceki dugumden kucuk olan deger yer alir.)
        Preorder = 
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* bu sekildede struct yapisi olabilir. Ayni sey ikiside ilk daha kolay
struct node 
{
    int data;
    node *right;
    node *left;
};
typedef node Node;
*/

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
}Node;

Node *insertion (Node *tree,int data);
void inorderTraversal(Node *tree);
void preorderTraversal(Node *tree);
void postorderTraversal(Node *tree);
int search(Node *tree,int searching);
int max(Node *tree);
int min(Node *tree);
Node *deletion(Node *tree,int x);

int main()
{
    Node *tree = NULL;
    tree = insertion(tree,56);
    tree = insertion(tree,200);
    tree = insertion(tree,26);
    tree = insertion(tree,190);
    tree = insertion(tree,213);
    tree = insertion(tree,18);
    tree = insertion(tree,28);
    tree = insertion(tree,12);
    tree = insertion(tree,24);
    tree = insertion(tree,27);
    
    printf("Inorder Traversal (Right-Root-Left) : ");
    inorderTraversal(tree);
    printf("\nPreorder Traversal (Root-Left-Right) : ");
    preorderTraversal(tree);
    printf("\nPostorder Traversal (Left-Right-Root) : ");
    postorderTraversal(tree);
    printf("\nArama Sonucu : %d ",search(tree,200));
    printf("\nMax : %d",max(tree));
    printf("\nMin : %d",min(tree));

    deletion(tree,190);
    printf("\nSilinmis Hali : ");
    inorderTraversal(tree);

    deletion(tree,56);
    printf("\nSilinmis Hali : ");
    inorderTraversal(tree);
    
    deletion(tree,18);
    printf("\nSilinmis Hali : ");
    inorderTraversal(tree);
    
    getch ();
}

Node * insertion (Node *tree,int x)
{
    if(tree == NULL)
    {
        Node *root = (Node*) malloc(sizeof(Node)); //eger empty tree ise root(kok dugum) olustur.
        root -> left = NULL; //sag ve sol dugumleri NULL gosterdik.
        root -> right = NULL;
        root -> data = x; //root'a veriyi atadik.
        return root; //rootu dondur
    }
    if(tree -> data < x) //gonderilen data agactakinden buyuk ise sagina yazmak icin
    {
        tree -> right = insertion(tree -> right,x);
    }
    else
    {
        tree -> left = insertion(tree -> left,x);
    }
    return tree;
}

void inorderTraversal(Node *tree) //agaci hem dolasmak hem yazdirmak icin
{
    if(tree == NULL) //null ise bos dondur
    {
        return;
    }

    // inorderinorderTraversal(tree->left); //agacin solunu dolasma kucukten buyuge olarak siralamis olur cunku agacin solu bir onceki dugumden kucuk olmalı (Left-Root-Right) inorder dolasma
    // printf("%d ",tree -> data);
    // inorderinorderTraversal(tree->right);

    inorderTraversal(tree -> right); // Right Root Left inorder dolasma bu da buyukten kcuge sirlaama yapmis olur.
    printf("%d ",tree -> data);
    inorderTraversal(tree -> left);
}

void preorderTraversal(Node *tree)
{
    if(tree == NULL)
    {
        return;
    }

    printf("%d ",tree->data);
    preorderTraversal(tree->left);
    preorderTraversal(tree->right); //root - left - right sekli bu ayni sekil root - right - left olarak ta yapilabilir.
}

void postorderTraversal(Node *tree)
{
    if(tree == NULL)
    {
        return;
    }
    postorderTraversal(tree->left); // left-right-root olarak siraladik right-left-root olarak ta yapabiliriz.
    postorderTraversal(tree->right);
    printf("%d ",tree->data);
}

int search(Node *tree,int searching)
{
    if(tree == NULL)
    {
        return -1;
    }

    if(tree -> data == searching)
    {
        return 1;
    }

    if(search(tree -> right,searching) == 1)
    {
        return 1;
    }
    if(search(tree -> left,searching) == 1)
    {
        return 1;
    }

    return -1;
}

int max(Node *tree)
{
    while(tree -> right != NULL)
    {
        tree = tree -> right;
    }
    return tree -> data;
}
int min(Node *tree)
{
    while(tree -> left != NULL)
    {
        tree = tree -> left;
    }
    return tree -> data;
}

Node *deletion(Node *tree,int x)
{
    if(tree == NULL) //bossa null dondur
    {
        return NULL;
    }
    
    if(tree -> data == x) //silinmek istenen root esit ise
    {
        if(tree -> left == NULL && tree -> right == NULL) //sag ve sol cocuk null ise
        {
            return NULL; //sildikten sonra nulll dondur.
        }
        if(tree -> right != NULL) //sag taraf null degilse
        {
            tree -> data = min(tree -> right); //sag taraftaki en kucuk degeri bul agacin datasina ata
            tree -> right = deletion(tree -> right,min(tree->right)); //sonra sag tarafin en kucuk degerini sil
            return tree;
        }
        else if(tree -> right == NULL)
        {
            tree -> data = max(tree->left);
            tree -> left = deletion(tree -> left,max(tree -> left));
            return tree;
        }
    }
    
    if(tree -> data < x)
    {
        tree -> right = deletion(tree -> right,x);
        return tree;
    }
    tree -> left = deletion(tree -> left,x);
    return tree;
}