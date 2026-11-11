# Paragraphs, Page Breaks and Numbering in LaTeX

This chapter explains how to control paragraph structure, line breaks, page layout, section numbering and equation numbering.

## 1. Manual line breaks

LaTeX automatically decides where lines should wrap. Sometimes, however, a manual line break is useful.

Use `\\` to start a new line without starting a new paragraph.

```latex
This is the first line.\\
This is the second line.
```

**Remember:** A line break and a paragraph break are different. Use `\\` for a new line within the same paragraph.

Avoid using repeated manual line breaks to create vertical spacing.

## 2. Creating new paragraphs

A blank line in the source creates a new paragraph.

```latex
This is the first paragraph.

This is the second paragraph.
```

Alternatively, use `\par` to end a paragraph explicitly.

```latex
This is the first paragraph.\par
This is the second paragraph.
```

Paragraph indentation and spacing depend on the document class and formatting settings.

## 3. Controlling page breaks

LaTeX normally handles page breaks automatically. These commands provide manual control.

| Command | Purpose |
|---|---|
| `\newpage` | Starts a new page |
| `\pagebreak` | Requests a page break |
| `\clearpage` | Starts a new page after processing pending figures and tables |

Example:

```latex
Introduction text goes here.

\newpage

This content starts on a new page.
```

**When to use them:**
- `\newpage`: When the next content must begin on another page.
- `\pagebreak`: When you want to encourage a page break.
- `\clearpage`: When pending floating figures or tables should be placed before continuing.

## 4. Preventing unwanted breaks

### Using mbox

The `\mbox{}` command keeps its content together on one line.

```latex
The phrase \mbox{Technical Writing Portfolio}
will not break internally.
```

### Using samepage

The `samepage` environment discourages page breaks within the enclosed content.

```latex
\begin{samepage}
This is the first paragraph.

This is the second paragraph.
\end{samepage}
```

This is useful when related paragraphs should remain together. It does not guarantee that content will fit if the enclosed material is too large.

## 5. Line-breaking and hyphenation

LaTeX automatically breaks long words when necessary.

You can suggest permitted hyphenation points using hyphens in a word:

```latex
hy-phen-ation
```

To prevent a word or phrase from breaking:

```latex
\mbox{no-hyphenation}
```

The `\linebreak` command requests a line break.

```latex
First part of the sentence.
\linebreak
Second part of the sentence.
```

Use manual line-breaking commands only when the layout genuinely requires them.

## 6. Automatic section numbering

LaTeX automatically numbers section headings.

```latex
\section{Introduction}
\subsection{Background}
\subsubsection{Motivation}

\section{Methodology}
```

A typical numbering hierarchy is:

- Section: 1
- Subsection: 1.1
- Subsubsection: 1.1.1

The numbering is updated automatically when sections are added or reordered.

## 7. Changing the starting section number

The `\setcounter` command changes a LaTeX counter.

```latex
\setcounter{section}{3}

\section{Next Section}
```

The next section will be numbered 4 because the section counter was set to 3 first.

This is useful when continuing numbering from an earlier part of a document.

## 8. Creating unnumbered sections

Add an asterisk to a sectioning command to suppress its number.

```latex
\section*{Acknowledgements}
```

Common uses include:
- Abstract
- Acknowledgements
- Preface
- References

**Important:** Starred sections are normally excluded from the table of contents. To add one manually:

```latex
\section*{Acknowledgements}
\addcontentsline{toc}{section}{Acknowledgements}
```

## 9. Numbered equations

The `equation` environment automatically numbers a displayed equation.

```latex
\begin{equation}
E = mc^2
\end{equation}
```

The equation number appears on the right by default.

### Referencing an equation

Use `\label` to assign a reference name and `\ref` to display its number.

```latex
\begin{equation}
E = mc^2
\label{eq:energy}
\end{equation}

Equation \ref{eq:energy} represents
the mass-energy relationship.
```

Compile the document again if a reference initially appears as `??`.

## 10. Unnumbered equations

Use the starred equation environment when an equation should not have a number.

```latex
\usepackage{amsmath}

\begin{equation*}
a^2 + b^2 = c^2
\end{equation*}
```

The `amsmath` package provides the starred equation environment.

## 11. Customising section numbering style

The `\renewcommand` command can redefine how section numbers are displayed.

```latex
\renewcommand{\thesection}{\Roman{section}}

\section{Introduction}
\section{Methodology}
```

The sections will use Roman numerals:

- I
- II
- III

Other useful numbering representations include:

| Command | Representation |
|---|---|
| `\arabic{section}` | 1, 2, 3 |
| `\Roman{section}` | I, II, III |
| `\roman{section}` | i, ii, iii |
| `\Alph{section}` | A, B, C |
| `\alph{section}` | a, b, c |

## 12. Complete practical example

The following example combines paragraphs, page breaks, section numbering and equation references.

```latex
\documentclass[12pt,a4paper]{article}

\usepackage{amsmath}
\usepackage{geometry}

\geometry{margin=2.5cm}

\begin{document}

\tableofcontents

\section{Introduction}

LaTeX automatically manages paragraph
formatting and section numbering.

This is a second paragraph.

\section{Mathematical Background}

Consider the Pythagorean theorem:

\begin{equation}
a^2+b^2=c^2
\label{eq:pythagoras}
\end{equation}

As shown in Equation \ref{eq:pythagoras},
the square of the hypotenuse equals the
sum of the squares of the other two sides.

\newpage

\section*{Conclusion}
\addcontentsline{toc}{section}{Conclusion}

This document demonstrates basic page
and numbering controls.

\end{document}
```

## 13. Common mistakes to avoid

1. Using `\\` repeatedly to create paragraph spacing.
2. Using `\newpage` when a normal automatic page break would be better.
3. Forgetting to load `amsmath` when using `equation*`.
4. Expecting starred sections to appear automatically in the table of contents.
5. Forgetting to compile again when references display `??`.
6. Reusing the same label for multiple equations or sections.

## 14. Key takeaways

- A blank line starts a new paragraph.
- `\\` creates a manual line break.
- `\newpage` and `\clearpage` control page transitions.
- `\mbox` keeps its content together.
- `\section`, `\subsection` and `\subsubsection` provide automatic numbering.
- `\setcounter` changes a counter's value.
- A starred section command suppresses numbering.
- `equation` numbers equations; `equation*` does not.
- `\label` and `\ref` support cross-referencing.
- `\renewcommand{\thesection}{...}` customises section numbering.

---

