# Document Layout and Page Styles in LaTeX

## 1. Document style vs. page style

Document style and page style control different aspects of a LaTeX document.

**Document style** is mainly determined by the document class. It defines the overall document structure, basic font size and paper size.

**Page style** controls the appearance of headers and footers on individual pages.

Example:

```latex
\documentclass[12pt,a4paper]{article}
\pagestyle{plain}
```

Here, `article` defines the document class, while `plain` controls the page style.

## 2. Choosing a document class

The document class is declared using:

```latex
\documentclass[options]{class}
```

Common classes include:

| Class | Purpose |
|---|---|
| `article` | Articles, assignments and short reports |
| `report` | Longer reports with chapters |
| `book` | Books and dissertations |
| `letter` | Formal correspondence |
| `beamer` | Slide presentations |
| `exam` | Question papers and examinations |

Example:

```latex
\documentclass[11pt,letterpaper]{report}
```

This selects the report class, an 11-point base font and US Letter paper.

Document classes can also provide specialised structures. For example, IEEE and ACM classes are used for documents following their respective publication formats.

## 3. Paper size

Paper size can be selected through document class options.

```latex
\documentclass[a4paper]{article}
```

For US Letter paper:

```latex
\documentclass[letterpaper]{article}
```

Common options include:
- `a4paper`
- `letterpaper`

Specifying the paper size explicitly helps maintain consistent page dimensions.

## 4. Customising page margins

The `geometry` package provides a convenient way to configure page margins.

Load it in the preamble:

```latex
\usepackage{geometry}
```

Set the margins:

```latex
\geometry{
    left=2.5cm,
    right=2.5cm,
    top=2.5cm,
    bottom=2.5cm
}
```

This example sets all four margins to 2.5 cm.

A shorter version is:

```latex
\usepackage[margin=2.5cm]{geometry}
```

The geometry package is useful when a report or assignment must follow specific page-layout requirements.

## 5. Page styles

The page style controls the header and footer.

LaTeX provides three commonly used predefined styles:

| Style | Appearance |
|---|---|
| `plain` | Page number at the bottom centre |
| `headings` | Section or chapter headings and page number in the header |
| `empty` | No header or footer |

Syntax:

```latex
\pagestyle{plain}
```

Other examples:

```latex
\pagestyle{headings}
\pagestyle{empty}
```

The `plain` style is the default in many standard document contexts.

## 6. Custom headers and footers using fancyhdr

For more control over headers and footers, LaTeX provides the `fancyhdr` package.

Load the package:

```latex
\usepackage{fancyhdr}
```

Configure the page style:

```latex
\pagestyle{fancy}

\fancyhf{}

\fancyhead[L]{Technical Writing}
\fancyhead[C]{LaTeX Documentation}
\fancyhead[R]{MNIT Jaipur}

\fancyfoot[C]{\thepage}
```

Explanation:

- `\pagestyle{fancy}` activates the fancy page style.
- `\fancyhf{}` clears the existing header and footer fields.
- `\fancyhead[L]` sets the left header.
- `\fancyhead[C]` sets the centre header.
- `\fancyhead[R]` sets the right header.
- `\fancyfoot[C]` sets the centre footer.
- `\thepage` displays the current page number.

The position indicators are:

| Indicator | Position |
|---|---|
| `L` | Left |
| `C` | Centre |
| `R` | Right |

A complete document can use these settings as follows:

```latex
\documentclass[12pt,a4paper]{article}

\usepackage{fancyhdr}

\pagestyle{fancy}
\fancyhf{}

\fancyhead[L]{Technical Writing}
\fancyhead[R]{LaTeX}
\fancyfoot[C]{\thepage}

\begin{document}

\section{Introduction}

This document uses customised headers and footers.

\end{document}
```

## 7. Specialised document classes

Different types of documents may require different structures. LaTeX provides classes suited to these purposes.

### 7.1 Book class

The `book` class is suitable for textbooks, books and dissertations.

It supports chapters and different parts of a book.

```latex
\documentclass{book}

\begin{document}

\frontmatter

\chapter{Preface}

\mainmatter

\chapter{Introduction}

\section{Background}

\backmatter

\chapter{References}

\end{document}
```

Important commands:

- `\frontmatter`: Starts the preliminary part of the book.
- `\mainmatter`: Starts the main content.
- `\backmatter`: Starts the concluding or supplementary part.

### 7.2 Beamer class

The `beamer` class is designed for slide presentations.

```latex
\documentclass{beamer}

\begin{document}

\begin{frame}{Title Slide}
Welcome to my presentation!
\end{frame}

\begin{frame}{Main Points}
\begin{itemize}
    \item First item
    \item Second item
\end{itemize}
\end{frame}

\end{document}
```

Beamer supports slide-based layouts, overlays, transitions, themes and presentation formatting.

We will study Beamer separately in its own documentation section.

### 7.3 Letter class

The `letter` class is designed for formal correspondence.

```latex
\documentclass{letter}

\signature{Jane Doe}
\address{123 Main Street\\City, Country}

\begin{document}

\begin{letter}{Recipient Name\\Company\\Address}

\opening{Dear Recipient,}

This is an example of a formal letter prepared using LaTeX.

\closing{Sincerely,}

\end{letter}

\end{document}
```

Important commands:

- `\signature{}` defines the sender's signature.
- `\address{}` defines the sender's address.
- `\begin{letter}{}` specifies the recipient.
- `\opening{}` defines the greeting.
- `\closing{}` defines the closing text.

### 7.4 Exam class

The `exam` class supports the preparation of question papers and examinations.

```latex
\documentclass{exam}

\begin{document}

\begin{questions}

\question What is 2 + 2?

\begin{choices}
    \choice 3
    \choice 4
    \choice 5
\end{choices}

\question Explain Newton's second law.

\end{questions}

\end{document}
```

Important commands and environments:

- `questions`: Contains the questions.
- `\question`: Introduces a question.
- `choices`: Contains multiple-choice options.
- `\choice`: Defines an individual option.

## 8. Choosing the right document class

| Document requirement | Suitable class |
|---|---|
| Short academic assignment | `article` |
| Detailed technical report | `report` |
| Book or dissertation | `book` |
| Presentation | `beamer` |
| Formal letter | `letter` |
| Examination paper | `exam` |

The choice of document class should be based on the structure and purpose of the document.

## 9. Complete layout demonstration

The following example combines document class options, margin settings and custom page styles.

```latex
\documentclass[12pt,a4paper]{article}

\usepackage{geometry}
\usepackage{fancyhdr}

\geometry{margin=2.5cm}

\pagestyle{fancy}
\fancyhf{}

\fancyhead[L]{Technical Writing}
\fancyhead[R]{MNIT Jaipur}
\fancyfoot[C]{Page \thepage}

\title{Document Layout in LaTeX}
\author{Student Name}
\date{\today}

\begin{document}

\maketitle

\section{Introduction}

This document demonstrates page layout,
margins, headers and footers.

\section{Conclusion}

LaTeX provides flexible controls for
creating structured documents.

\end{document}
```

## 10. Key takeaways

- The document class controls the overall document structure.
- Page styles control headers and footers.
- Paper size can be selected using class options.
- The `geometry` package controls page margins.
- The `fancyhdr` package allows customised headers and footers.
- The `book`, `beamer`, `letter` and `exam` classes support specialised documents.
- A suitable document class should be selected according to the document's purpose.

---

