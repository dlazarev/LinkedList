#ifndef LLIST_H
#define LLIST_H

#include <iostream>
#include "dlnode.h"

class LList
{
private:
    unsigned int elements_count;
    DLNode *first;
    DLNode *last;
public:
    LList();
    void add(void*);
    unsigned int count();
};

#endif // LLIST_H
