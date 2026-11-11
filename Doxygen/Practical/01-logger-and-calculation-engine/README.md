# Logger and Calculation Engine – Doxygen Practical

## Objective
To generate HTML documentation for a C++ project using Doxygen.

## Project Files

| File | Description |
|---|---|
| `main.cpp` | Main program |
| `Logger.h` | Logger class declaration and documentation |
| `CalculationEngine.h` | Calculation engine class declaration and documentation |
| `Doxyfile` | Doxygen configuration file |

## Tools Used
- C++
- Doxygen
- HTML browser

## Procedure

1. Create the C++ source and header files.
2. Add Doxygen-style documentation comments.
3. Configure the project using the `Doxyfile`.
4. Set `GENERATE_HTML = YES`.
5. Set `GENERATE_LATEX = NO` and `GENERATE_XML = NO`.
6. Run the following command in the project directory:

```bash
doxygen Doxyfile
```

7. Doxygen generates the HTML documentation inside `generated/html/`.

## View Documentation

Open the generated homepage:

```bash
open generated/html/index.html
```

## Output
HTML documentation was successfully generated for the Logger and CalculationEngine classes and the project source files.

## Result
The C++ project was successfully documented using Doxygen, and its HTML documentation was generated and viewed in a web browser.