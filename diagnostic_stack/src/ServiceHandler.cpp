#include "diag/ServiceHandler.hpp"

ServiceHandler::ServiceHandler() {}

void ServiceHandler::addDID(uint16_t did, const std::vector<uint8_t>& data) {
    didMap_[did] = data;
}

std::vector<uint8_t> ServiceHandler::handleReadByDID(uint16_t did) const {
    auto it = didMap_.find(did);
    if (it != didMap_.end()) {
        return it->second;
    }
    return {0x00, 0x00}; // Default value for unknown DID
}
