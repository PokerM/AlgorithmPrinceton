#ifndef QUICKUNION_H
#define QUICKUNION_H
class QuickUnion{
public:
    QuickUnion(int s);
    bool isConnected(int p, int q);
    void qk_union(int p, int q);
    void qk_print();
    int* root(int p);
private:
    int size;
    int* array;
};
#endif