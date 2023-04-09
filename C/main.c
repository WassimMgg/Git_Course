#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
typedef struct node *list;
typedef struct node
{
    char data ;
    list next ;
}node;
void statistique(list l; int *nb_M , int *nb_P)
{
    l = malloc(sizeof(node));
    list tmp ; 
    tmp = l;
    *nb_M = 0; *nb_P = 0;
    while(tmp!=NULL)
    {
        if((tmp->data==' ')||(tmp->data==','))
             *nb_M++;
        if(tmp->data == '.')
        {
            *nb_M++;
            *nb_P++;
        }
    }
}
int main()
{ 
    int n;
    do
    {
        printf("Input the number of caracter :");
        scanf("%d",&n);
    } while (n<1);
    list l , tmp , curr ;
    l = malloc(sizeof(node));
    tmp = l ; 
    char data ; 
    printf("Input le caracter 1 : ");
    scanf("%c",&data);
    tmp->data = data ;
    tmp->next = NULL;
    int i ; 
    for(i=2;i<=n;i++)
    {
        printf("Input le caracter %d : ",i);
        scanf("%c",&data);
        curr = malloc(sizeof(node));
        curr->data = data ; 
        curr->next = NULL;
        tmp->next = curr ; 
        tmp = curr; 
    }
    int nb_M  = 0;int nb_P = 0;
    statistique(l,&nb_M,&nb_P);
    printf("Number of words is : %d\n",nb_M);
    printf("Number of phrase is : %d\n",nb_P);


}