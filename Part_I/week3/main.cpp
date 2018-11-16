#include <iostream>
#include <vector>

using namespace std;
template <typename T>
int partVector(vector<T> &ve, int left, int right){
    int right_index = right;
    T key = ve[right];
    right--;
    while(left<right){
        while(ve[left]<key)left++;
        while(ve[right]>key)right--;
        if(left<right){
            T tmp = ve[left];
            ve[left] = ve[right];
            ve[right] = tmp;
        }
    }
    ve[right_index]=ve[left];
    ve[left]=key;
    return left;
}
template <typename T>
void quicksort(vector<T> &ve, int left, int right){
    if(left >= right)return;
    int index = partVector(ve, left, right);
    quicksort(ve, left, index-1);
    quicksort(ve, index+1, right);
}
template <typename T>
void merge(vector<T> &ve, int left, int mid, int right){
    if(left>=right)return;
    vector<T> tmp(mid-left+1,0);
    int s=left,e=right;
    int low = left;
    for(int i=0;i<tmp.size();i++)tmp[i]=ve[left++];
    int i=0;
    mid++;
    while(i<tmp.size()&&mid<=right){
        if(tmp[i]>ve[mid])ve[low++]=ve[mid++];
        else ve[low++]=tmp[i++];
    }
    while(i<tmp.size())ve[low++]=tmp[i++];
}
template <typename T>
void mergesort(vector<T> &ve, int left, int right){
    if(left>=right)return;
    int mid = (left+right)>>1;
    mergesort(ve,left,mid);
    mergesort(ve,mid+1,right);
    merge(ve,left,mid,right);
}
int main()
{
    /* code */
    int a[]={9,3,4,6,4,2,1};
    vector<int> ve(7,0);
    for(int i=0;i<7;i++)ve[i]=a[i];
    mergesort(ve,0,6);
    for(int i=0;i<7;i++)cout<<ve[i]<<" ";
    return 0;
}
