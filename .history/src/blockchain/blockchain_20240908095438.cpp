#include "blockchain.h"
#include <iostream>

Blockchain::Blockchain() {
    Block genesisBlock("0", "Genesis Block");
    chain.push_back(genesisBlock);
}

void Blockchain::addBlock(const Block& newBlock) {
    chain.push_back(newBlock);
}

void Blockchain::printChain() const {
    for (const auto& block : chain) {
        std::cout << "Block: " << block.getData() << std::endl;
    }
}
