# C Basics

These exercises run directly on Windows, providing a fast way to learn C
without flashing the STM32 board after every small change.

## Build and run an exercise

1. Open the exercise's `.c` file in Visual Studio Code.
2. Press `Ctrl+Shift+B` to build the active file.
3. Open the integrated terminal and run its generated executable:

   ```powershell
   .\build\c-practice\NAME_OF_SOURCE_FILE.exe
   ```

4. Add a breakpoint and press `F5` to debug the active file.

Warnings are intentionally enabled. Treat compiler warnings as defects rather
than background noise; that is both a C fundamental and normal embedded-industry
practice.

## Continuing exercises

Use [PRACTICE_PLAN.md](PRACTICE_PLAN.md) as the learning path. Each numbered
source file has a matching task document. Start the next exercise with
`02_TASK.md`; write the missing code yourself, then ask for a hint or review.
