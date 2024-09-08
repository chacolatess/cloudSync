










#include <iostream>
#include "blockchain.h"

int main() {
    Blockchain blockchain;

    blockchain.addBlock(Block("1", "Block 1 Data"));
    blockchain.printChain();

    return 0;
}
