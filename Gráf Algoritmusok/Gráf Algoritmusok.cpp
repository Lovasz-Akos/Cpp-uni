#include <iostream>
#include "Node.h"

using namespace std;

int main()
{
    Node* n = new Node();
    cout << n->IsStartNode();
    return 0;
}
