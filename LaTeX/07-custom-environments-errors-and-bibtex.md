# Custom Environments, Troubleshooting, Indexing and BibTeX

This chapter covers additional LaTeX features for creating custom content blocks, debugging compilation errors, generating indexes and managing references.

## 1. The trivlist environment

The `trivlist` environment creates a simple vertical list without bullets or numbering.

Example:

```latex
\begin{trivlist}
    \item First item without a label
    \item Second item
\end{trivlist}
```

Unlike `itemize` and `enumerate`, it does not automatically display bullet points or numbers.

Each `\item` creates a new list entry.

### When is trivlist useful?

- Creating custom list environments.
- Arranging text without visible labels.
- Building theorem-like or specially formatted blocks.

## 2. Creating a custom environment using trivlist

LaTeX allows users to define their own environments using `\newenvironment`.

Example:

```latex
\newenvironment{myenv}
{\begin{trivlist}\item[]}
{\end{trivlist}}
```

Usage:

```latex
\begin{myenv}
This is a custom environment without
visible item markers.
\end{myenv}
```

Explanation:

- `\newenvironment{myenv}` defines an environment named `myenv`.
- The second argument contains the commands executed at the beginning.
- The third argument contains the commands executed at the end.
- `\item[]` creates an item without a visible label.

Custom environments help maintain consistent formatting across a document.

## 3. Understanding LaTeX compilation errors

LaTeX displays error messages when it encounters problems while processing a document.

An error message generally contains:

1. An error description.
2. The file in which the problem occurred.
3. The line where the error was detected.

Example:

```text
! Undefined control sequence.
l.249 \todzy
```

Interpretation:

- `Undefined control sequence` means LaTeX encountered a command it does not recognise.
- `l.249` indicates that the error was detected around line 249.
- `\todzy` may be a spelling mistake in a command.

The actual cause can sometimes be on an earlier line, so inspect the surrounding code too.

## 4. Common LaTeX errors

| Error message | Possible cause |
|---|---|
| Undefined control sequence | Misspelled or undefined command |
| Bad math environment delimiter | Incorrect mathematical delimiters |
| `\begin{...}` ended by `\end{...}` | Mismatched environment names |
| File not found | Missing file or incorrect path |
| Environment undefined | Environment not available or package missing |
| Missing `\begin{document}` | Document structure is incomplete |
| Lonely `\item` | An item appears outside a valid list |
| Option clash for package | A package was loaded with conflicting options |
| Too many columns in tabular | Row contains more entries than declared columns |

## 5. Example: Fixing a table error

Incorrect code:

```latex
\begin{tabular}{cc}
A & B & C
\end{tabular}
```

Problem:

The table declares only two columns using `{cc}`, but the row contains three entries.

Correct code:

```latex
\begin{tabular}{ccc}
A & B & C
\end{tabular}
```

Alternatively, remove one entry if only two columns are required.

**Rule:** The number of column entries in each row must match the declared table structure.

## 6. A systematic debugging strategy

When a LaTeX document fails to compile, follow this process:

1. Read the error message and identify the reported file and line.
2. Inspect the command and nearby lines.
3. Check for missing braces, misspelled commands and mismatched environments.
4. Undo recent changes or temporarily comment out suspicious code.
5. Recompile after making a correction.
6. If the error remains, create a minimal document containing only the problematic code.

### Example: Finding a missing brace

Incorrect:

```latex
\textbf{Important information
```

Correct:

```latex
\textbf{Important information}
```

A missing closing brace can cause errors that appear later in the document.

## 7. Overfull and underfull warnings

LaTeX may produce warnings even when compilation succeeds.

### Overfull hbox

An overfull horizontal box occurs when content is wider than the available line width.

Common causes:
- Very long words.
- Long URLs.
- Wide tables.
- Unbreakable content.

Possible solutions:
- Rewrite or rephrase the text.
- Allow appropriate line breaks.
- Resize or restructure wide content.
- Use suitable URL-breaking support for long links.

### Underfull vbox

An underfull vertical box indicates that LaTeX could not distribute vertical space ideally.

The document may still compile successfully, but its layout may look uneven.

**Important:** Warnings are not always fatal errors. Inspect the generated PDF before deciding whether a warning needs correction.

## 8. Creating an index with MakeIndex

An index helps readers locate important terms and topics in a large document.

LaTeX supports index generation through the `makeidx` package.

### Step 1: Load the package

Add this to the preamble:

```latex
\usepackage{makeidx}
\makeindex
```

### Step 2: Add index entries

Place `\index{}` commands in the document wherever a term should be indexed.

```latex
LaTeX\index{LaTeX}
Version Control\index{Version Control}
```

### Step 3: Print the index

Place this command where the index should appear:

```latex
\printindex
```

### Step 4: Compile the document

The basic sequence is:

```text
latex file
makeindex file
latex file
```

The first LaTeX run creates index information, MakeIndex processes it, and the final LaTeX run includes the generated index.

## 9. Types of index entries

