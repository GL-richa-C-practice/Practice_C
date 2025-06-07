#pragma once
#include <vector>
#include <map>
#include <stdint.h>

class ServiceHandler {
public:
    ServiceHandler();
    void addDID(uint16_t did, const std::vector<uint8_t>& data);
    std::vector<uint8_t> handleReadByDID(uint16_t did) const;

private:
    std::map<uint16_t, std::vector<uint8_t>> didMap_;
};
