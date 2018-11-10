#include "quickfind.h"
#include <iostream>
using namespace std;

QuickFind::QuickFind(int s){
    this->array = new int[s];
    for(int i;i<s;i++)array[i]=i;
    this->size = s;
}

bool QuickFind::isConnected(int p,int q){
    if(p<size&&q<size){
        return array[p]==array[q];
    }
    return false;
}

void QuickFind::qf_union(int p, int q){
    if(p<size&&q<size){
        if(array[p]!=array[q]){
            int temp = array[p];
            for(int i=0;i<size;i++)
                if(array[i]==temp)array[i]=array[q];
        }
    }
}

void QuickFind::printqf(){
    for(int i=0;i<size;i++)cout<<array[i]<<" ";
    cout<<endl;
}