MakeIndex supports different types of entries.

### Simple entry

```latex
\index{algorithm}
```

Creates a normal index entry for the term.

### Subentry

```latex
\index{algorithm!sorting}
```

Creates a nested entry under `algorithm`.

### Page range

MakeIndex also supports page-range entries using the `|(` and `|)` syntax.

```latex
\index{sorting|(}
```

```latex
\index{sorting|)}
```

These mark the beginning and ending of a page range.

### Cross-reference

```latex
\index{sorting|see{algorithms}}
```

This directs readers from one index term to another.

### Custom appearance

```latex
\index{alpha@$\alpha$}
```

The term before `@` determines sorting, while the term after `@` controls its displayed form.

## 10. Special characters in MakeIndex

Some characters have special meanings inside index entries.

Examples:

- `!` separates an entry from its subentry.
- `@` separates sorting text from display text.
- `|` introduces formatting or page-range instructions.

To include special characters as ordinary text, MakeIndex provides quoting conventions using `"`, such as:

```latex
\index{exclaim ("!)}
```

Refer to the MakeIndex conventions when creating entries containing these characters.

## 11. Managing references with BibTeX

BibTeX is a bibliography management system used with LaTeX.

It stores reference information in a separate `.bib` file and formats the bibliography according to a selected style.

### Why use BibTeX?

- Keeps references separate from document content.
- Makes references reusable.
- Supports different bibliography styles.
- Reduces manual formatting work.

### Step 1: Create a bibliography file

Create a file named `refs.bib`.

Example:

```bibtex
@book{kn:gnus,
    author = {Donald E. Knudson},
    title = {1966 World Gnus Almanac},
    publisher = {Permafrost Press},
    address = {Novosibirsk},
    year = {1966}
}
```

The key `kn:gnus` uniquely identifies this reference.

### Step 2: Cite the reference

Inside the `.tex` file:

```latex
This book is an example reference
\cite{kn:gnus}.
```

### Step 3: Select the bibliography style

At the end of the document:

```latex
\bibliographystyle{plain}
\bibliography{refs}
```

The bibliography command uses the filename without the `.bib` extension.

### Step 4: Compile

The basic compilation sequence is:

```text
latex file
bibtex file
latex file
latex file
```

The first LaTeX run collects citation information, BibTeX generates the bibliography, and subsequent LaTeX runs resolve the references.

## 12. Common BibTeX entry types

| Entry type | Typical required fields |
|---|---|
| `article` | author, title, journal, year |
| `book` | author or editor, title, publisher, year |
| `inproceedings` | author, title, booktitle, year |
| `techreport` | author, title, institution, year |
| `misc` | No universally required fields |

Additional fields can include:
- `volume`
- `number`
- `pages`
- `publisher`
- `journal`
- `address`

The fields used depend on the reference type.

## 13. Author names and title formatting in BibTeX

Multiple authors are separated using the word `and`.

```bibtex
author = {Jane Doe and John Smith}
```

Names can be written in either of these forms:

```bibtex
author = {Doe, Jane}
```

```bibtex
author = {Jane Doe}
```

To indicate additional authors:

```bibtex
author = {Jane Doe and John Smith and others}
```

### Protecting capitalisation

Some bibliography styles change title capitalisation.

Use additional braces to protect important letters:

```bibtex
title = {The {A}gon{y} of {G}nus}
```

### Defining abbreviations

BibTeX supports reusable string definitions:

```bibtex
@string{jgg1 = "Journal of Gnats and Gnus, Series 1"}
```

A reference can then use:

```bibtex
journal = jgg1
```

### Cross-references

For proceedings and book collections, the `crossref` field can refer to another BibTeX entry. This helps avoid repeating shared publication information.

## 14. MakeIndex vs BibTeX

| Feature | MakeIndex | BibTeX |
|---|---|---|
| Purpose | Generates an index | Generates a bibliography |
| Input | `\index{}` entries | `.bib` database |
| Main command | `\printindex` | `\bibliography{}` |
| Processing tool | `makeindex` | `bibtex` |
| Output | Alphabetical index | Formatted references |

These tools solve different problems and can both be used in the same document.

## 15. Practical workflow summary

### For indexing

```text
LaTeX → MakeIndex → LaTeX
```

### For bibliography

```text
LaTeX → BibTeX → LaTeX → LaTeX
```

### General debugging

```text
Read error → Locate code → Correct issue → Recompile
```

## 16. Key takeaways

- `trivlist` creates an unlabeled vertical list.
- `\newenvironment` defines reusable custom environments.
- LaTeX error messages provide clues about the problem and its location.
- Overfull and underfull warnings relate to layout.
- `makeidx` and `makeindex` generate document indexes.
- `\index{}` adds index entries and `\printindex` displays the index.
- BibTeX manages references using a `.bib` file.
- `\cite{}` inserts citations.
- `\bibliographystyle{}` selects a bibliography style.
- `\bibliography{}` includes the generated reference list.

---

