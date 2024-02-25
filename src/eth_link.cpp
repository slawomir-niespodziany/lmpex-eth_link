#include "eth_link.h"
#include <iostream>
#include "lmp/lmp.h"

namespace {
lmp::ModuleRegisterer<AbstractLink, EthernetLink> linkRegisterer;
};

std::string EthernetLink::getId() { return "eth"s; }

bool EthernetLink::sendMessage(const std::string &message) {
    bool success = (std::rand() % 100) < 100;

    std::cout << "Sending via ETH: \"" << message << "\" .."s << ((success) ? ("ok"s) : ("failed"s)) << std::endl;

    return success;
}
