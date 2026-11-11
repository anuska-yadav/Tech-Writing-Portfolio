# LaTeX Documentation

LaTeX is a document preparation system used to create structured, consistent and professional technical and academic documents.

This section documents the concepts, commands, environments and practical techniques covered while learning LaTeX in Technical Writing.

## Learning Objectives

After studying this section, I should be able to:

- Understand the structure of a LaTeX document.
- Create and format documents using commands and environments.
- Typeset mathematical expressions and equations.
- Prepare tables, figures and coloured content.
- Manage page layouts, headers and footers.
- Add citations, references and bibliographies.
- Identify and troubleshoot common compilation errors.

## Documentation Chapters

| Chapter | Topic | What it covers |
|---|---|---|
| 01 | [Introduction and Basics](01-introduction-and-basics.md) | LaTeX fundamentals, document structure, classes and compilation |
| 02 | [Commands, Formatting and Environments](02-commands-formatting-and-environments.md) | Text formatting, spacing, lists, tables, figures and references |
| 03 | [Document Layout and Page Styles](03-document-layout-and-page-styles.md) | Page dimensions, margins, document classes, headers and footers |

| 04 | Advanced Document Styling | Advanced formatting and styling techniques |
| 05 | Paragraphs, Page Breaks and Numbering | Paragraph formatting, page breaks and numbering |
| 06 | Spacing, Boxes and Layout | Spacing commands, boxes and layout techniques |
| 07 | [Custom Environments, Errors and BibTeX](07-custom-environments-errors-and-bibtex.md) | Custom environments, warnings, indexing and BibTeX concepts |
| 08 | [Mathematical Typesetting](08-mathematical-typesetting.md) | Equations, symbols, matrices, calculus and mathematical environments |
| 09 | [Colours, Figures and Picture Environment](09-colors-figures-and-picture-environment.md) | Colours, imported images, figures and drawing with picture commands |
| 10 | [Citations and Bibliography Workflow](10-citations-and-bibliography-workflow.md) | Citation commands, `.bib` databases and bibliography compilation |

## Important LaTeX Concepts

### Document structure

```latex
\documentclass[12pt,a4paper]{article}

\usepackage{amsmath}

\begin{document}

\section{Introduction}
My first structured LaTeX document.

\end{document}
```

### Mathematical typesetting

```latex
\[
E = mc^2
\]
```

### Lists

```latex
\begin{itemize}
    \item First point
    \item Second point
\end{itemize}
```

### Figures

```latex
\usepackage{graphicx}

\begin{figure}[ht]
    \centering
    \includegraphics[width=0.6\textwidth]{example.png}
    \caption{Example figure}
    \label{fig:example}
\end{figure}
```

## Recommended Learning Sequence

1. Begin with document structure and basic commands.
2. Practise formatting and environments.
3. Understand page layout and document classes.
4. Study mathematical typesetting.
5. Learn tables, figures, colours and picture commands.
6. Understand citations, bibliography and cross-references.
7. Experiment with complete documents and troubleshoot compilation errors.

## Practical Learning

The best way to learn LaTeX is to write, compile and inspect the output.

For each concept:

1. Write a small example.
2. Compile the source file.
3. Compare the generated PDF with the intended output.
4. Change a command or option and observe the difference.
5. Fix any errors or warnings.

## Tools and Resources

- LaTeX source files use the `.tex` extension.
- Bibliography databases commonly use `.bib`.
- PDF is a common final output format.
- Common packages include `amsmath`, `graphicx`, `xcolor`, `geometry`, `fancyhdr` and `natbib`.
- Editors include TeXstudio and online LaTeX editors.

---

*Technical Writing Portfolio | LaTeX | MNIT Jaipur*

## Source and Acknowledgement

This documentation is based on the Technical Writing lecture slides and lab assignments shared by **Dr. Neeta Nain, MNIT Jaipur**.
