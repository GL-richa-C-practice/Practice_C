add_library(diag
    DiagnosticService.cpp
    ServiceHandler.cpp
)

add_executable(DiagnosticService main.cpp)
target_link_libraries(DiagnosticService diag)
