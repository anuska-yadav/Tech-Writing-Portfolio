# Beamer – Presentation Creation Using LaTeX

A structured collection of documentation covering Beamer, a LaTeX document class used to create presentations, including presentation structure, themes, frames and slide formatting.

---

## Introduction

Beamer is a LaTeX document class used to create presentation slides. It provides features for organizing content into frames and applying themes to design structured presentations.

---

## Basic Structure

A Beamer presentation uses frames to organize its content into individual slides.

A basic Beamer document follows this structure:

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

---

## Topics Covered

- Beamer document class
- Presentation title and author
- Beamer themes
- Frames and slide titles
- Bullet points

---

## Practical Work

The `Practical/` directory contains the source code and compiled presentation created using Beamer.

It includes:

- `01-basic-beamer-presentation.tex` – LaTeX source code of the presentation.
- `01-basic-beamer-presentation.pdf` – Compiled PDF presentation.

---

## Repository Structure

```text
Beamer/
│
├── README.md
├── 01-introduction-and-basic-structure.md
│
└── Practical/
    ├── README.md
    ├── 01-basic-beamer-presentation.tex
    └── 01-basic-beamer-presentation.pdf
```

---

## Learning Objectives

After studying this section, I can:

- Explain Beamer and its purpose in presentation creation.
- Use the Beamer document class.
- Create a basic Beamer presentation.
- Define presentation titles, authors and dates.
- Apply themes to presentations.
- Organize presentation content using frames.
- Add slide titles and bullet points.
- Compile Beamer source code into PDF presentations.