# LaTeX Commands, Formatting and Environments

## 1. Understanding LaTeX commands

LaTeX commands are instructions used to control document structure, formatting and content.

A command generally:
- Begins with a backslash (`\`).
- May have mandatory arguments inside `{}`.
- May have optional arguments inside `[]`.
- Is case-sensitive.

Example:

```latex
\textbf{Important Text}
```

Here, `\textbf` makes the text inside its braces bold.

Another example:

```latex
\documentclass[12pt]{article}
```

The document class is `article`, while `12pt` is an optional setting.

## 2. Spaces and paragraphs

LaTeX treats multiple consecutive spaces in the source as a single space in the output.

Example:

```latex
This is a sentence.

This is another paragraph.
```

An empty line in the source starts a new paragraph.

This is useful because the visual paragraph structure is controlled by LaTeX rather than by repeatedly pressing the space bar.

## 3. Special characters

Some characters have special meanings in LaTeX and cannot always be typed directly as ordinary text.

Reserved characters include:

`$ & % # _ { } ~ ^ \`

Common ways to print reserved characters are:

| Character | LaTeX input |
|---|---|
| `$` | `\$` |
| `&` | `\&` |
| `%` | `\%` |
| `#` | `\#` |
| `_` | `\_` |
| `{` | `\{` |
| `}` | `\}` |

For example:

```latex
The success rate is 90\%.
The expression uses x\_1.
The cost is \$50.
```

Some characters, such as `~`, `^` and the backslash itself, require special commands when they need to be printed as ordinary text.

## 4. Comments

Comments are notes written in the source code that are ignored during compilation.

The percent sign `%` begins a comment. Everything after it on that line is ignored by LaTeX.

Example:

```latex
This text appears in the document.

% This is a comment and does not appear in the PDF.
```

Comments are useful for:
- Explaining complicated commands.
- Separating different parts of a document.
- Temporarily disabling a line of source code.
- Leaving reminders for future editing.

## 5. Emphasising text

The `\emph{}` command is used to emphasise text.

```latex
This is \emph{important} information.
```

The lecture demonstrates this command as an example of how a LaTeX command changes the appearance of selected text.

## 6. Page styles

Page styles control the appearance of page headers and footers.

LaTeX provides three predefined page styles:

| Page style | Behaviour |
|---|---|
| `plain` | Displays the page number at the bottom centre; this is the default |
| `headings` | Displays the current chapter or section heading and page number in the header |
| `empty` | Suppresses both header and footer |

Syntax:

```latex
\pagestyle{plain}
```

Other examples:

```latex
\pagestyle{headings}
\pagestyle{empty}
```

Choose the page style according to the requirements of the document.

## 7. Hyphenation

Hyphenation allows LaTeX to break long words across lines when necessary for proper text alignment.

The `\-` command specifies a permissible hyphenation point.

Example:

```latex
manu\-script
data\-base
micro\-processor
```

The word is divided only if a line break occurs at one of the specified positions.

## 8. Font sizes

LaTeX provides predefined commands to change the size of text.

| Command | Relative size |
|---|---|
| `\tiny` | Very tiny |
| `\scriptsize` | Script size |
| `\footnotesize` | Footnote size |
| `\small` | Small |
| `\normalsize` | Normal |
| `\large` | Large |
| `\Large` | Larger |
| `\LARGE` | Very large |
| `\huge` | Huge |
| `\Huge` | Largest |

Example:

```latex
{\tiny Tiny text}

{\small Small text}

{\large Large text}

{\Huge Very large text}
```

The braces create a local group, so the size change applies only to the text inside that group.

This is useful when highlighting a title, label or selected phrase without changing the rest of the document.

## 9. Text alignment

LaTeX provides environments for three common types of text alignment.

### Left alignment

```latex
\begin{flushleft}
This text is left aligned.
\end{flushleft}
```

### Centre alignment

```latex
\begin{center}
This text is centred.
\end{center}
```

### Right alignment

```latex
\begin{flushright}
This text is right aligned.
\end{flushright}
```

These environments are useful for titles, captions, short messages and other specially positioned content.

## 10. Lists

Lists organise information into readable groups.

LaTeX provides three commonly used list environments.

### 10.1 Bulleted list — itemize

```latex
\begin{itemize}
    \item LaTeX
    \item Beamer
    \item Doxygen
\end{itemize}
```

Use `itemize` when the order of the items is not important.

### 10.2 Numbered list — enumerate

```latex
\begin{enumerate}
    \item Create the source file.
    \item Compile the document.
    \item Check the PDF output.
\end{enumerate}
```

Use `enumerate` when the order of the items matters.

### 10.3 Description list — description

```latex
\begin{description}
    \item[CPU] Central Processing Unit
    \item[RAM] Random Access Memory
\end{description}
```

Use `description` when each item needs a label followed by an explanation.

## 11. Mathematical expressions

One of the major strengths of LaTeX is its support for mathematical typesetting.

Mathematical expressions can be written in inline or display mode.

### 11.1 Inline mathematics

Inline mathematics appears within a sentence.

```latex
The area of a circle is $A = \pi r^2$.
```

### 11.2 Display mathematics

Display mathematics appears separately from the surrounding paragraph.

```latex
\[
E = mc^2
\]
```

### 11.3 Equation environment

The equation environment creates a numbered equation.

```latex
\begin{equation}
E = mc^2
\end{equation}
```

### 11.4 Common mathematical commands

| Requirement | LaTeX syntax |
|---|---|
| Superscript | `x^2` |
| Subscript | `x_i` |
| Fraction | `\frac{a}{b}` |
| Square root | `\sqrt{x}` |
| Summation | `\sum_{i=1}^{n} x_i` |
| Integral | `\int_0^1 x\,dx` |
| Greek letters | `\alpha`, `\beta`, `\gamma` |
| Less than or equal | `\leq` |
| Greater than or equal | `\geq` |
| Not equal | `\neq` |
| Approximately equal | `\approx` |
| Infinity | `\infty` |

Example:

```latex
\[
\sum_{i=1}^{n} x_i = \frac{n(n+1)}{2}
\]
```

Mathematical commands are written inside mathematical mode.

## 12. Tables

Tables are created using the `tabular` environment.

The column specification determines the alignment:

- `l`: Left aligned.
- `c`: Centred.
- `r`: Right aligned.

Example:

```latex
\begin{tabular}{|c|c|}
\hline
Name & Marks \\
\hline
Alice & 90 \\
Bob & 85 \\
\hline
\end{tabular}
```

Important syntax:

- `&` separates columns.
- `\\` ends a row.
- `\hline` draws a horizontal line.
- The column specification defines the alignment.

For example, `{|c|c|}` creates two centred columns with vertical borders.

## 13. Figures and images

Images can be inserted using the `\includegraphics` command.

First, load the `graphicx` package in the preamble:

```latex
\usepackage{graphicx}
```

Then insert an image:

```latex
\begin{figure}[h]
    \centering
    \includegraphics[width=0.5\textwidth]{example-image}
    \caption{Sample Figure}
    \label{fig:sample}
\end{figure}
```

Explanation:

- `figure` creates a floating figure environment.
- `[h]` suggests placing the figure near its position in the source.
- `\centering` centres the image.
- `\includegraphics` inserts the image.
- `width=0.5\textwidth` sets its width to half the text width.
- `\caption` adds a caption.
- `\label` creates a reference key.

The image file must be available in the project or at the specified path.

## 14. Cross-references

Cross-references allow LaTeX to refer automatically to numbered sections, figures, tables and equations.

Three important commands are:

| Command | Purpose |
|---|---|
| `\label{key}` | Defines a reference key |
| `\ref{key}` | Prints the number of the referenced object |
| `\pageref{key}` | Prints the page number of the referenced object |

Example:

```latex
\section{Introduction}
\label{sec:intro}

See Section~\ref{sec:intro}
on page~\pageref{sec:intro}.
```

The `~` character creates a non-breaking space, keeping the words together.

A label should be placed appropriately near the numbered object it identifies. For figures and tables, placing it after the caption is a useful convention.

LaTeX may need to be compiled more than once to resolve references correctly.

## 15. Bibliography and citations

A bibliography lists the references used in a document.

The lecture introduces the `thebibliography` environment and the `\cite{}` command.

Example:

```latex
This is explained in \cite{lamport}.

\begin{thebibliography}{9}

\bibitem{lamport}
Leslie Lamport,
LaTeX: A Document Preparation System.

\end{thebibliography}
```

Explanation:

- `thebibliography` creates the reference list.
- `\bibitem{lamport}` defines a bibliography entry with a key.
- `\cite{lamport}` cites that entry in the document.

The citation key connects the citation in the text with its bibliography entry.

For larger documents, bibliography-management tools such as BibTeX can be used to organise references.

## 16. Mini demonstration: combining the concepts

```latex
\documentclass[12pt,a4paper]{article}

\usepackage{amsmath}
\usepackage{graphicx}

\title{A Short Technical Report}
\author{Student Name}
\date{\today}

\begin{document}

\maketitle

\tableofcontents

\section{Introduction}
This report demonstrates basic LaTeX formatting.

\section{Important Concepts}

\begin{itemize}
    \item Document structure
    \item Mathematical notation
    \item Tables and figures
\end{itemize}

\subsection{Example Equation}

The famous mass-energy relation is:

\begin{equation}
E = mc^2
\label{eq:mass-energy}
\end{equation}

Equation~\ref{eq:mass-energy} relates energy
to mass and the speed of light.

\section{Conclusion}
LaTeX provides a structured approach to
preparing technical documents.

\end{document}
```

## 17. Key takeaways

- LaTeX commands begin with a backslash and are case-sensitive.
- `%` starts a comment.
- Empty lines create new paragraphs.
- Font-size commands can be restricted to a local group using braces.
- Environments are opened with `\begin{...}` and closed with `\end{...}`.
- `itemize`, `enumerate` and `description` serve different list purposes.
- Mathematical mode is required for mathematical commands.
- `tabular` creates tables.
- `graphicx` and `\includegraphics` are used to insert images.
- Labels and references help maintain consistent numbering.
- Citations connect the document text with its bibliography.

---

