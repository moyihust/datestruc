#include<iostream>
using namespace std;
int * initlist(int n,int *p)
{
    p=(int *)malloc(n*sizeof(int));
}
void desList(int * p)
{
    if(p==NULL)return;
    else free(p);
}
int Listlength(int *p)
{
    return sizeof(p)/sizeof(int);
    
}
void ClearList(int *p)
{
    if(p==NULL)return;
    else {
        int t=sizeof(p);
        free(p);
        p=(int *)malloc(t);
    }
}
int GetElem(int *p,int w)
{
    return p[w];
}
void InsertList(int *p,int i,int e)
{
    
}
int main()
{

}