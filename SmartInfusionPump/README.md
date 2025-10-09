# SmartInfusionPump (SIPC)
Bare-metal firmware reference project implementing a simplified infusion pump controller.

## Goal
Demonstrate embedded C architecture, bare-metal event-loop, safety monitoring, and documentation reflecting a Senior Embedded C Engineer skillset.

## Structure
- `src/` - firmware and host-simulation code
- `inc/` - public headers
- `tests/` - host-build unit tests / simulation
- `docs/` - design documents, requirements, traceability
- `tools/` - static analysis config, scripts
- `Makefile` - build targets for host-sim and (placeholder) embedded toolchains

## Quick start (host simulation)
```bash
make                 # builds host simulation binary
make run_sim         # runs the simulation (produces console output)
make test            # builds & runs unit tests (simple harness)
```

## Notes
- This scaffold targets two builds: `HOST_BUILD` for simulation on your PC and `EMBEDDED` as placeholders for cross-compilation for an ARM toolchain.
- The firmware is modular and event-driven (no RTOS).
