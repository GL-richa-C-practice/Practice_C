#pragma once
#include <vector>
#include <memory>
#include "ServiceHandler.hpp"

class DiagnosticService {
public:
    explicit DiagnosticService(std::shared_ptr<ServiceHandler> handler);
    std::vector<uint8_t> handleRequest(const std::vector<uint8_t>& request);

private:
    std::shared_ptr<ServiceHandler> handler_;
};
