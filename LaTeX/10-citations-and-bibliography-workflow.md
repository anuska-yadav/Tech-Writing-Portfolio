# Citations and Bibliography Workflow in LaTeX

Academic and technical documents often use information from research papers, books and other publications. LaTeX supports citations and bibliography generation so that sources can be acknowledged consistently.

This chapter covers manual references, external bibliography databases, BibTeX and the `natbib` package.

## 1. Why citations are important

Citations:
- Acknowledge the original authors.
- Help readers locate the source of information.
- Support academic arguments and technical explanations.
- Reduce the risk of plagiarism.

A bibliography provides the publication details of sources cited in a document.

## 2. Manual bibliography using thebibliography

For a small document, references can be entered directly in the LaTeX source.

```latex
\begin{thebibliography}{9}

\bibitem{lamport}
Leslie Lamport,
\textit{LaTeX: A Document Preparation System}.

\bibitem{knuth}
Donald E. Knuth,
\textit{The TeXbook}.

\end{thebibliography}
```

Cite an entry using its key:

```latex
LaTeX is a document preparation system
\cite{lamport}.
```

The argument `{9}` specifies the width reserved for bibliography labels. It is suitable for a bibliography with up to nine numbered entries.

## 3. Understanding bibliography keys

Each bibliography entry has a unique key.

For example:

```latex
\bibitem{lamport}
```

Here, `lamport` is the key used in:

```latex
\cite{lamport}
```

The key connects the citation in the text to the corresponding bibliography entry.

Use descriptive keys and avoid assigning the same key to multiple references.

## 4. Managing references with an external .bib file

For larger documents, maintaining references in a separate `.bib` file is more convenient.

Create a file named:

`references.bib`

Example:

```bibtex
@book{lamport,
    author    = {Leslie Lamport},
    title     = {LaTeX: A Document Preparation System},
    publisher = {Addison-Wesley},
    year      = {1994}
}
```

A `.bib` file contains structured reference records. Each record has:
- An entry type, such as `@book` or `@article`.
- A unique citation key.
- Fields such as author, title, publisher and year.

## 5. Using BibTeX in a LaTeX document

Load the required citation package in the preamble:

```latex
\usepackage{natbib}
```

Cite the reference in the document:

```latex
LaTeX is widely used for technical
document preparation \cite{lamport}.
```

At the end of the document, add:

```latex
\bibliographystyle{plainnat}
\bibliography{references}
```

The filename is written without the `.bib` extension.

The bibliography style determines how the references are formatted.

## 6. Understanding natbib citation commands

The `natbib` package supports different citation styles.

### Parenthetical citation

```latex
\citep{lamport}
```

Produces a parenthetical citation, according to the selected bibliography style.

### Textual citation

```latex
\citet{lamport}
```

Places the author's name as part of the sentence.

### Multiple references

```latex
\citep{lamport,knuth}
```

Cites multiple sources together.

### Adding page information

```latex
\citep[p.~25]{lamport}
```

Adds page information to the citation.

The exact punctuation and appearance depend on the selected citation and bibliography style.

## 7. Selecting a bibliography style

A bibliography style controls the appearance and ordering of references.

Examples include:

```latex
\bibliographystyle{plain}
```

```latex
\bibliographystyle{alpha}
```

```latex
\bibliographystyle{unsrt}
```

With `natbib`, common compatible styles include:

```latex
\bibliographystyle{plainnat}
```

```latex
\bibliographystyle{abbrvnat}
```

```latex
\bibliographystyle{unsrtnat}
```

Your first lab exercise specifically uses the `agu` bibliography style:

```latex
\bibliographystyle{agu}
```

This style must be available in the LaTeX installation or project for compilation to succeed.

## 8. Complete practical example

Create two files in the same folder:

```text
citation-demo/
├── main.tex
└── physics.bib
```

### File 1: physics.bib

```bibtex
@article{einstein1905,
    author  = {Albert Einstein},
    title   = {Does the Inertia of a Body Depend Upon Its Energy Content?},
    journal = {Annalen der Physik},
    year    = {1905}
}

@article{schrodinger1926,
    author  = {Erwin Schrödinger},
    title   = {Quantisierung als Eigenwertproblem},
    journal = {Annalen der Physik},
    year    = {1926}
}
```

### File 2: main.tex

```latex
\documentclass[12pt,a4paper]{article}

\usepackage{amsmath}
\usepackage{natbib}

\begin{document}

\section{Introduction}

Einstein's work on mass-energy equivalence
is an important contribution to modern physics
\citep{einstein1905}.

The relationship is expressed as:

\begin{equation}
E=mc^2
\label{eq:energy}
\end{equation}

Equation \ref{eq:energy} represents
the mass-energy relationship.

Schrödinger's work introduced a fundamental
equation in quantum mechanics
\citep{schrodinger1926}.

\begin{equation}
i\hbar\frac{\partial\Psi}{\partial t}
=
\left[
-\frac{\hbar^2}{2\mu}\nabla^2+V
\right]\Psi
\label{eq:schrodinger}
\end{equation}

Equation \ref{eq:schrodinger} describes
the time-dependent Schrödinger equation.

\bibliographystyle{plainnat}
\bibliography{physics}

\end{document}
```

## 9. Compilation sequence

When using BibTeX, compilation requires more than one LaTeX run.

Run these commands in the project directory:

```bash
pdflatex main.tex
bibtex main
pdflatex main.tex
pdflatex main.tex
```

What happens:

1. The first LaTeX run identifies citation keys and creates auxiliary information.
2. BibTeX reads the auxiliary file and the `.bib` database to generate the bibliography.
3. The next LaTeX run includes the generated bibliography.
4. The final run resolves citation and reference numbers.

If you use a different compiler or an online LaTeX editor, its bibliography workflow may be managed automatically.

## 10. Common bibliography errors

| Problem | Possible reason |
|---|---|
| Citation appears as `?` | Citation key not resolved |
| Reference missing from bibliography | Key missing or misspelled |
| BibTeX cannot find database | Incorrect `.bib` filename or path |
| BibTeX cannot find style | Required `.bst` style file unavailable |
| Bibliography does not update | Compilation sequence incomplete |
| Duplicate citation key | Two entries use the same key |

### Troubleshooting checklist

- Check spelling of every citation key.
- Confirm that the `.bib` file is in the correct directory.
- Check that the bibliography filename is correct.
- Confirm that the selected style is available.
- Run BibTeX after the first LaTeX compilation.
- Compile LaTeX again to resolve references.

## 11. Manual bibliography vs BibTeX

| Feature | thebibliography | BibTeX |
|---|---|---|
| Reference storage | Inside `.tex` file | Separate `.bib` file |
| Best suited for | Small documents | Larger documents |
| Formatting | Mostly manual | Style-driven |
| Reuse across documents | Less convenient | Convenient |
| Citation keys | `\bibitem{}` | BibTeX entry keys |
| Processing | LaTeX | LaTeX and BibTeX |

## 12. Key takeaways

- `\cite{}` inserts a citation.
- `thebibliography` creates references manually.
- `\bibitem{}` defines a reference key.
- BibTeX stores references in a separate `.bib` file.
- `natbib` supports textual and parenthetical citations.
- `\citet{}` and `\citep{}` provide different citation forms.
- `\bibliographystyle{}` selects the bibliography format.
- `\bibliography{}` includes the external bibliography.
- BibTeX requires the correct compilation sequence.
- Equation labels and citation keys serve different purposes: `\label` and `\ref` refer to document elements, while citation commands refer to sources.

---

