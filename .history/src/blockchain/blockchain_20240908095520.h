#ifndef BLOCKCHAIN_H
#define BLOCKCHAIN_H

#include <vector>
#include <string>
#include "block.h"

class Blockchain {
public:
    Blockchain();
    void addBlock(const Block& newBlock);
    void printChain() const;

private:
    std::vector<Block> chain;
};

#endif // BLOCKCHAIN_H
