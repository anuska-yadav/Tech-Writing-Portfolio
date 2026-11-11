# Advanced Document Styling in LaTeX

## 1. Creating a title page

A title page introduces a document and displays information such as its title, author and date.

LaTeX provides three basic commands:

```latex
\title{An Introduction to LaTeX}
\author{Student Name}
\date{\today}
```

The title information is displayed using:

```latex
\begin{document}

\maketitle

\end{document}
```

The appearance of the title depends on the document class. For example, the `article` class generally places the title at the beginning of the first page, whereas `report` and `book` classes can place it on a separate page.

## 2. Customising the title

Formatting commands can be used inside the title and author declarations.

Example:

```latex
\title{\Huge\bfseries Technical Writing Portfolio}

\author{
    \Large Student Name\\
    \small Department of Computer Science
}

\date{\today}
```

Useful commands:

| Command | Purpose |
|---|---|
| `\Huge` | Makes text very large |
| `\Large` | Makes text larger |
| `\bfseries` | Selects bold text |
| `\\` | Inserts a line break |
| `\smallskip` | Adds a small vertical space |

## 3. Adding additional information

Information such as a supervisor, department or course name can be placed below the title.

```latex
\documentclass{article}

\title{Research on LaTeX Styling}
\author{Student Name}
\date{\today}

\begin{document}

\maketitle

\begin{center}
    \vspace{1cm}
    \textbf{Supervisor:} Dr. Smith\\
    \textbf{Course:} Technical Writing
\end{center}

\end{document}
```

Here, the `center` environment centres the additional information, while `\vspace{1cm}` adds vertical space.

## 4. Creating an abstract

An abstract is a short summary of a document's purpose, scope and main content.

It is generally placed after the title and before the main sections.

Syntax:

```latex
\begin{abstract}
This document introduces the fundamentals of
technical document preparation using LaTeX.
\end{abstract}
```

The standard abstract environment formats the summary as a separate block, usually with an Abstract heading.

### Abstracts in Beamer

In Beamer presentations, an abstract can be displayed on a titled frame.

```latex
\begin{frame}{Abstract}
This presentation introduces the main ideas
of the topic.
\end{frame}
```

## 5. Customising section heading styles

The `sectsty` package allows heading styles to be customised globally.

Load the package:

```latex
\usepackage{sectsty}
\usepackage{xcolor}
```

Example:

```latex
\sectionfont{\Large\bfseries\color{blue}}
\subsectionfont{\itshape\color{red}}
```

Explanation:

- `\sectionfont` changes the appearance of section headings.
- `\subsectionfont` changes subsection headings.
- `\Large` increases the font size.
- `\bfseries` makes text bold.
- `\itshape` makes text italic.
- `\color{blue}` and `\color{red}` select text colours.

These settings are placed in the preamble and apply to the corresponding headings throughout the document.

## 6. Using custom fonts with fontspec

The `fontspec` package allows LaTeX documents to use fonts installed on the computer.

It supports the XeLaTeX and LuaLaTeX engines.

```latex
\usepackage{fontspec}

\setmainfont{Georgia}
\setsansfont{Arial}
\setmonofont{Courier New}
```

The commands specify:

| Command | Font category |
|---|---|
| `\setmainfont{}` | Main serif font |
| `\setsansfont{}` | Sans-serif font |
| `\setmonofont{}` | Monospaced font |

These font styles can be used in the document:

```latex
Normal text in the main font.

\textsf{Sans-serif text.}

\texttt{Monospaced text.}
```

**Important:** A document using `fontspec` must be compiled with XeLaTeX or LuaLaTeX rather than the traditional pdfLaTeX engine. The selected fonts must also be available to the system.

## 7. Changing page background colour

The `xcolor` package provides colour support.

Load the package:

```latex
\usepackage{xcolor}
```

To change the background colour of the page:

```latex
\pagecolor{yellow!10}
```

Here, `yellow!10` represents a light yellow tint using the colour-mixing notation supported by `xcolor`.

Other examples:

```latex
\pagecolor{blue!5}
\pagecolor{green!10}
\pagecolor{white}
```

Page background colour can be useful for specially designed documents, although ordinary academic reports generally use a white background.

## 8. Advanced headers and footers

The `fancyhdr` package provides flexible control over page headers and footers.

```latex
\usepackage{fancyhdr}

\pagestyle{fancy}
\fancyhf{}

\fancyhead[L]{My Document}
\fancyhead[C]{Technical Writing}
\fancyhead[R]{\today}

\fancyfoot[C]{Page \thepage}
```

The positions are:

- `L`: Left.
- `C`: Centre.
- `R`: Right.

The command `\fancyhf{}` clears the existing header and footer fields before new content is assigned.

## 9. Customising lists with enumitem

The `enumitem` package provides additional control over list formatting.

Load the package:

```latex
\usepackage{enumitem}
```

Example:

```latex
\setlist[itemize]{
    label=\textbullet,
    leftmargin=*
}
```

This sets the bullet symbol and adjusts the left indentation of itemized lists.

A document can then use:

```latex
\begin{itemize}
    \item First topic
    \item Second topic
    \item Third topic
\end{itemize}
```

The `\setlist` command can be used to apply consistent formatting to lists throughout a document.

## 10. Complete styling example

```latex
\documentclass[12pt,a4paper]{article}

\usepackage{xcolor}
\usepackage{sectsty}
\usepackage{fancyhdr}
\usepackage{enumitem}
\usepackage{geometry}

\geometry{margin=2.5cm}

\sectionfont{\Large\bfseries\color{blue}}

\pagestyle{fancy}
\fancyhf{}
\fancyhead[L]{Technical Writing}
\fancyhead[R]{LaTeX}
\fancyfoot[C]{Page \thepage}

\setlist[itemize]{label=\textbullet,leftmargin=*}

\title{\Huge\bfseries Document Styling}
\author{Student Name}
\date{\today}

\begin{document}

\maketitle

\begin{abstract}
This document demonstrates advanced styling
features available in LaTeX.
\end{abstract}

\section{Introduction}

LaTeX provides several tools for customising
the appearance of technical documents.

\section{Features}

\begin{itemize}
    \item Custom headings
    \item Page headers and footers
    \item List formatting
    \item Page layout
\end{itemize}

\end{document}
```

## 11. Key takeaways

- `\maketitle` displays the title information.
- The title and author can be customised using formatting commands.
- The abstract environment creates a summary block.
- `sectsty` customises section heading styles.
- `fontspec` supports system fonts through XeLaTeX and LuaLaTeX.
- `xcolor` provides colour features, including page background colours.
- `fancyhdr` customises headers and footers.
- `enumitem` provides additional control over list appearance.

---

