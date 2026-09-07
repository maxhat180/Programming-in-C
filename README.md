# Programming in C

Hands-on C exercises and small portable projects, progressing from language
fundamentals toward embedded-software development.

## Repository layout

```text
exercises/
  c_basics/    Focused language exercises and progress tracking
build/         Generated locally; never committed
```

Larger portable programs will be added under `projects/` when they become
useful. Hardware-specific STM32 firmware remains in the separate
`STM32-Project-1` repository.

## Current learning path

The active exercise sequence is documented in
[`exercises/c_basics/PRACTICE_PLAN.md`](exercises/c_basics/PRACTICE_PLAN.md).

Each exercise is written and reviewed locally using GCC with C17 and strict
compiler warnings enabled.

## Building in Visual Studio Code

1. Open this repository as the VS Code workspace.
2. Open a `.c` exercise.
3. Press `Ctrl+Shift+B` to compile the active file.
4. Run the generated program from the repository root:

   ```powershell
   .\build\c-practice\SOURCE_FILE_NAME.exe
   ```

Press `F5` to build and debug the active exercise.
