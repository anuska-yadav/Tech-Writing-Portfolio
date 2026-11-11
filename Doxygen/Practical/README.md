# Doxygen Practical Work

## 01 — Logger and Calculation Engine

This multi-file C++ project follows the Doxygen lab task:

- `Logger.h`: Logger class, LogLevel enum and constructor documentation.
- `CalculationEngine.h`: class description, detailed description, power parameters, return value and TODO tag.
- `main.cpp`: project main page and program entry point.
- `Doxyfile`: configuration for HTML, LaTeX and XML output.

### Generate documentation

Open Terminal in `01-logger-and-calculation-engine/` and run:

```bash
doxygen Doxyfile
```

Open `generated/html/index.html` in a browser to view the HTML documentation.

To create the PDF from the generated LaTeX output, enter `generated/latex/` and run:

```bash
make
```

The supplied assignment specifically asks for HTML and LaTeX/PDF output. Generated output folders are produced by Doxygen and are not included here if Doxygen is unavailable in the build environment; run the commands above on your computer after installing Doxygen and the required LaTeX tools.
