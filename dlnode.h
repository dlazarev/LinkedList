#ifndef DLNODE_H
#define DLNODE_H

class DLNode
{
private:
    void *data;
    DLNode *next;
    DLNode *previos;
public:
    DLNode();
};

#endif // DLNODE_H
