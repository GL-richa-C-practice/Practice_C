#include <gtest/gtest.h>
#include "diag/DiagnosticService.hpp"

TEST(DiagnosticServiceTest, ReadDID_ReturnsCorrectData) {
    auto handler = std::make_shared<ServiceHandler>();
    handler->addDID(0x1234, {0xDE, 0xAD});

    DiagnosticService service(handler);
    std::vector<uint8_t> request = {0x22, 0x12, 0x34};
    std::vector<uint8_t> response = service.handleRequest(request);

    std::vector<uint8_t> expected = {0x62, 0x12, 0x34, 0xDE, 0xAD};
    EXPECT_EQ(response, expected);
}
