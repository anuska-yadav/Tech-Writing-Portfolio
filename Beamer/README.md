# Beamer — Technical Writing

## Introduction

Beamer is a LaTeX document class used to create presentations.

## Basic Structure

A Beamer presentation uses frames to organise its content into individual slides.

```latex
\documentclass{beamer}

\usetheme{Madrid}

\title{Technical Writing}
\author{Anuska Yadav}
\date{\today}

\begin{document}

\frame{\titlepage}

\begin{frame}
    \frametitle{Introduction}
    This is my first Beamer slide.
\end{frame}

\end{document}
```

## Topics Covered

- Beamer document class
- Presentation title and author
- Themes
- Frames and slide titles
- Bullet points

## Practical Work

The `Practical/` folder contains:

- `01-basic-beamer-presentation.tex` — LaTeX source code.
- `01-basic-beamer-presentation.pdf` — Compiled presentation.

## Author

Anuska Yadav

Technical Writing Coursework — MNIT Jaipur

Instructor: Dr. Neeta Nain