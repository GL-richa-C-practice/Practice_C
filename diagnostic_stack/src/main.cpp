#include <iostream>
#include "diag/DiagnosticService.hpp"

int main() {
    std::cout << ">> Starting DiagnosticService.exe\n" << std::flush;

    std::shared_ptr<ServiceHandler> handler = std::make_shared<ServiceHandler>();
    handler->addDID(0x1234, {0xDE, 0xAD});

    DiagnosticService service(handler);
    std::vector<uint8_t> request = {0x22, 0x12, 0x34};  // UDS Read DID 0x1234
    std::vector<uint8_t> response = service.handleRequest(request);

    std::cout << ">> UDS Response: ";
    for (uint8_t byte : response) {
        std::cout << std::hex << static_cast<int>(byte) << " ";
    }
    std::cout << std::endl << ">> Finished\n";

    std::cout << ">> Press Enter to exit...\n";
    std::cin.get();  // Prevent console from closing immediately

    return 0;
}