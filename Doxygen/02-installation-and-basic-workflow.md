# Doxygen Installation and Basic Workflow

## 1. Installing Doxygen

Doxygen can be installed on different operating systems.

### Windows
Download the installer from:

https://www.doxygen.nl/download.html

### macOS

Use Homebrew:

```bash
brew install doxygen
```

### Linux (Debian/Ubuntu)

Use the following command:

```bash
sudo apt-get install doxygen
```

## 2. Checking the Installation

After installation, check the installed version:

```bash
doxygen --version
```

This command displays the installed Doxygen version.

## 3. Basic Doxygen Workflow

The basic workflow consists of four steps:

**Step 1: Write documentation comments**

Add specially formatted comments to the source code.

**Step 2: Create a configuration file**

Generate a default configuration file using:

```bash
doxygen -g Doxyfile
```

This creates a file named `Doxyfile`, which contains the configuration settings.

**Step 3: Generate documentation**

Run:

```bash
doxygen Doxyfile
```

Doxygen reads the configuration and generates the documentation.

**Step 4: View the generated output**

The generated HTML documentation can be opened from:

```text
html/index.html
```

LaTeX/PDF output can also be generated.

## 4. Workflow Summary

1. Write specially formatted comments in source files.
2. Generate or edit the `Doxyfile`.
3. Run Doxygen using the configuration file.
4. Open the generated HTML documentation or create a PDF.

## 5. Key Takeaway

Doxygen converts specially formatted source-code comments into structured documentation. The `Doxyfile` controls the generation process.
