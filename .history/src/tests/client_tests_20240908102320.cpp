

#include <iostream>
#include "p2p_client.h"

int main() {
    P2PClient client;
    client.connectToPeer("192.168.1.1");

    return 0;
}
