#ifndef QUICKFIND_H
#define QUICKFIND_H
class QuickFind{
public:
    QuickFind(int size);
    bool isConnected(int p,int q);
    void qf_union(int p, int q);
    void printqf();
private:
    int* array;
    int size;
};
#endif