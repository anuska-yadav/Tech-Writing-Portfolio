# Logger and Calculation Engine – Doxygen Practical

## Objective
To generate HTML and PDF documentation for a multi-file C++ project using Doxygen.

## Project Files

| File | Description |
|---|---|
| `main.cpp` | Main program and project main page |
| `Logger.h` | Logger class and LogLevel enum |
| `CalculationEngine.h` | Calculation engine class and power function |
| `Doxyfile` | Doxygen configuration file |

## Tools Used
- C++
- Doxygen
- LaTeX
- Web Browser

## Procedure

1. Create the C++ source and header files.
2. Add Doxygen-style documentation comments using commands such as `@file`, `@class`, `@brief`, `@details`, `@param`, `@return`, `@enum` and `@todo`.
3. Define the project overview using `\mainpage`.
4. Configure the project using the `Doxyfile`.
5. Set the following configuration options:
   - `GENERATE_HTML = YES`
   - `GENERATE_LATEX = YES`
   - `GENERATE_XML = NO`
6. Run the following command in the project directory:

   ```bash
   doxygen Doxyfile
   ```

7. Doxygen generates HTML and LaTeX documentation inside the `doc/` directory.
8. Open the generated HTML documentation:

   ```bash
   open doc/html/index.html
   ```

9. Navigate to the generated LaTeX directory:

   ```bash
   cd doc/latex
   ```

10. Generate the PDF documentation:

    ```bash
    make
    ```

11. The generated PDF is available as `refman.pdf`.

12. Open the PDF:

    ```bash
    open refman.pdf
    ```

## Output

- HTML documentation containing the project overview, Logger class, LogLevel enum and CalculationEngine class.
- PDF documentation generated from the LaTeX output.

## Result

The multi-file C++ project was successfully documented using Doxygen. HTML documentation was generated and viewed in a web browser, and PDF documentation was generated using LaTeX.