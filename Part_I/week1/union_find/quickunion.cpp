#include "quickunion.h"
#include <iostream>

using namespace std;

QuickUnion::QuickUnion(int s){
    this->size = s;
    array = new int[s];
    for(int i=0;i<s;i++)array[i]=i;
}

int* QuickUnion::root(int p){
    int* res = new int[2];
    int height = 0;
    while(array[p]!=p){
        p=array[p];
        height++;
    }
    res[0]=p;
    res[1]=height;
    return res;
}

bool QuickUnion::isConnected(int p, int q){
    int* proot = root(p);
    int* qroot = root(q);
    return proot[0]==qroot[0];
}

void QuickUnion::qk_union(int p, int q){
    int* proot = root(p);
    int* qroot = root(q);
    if(proot[0]==qroot[0])return;
    if(proot[1]>qroot[1])array[q]=p;
    else array[p]=q;
}

void QuickUnion::qk_print(){
    for(int i=0;i<size;i++)cout<<array[i]<<" ";
    cout<<endl;
}