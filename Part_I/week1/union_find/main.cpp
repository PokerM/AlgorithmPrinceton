#include <iostream>
#include "quickfind.h"
#include "quickunion.h"
using namespace std;

int main(){
    QuickFind qf(10);
    qf.qf_union(1,5);
    qf.qf_union(2,5);
    qf.qf_union(2,3);
/*     cout << qf.isConnected(3,5) << endl;
    cout << qf.isConnected(1,2) << endl;
    cout << qf.isConnected(5,7) << endl; */
    QuickUnion qu(10);
    qu.qk_union(1,2);
    qu.qk_union(1,3);
    qu.qk_union(1,5);
    qu.qk_union(6,7);
    qu.qk_union(7,8);
    cout<< qu.isConnected(1,5) << endl;
    cout<< qu.isConnected(1,9) << endl;
    cout<< qu.isConnected(6,8) << endl;
}