#include "diag/DiagnosticService.hpp"

DiagnosticService::DiagnosticService(std::shared_ptr<ServiceHandler> handler)
    : handler_(handler) {}

std::vector<uint8_t> DiagnosticService::handleRequest(const std::vector<uint8_t>& request) {
    if (request.size() >= 3 && request[0] == 0x22) {
        uint16_t did = (request[1] << 8) | request[2];
        std::vector<uint8_t> data = handler_->handleReadByDID(did);
        std::vector<uint8_t> response = {0x62, request[1], request[2]};
        response.insert(response.end(), data.begin(), data.end());
        return response;
    }
    return {0x7F}; // Negative response (simplified)
}
