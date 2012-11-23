#include <iostream>
#include "llist.h"

using namespace std;

int main()
{
    LList a;
    char str0[] = "first elem";
    char str1[] = "second elem";
    char str2[] = "третий элемент";

    a.add(str0);
    a.add(str1);
    a.add(str2);

    a.print();

    return 0;
}

