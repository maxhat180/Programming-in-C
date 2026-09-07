# Embedded-Focused C Practice Plan

## Recommendation

Use W3Schools as a syntax reference, not as a page-by-page curriculum. The
fundamental programming ideas are already familiar; the useful work now is to
write, compile, debug, and explain small C programs locally.

The exercises below evolve one simulated sensor program. They run on Windows
first for a fast feedback loop, then the reusable logic can move into the STM32
firmware.

## Sequence

1. **Functions and pointers** - modify a caller's ADC sample through a pointer
   and clamp it to a valid range.
2. **Arrays and pointer traversal** - process a buffer of ADC samples and find
   its minimum, maximum, and average.
3. **Structures and enums** - represent a timestamped sensor reading and its
   status without passing many unrelated variables.
4. **Bits and masks** - simulate reading and changing individual flags in a
   peripheral status register.
5. **State machine** - turn a stream of readings into NORMAL, WARNING, and
   FAULT states.
6. **Multiple source files** - separate declarations into a header, logic into
   a `.c` file, and program orchestration into `main.c`.
7. **Host-side tests** - verify the reusable logic automatically, including
   boundary cases.
8. **STM32 integration** - reuse the tested logic with real ADC readings and
   UART telemetry.

## W3Schools topics to prioritize

- Pointers, arrays, and pointers-to-arrays
- Functions, parameters, declarations, return values, and scope
- Strings and safe buffer handling
- Structures, structure pointers, and enums
- `sizeof`, type conversion, and constants
- Memory management for understanding, even though embedded firmware often
  avoids routine heap allocation

File I/O and recursion are lower priority for the first embedded milestone.

## Working method

For each exercise:

1. Read only the task and expected behavior.
2. Write the missing C yourself.
3. Compile with `Ctrl+Shift+B` and resolve every warning.
4. Run the executable and compare the behavior with the expectation.
5. Use a breakpoint or add temporary prints when the behavior differs.
6. Ask for a review or a hint before requesting a complete solution.
