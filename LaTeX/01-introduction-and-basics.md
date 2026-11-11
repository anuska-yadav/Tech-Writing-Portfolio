# Introduction to LaTeX

## 1. What is LaTeX?

LaTeX is a document preparation system built on top of the TeX typesetting system. It is widely used to prepare academic, scientific and technical documents.

Unlike a conventional word processor, where the writer directly formats the document using menus and buttons, LaTeX allows the writer to describe the structure and formatting through commands.

The source is written in a plain-text file and processed by a compiler to generate the final document.

### Why use LaTeX?

- **Professional typesetting:** Produces consistent and well-structured documents.
- **Mathematical notation:** Makes complex equations and symbols easier to typeset.
- **Automatic numbering:** Manages sections, equations, figures and tables.
- **Cross-referencing:** Allows references to numbered elements to update automatically.
- **Bibliography management:** Supports organised citations and reference lists.
- **Portability:** Source files are plain text and can be maintained across different systems.
- **Structured writing:** Separates the content and logical structure from much of the visual formatting.

### LaTeX and conventional word processors

| LaTeX | Conventional word processor |
|---|---|
| Uses commands to describe document structure | Often uses menus and direct formatting |
| Particularly useful for mathematical and technical documents | Convenient for general-purpose documents |
| Supports automatic numbering and references | May require more manual formatting |
| Source is maintained as text files | Documents are commonly maintained in editor-specific formats |

Neither approach is universally better. The appropriate tool depends on the document, its complexity and the user's workflow.

## 2. Tools used to write LaTeX

LaTeX documents can be prepared using offline editors or online platforms.

### Offline tools

- **TeXstudio:** An editor for writing, compiling and viewing LaTeX documents.
- **TeX Live:** A LaTeX distribution commonly used on Linux and other systems.
- **MiKTeX:** A LaTeX distribution commonly used on Windows.
- **Kile:** A LaTeX editor for Linux.

### Online tools

- **Overleaf:** A browser-based LaTeX editor with collaborative features.
- **Papeeria:** An online LaTeX editing environment.
- **CoCalc:** An online computational environment that supports LaTeX.

An editor provides the working environment; a LaTeX distribution supplies the compiler and related packages.

## 3. Source file and output

A LaTeX source file is a plain-text file saved with the `.tex` extension.

It contains:
- Document text.
- LaTeX commands.
- Environment declarations.
- References to packages and other resources.

The source file is processed by a LaTeX compiler to produce an output document.

Common output formats introduced in the lecture include:

| Format | Purpose |
|---|---|
| PDF (`.pdf`) | Final document for viewing and sharing |
| DVI (`.dvi`) | Device-independent output in the traditional workflow |
| PostScript (`.ps`) | Page description format |
| RTF (`.rtf`) | Rich Text Format |

## 4. The basic structure of a LaTeX document

Every basic LaTeX document has three essential components:

1. Document class declaration.
2. Document body begins.
3. Document body ends.

### First LaTeX program

```latex
\documentclass{article}

\begin{document}

Hello World!

\end{document}
```

**Explanation:**

- `\documentclass{article}` selects the article document class.
- `\begin{document}` marks the beginning of the document body.
- `Hello World!` is the content displayed in the output.
- `\end{document}` marks the end of the document.

The commands beginning with a backslash are LaTeX commands.

### Understanding the preamble

The preamble is the portion between the document class declaration and `\begin{document}`.

It is used to configure the document before its main content begins.

For example:

```latex
\documentclass[12pt,a4paper]{article}

\usepackage{amsmath}
\usepackage{graphicx}

\begin{document}

This is the document body.

\end{document}
```

Here:
- `12pt` specifies the base font size.
- `a4paper` selects A4 paper.
- `amsmath` provides additional mathematical typesetting features.
- `graphicx` provides commands for including graphics.

Packages are loaded in the preamble using `\usepackage`.

## 5. Document classes and options

The document class determines the basic structure and layout of a document.

Common document classes include:

| Class | Typical use |
|---|---|
| `article` | Short articles, assignments and papers |
| `report` | Longer reports containing chapters |
| `book` | Books and extensive documents |
| `letter` | Formal letters |
| `beamer` | Presentations |

Document class options can be specified inside square brackets.

Example:

```latex
\documentclass[12pt,a4paper]{article}
```

The options specify:
- `12pt`: Base font size.
- `a4paper`: Paper size.
- `article`: Document class.

Other common font-size options include `10pt` and `11pt`. The default paper size depends on the document class and its configuration, so it can be specified explicitly when a particular size is required.

## 6. Title, author and date

LaTeX provides predefined commands for document title information.

```latex
\documentclass{article}

\title{Introduction to LaTeX}
\author{Student Name}
\date{\today}

\begin{document}

\maketitle

This is my first document.

\end{document}
```

**Important commands:**

- `\title{...}` defines the title.
- `\author{...}` defines the author.
- `\date{...}` defines the date.
- `\today` inserts the current date.
- `\maketitle` displays the title information.

The title, author and date are defined before `\begin{document}`, while `\maketitle` is placed inside the document body.

## 7. Organising content with sections

LaTeX provides structural commands to divide a document into meaningful parts.

| Command | Purpose |
|---|---|
| `\section{Title}` | Creates a section |
| `\subsection{Title}` | Creates a subsection |
| `\subsubsection{Title}` | Creates a subsubsection |

Example:

```latex
\section{Introduction}

This section introduces the topic.

\subsection{Background}

This subsection explains the background.

\subsubsection{Motivation}

This subsection discusses the motivation.
```

LaTeX handles the numbering and formatting of these headings automatically.

## 8. Table of contents

A table of contents can be generated automatically using:

```latex
\tableofcontents
```

LaTeX collects the document's section headings and their page numbers to construct the contents list.

Place this command where the table of contents should appear, usually after the title page or title information.

Sometimes the document must be compiled more than once so that the correct headings and page numbers appear.

## 9. Compiling a LaTeX document

Compilation converts the `.tex` source file into a readable output document.

A common PDF compilation command is:

```bash
pdflatex filename.tex
```

The traditional workflow can also use:

```bash
latex filename.tex
```

This produces DVI output.

Modern editors such as TeXstudio and Overleaf provide compilation controls, so the compiler can be run through the editor.

### Compilation involving a bibliography

When a document uses BibTeX, the bibliography requires an additional processing step.

A typical workflow is:

```bash
pdflatex filename
bibtex filename
pdflatex filename
pdflatex filename
```

The repeated LaTeX runs help resolve citations, references and page numbers.

## 10. A complete small example

The following example combines the concepts introduced so far:

```latex
\documentclass[12pt,a4paper]{article}

\title{My First Structured Document}
\author{Student Name}
\date{\today}

\begin{document}

\maketitle

\tableofcontents

\section{Introduction}

LaTeX is used to prepare structured technical documents.

\section{Applications}

\subsection{Academic Writing}

LaTeX is useful for reports, research papers
and mathematical documents.

\subsection{Scientific Writing}

It provides commands for mathematical notation
and structured references.

\end{document}
```

This example demonstrates the document class, preamble, title information, document body, sections and automatic table of contents.

## 11. Important points to remember

- Every basic document requires a document class and a document environment.
- Commands generally begin with a backslash.
- Curly braces contain mandatory arguments.
- Square brackets commonly contain optional arguments.
- The preamble contains document configuration and package declarations.
- The document body contains the actual content.
- The `.tex` file is the editable source; the PDF is a compiled output.
- Section headings and the table of contents can be generated automatically.

---

