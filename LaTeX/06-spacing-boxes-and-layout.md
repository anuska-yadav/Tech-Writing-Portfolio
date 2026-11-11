# Spacing, Boxes and Layout Elements in LaTeX

LaTeX provides commands to control spacing and arrange content inside boxes. These features are useful when designing structured reports, forms, title blocks and reusable layouts.

## 1. Controlling paragraph spacing

Two important lengths control paragraph formatting:

- `\parindent`: Controls the indentation at the beginning of a paragraph.
- `\parskip`: Controls the vertical space between paragraphs.

Example:

```latex
\setlength{\parindent}{2em}
\setlength{\parskip}{1em}
```

Here:
- `2em` sets the paragraph indentation relative to the current font size.
- `1em` adds vertical space between paragraphs.

## 2. Horizontal and vertical spacing

### Horizontal spacing

Use `\hspace{}` to insert horizontal space.

```latex
First\hspace{1cm}Second
```

### Vertical spacing

Use `\vspace{}` to insert vertical space.

```latex
First paragraph.

\vspace{0.5cm}

Second paragraph.
```

The argument specifies the amount of space.

## 3. Understanding boxes in LaTeX

LaTeX uses boxes to arrange and position content.

A box can contain text, graphics or other elements. Different box commands provide different levels of control over width, alignment and positioning.

## 4. Saving and reusing content with savebox

A savebox stores typeset content so it can be reused without writing it again.

The process involves three commands:

1. `\newsavebox`: Declares a box.
2. `\savebox`: Stores content inside it.
3. `\usebox`: Displays the stored content.

Example:

```latex
\newsavebox{\mybox}

\savebox{\mybox}{Some saved content}

\usebox{\mybox}
```

The same box can be used multiple times:

```latex
\usebox{\mybox}

\usebox{\mybox}
```

This is useful for repeated text, logos and formatted elements.

## 5. Paragraph boxes with parbox

The `\parbox` command creates a fixed-width box that can contain a paragraph.

Syntax:

```latex
\parbox{width}{content}
```

Example:

```latex
\parbox{5cm}{
    This text is wrapped inside a paragraph box.
    The width is fixed, so the text wraps automatically.
}
```

Useful applications:
- Placing text beside an image.
- Creating compact descriptions.
- Arranging content in side-by-side layouts.

## 6. Drawing lines and rules

The `\rule` command draws a filled rectangular rule.

Syntax:

```latex
\rule{width}{height}
```

Examples:

```latex
% Horizontal line: 3 cm wide and 1 pt thick
\rule{3cm}{1pt}

% Vertical line: 1 pt wide and 2 cm high
\rule{1pt}{2cm}
```

It can be used for separators, underlines and simple layout elements.

## 7. Adjusting vertical position with raisebox

The `\raisebox` command moves content vertically relative to its normal position.

Syntax:

```latex
\raisebox{distance}{content}
```

Example:

```latex
Normal text

\raisebox{1ex}{Raised text}

\raisebox{-1ex}{Lowered text}
```

- Positive distance moves content upward.
- Negative distance moves content downward.

This is useful when aligning text, symbols and graphics.

## 8. Creating framed boxes with framebox

The `\framebox` command creates a box with a visible border.

Syntax:

```latex
\framebox[width][alignment]{content}
```

Example:

```latex
\framebox[5cm][c]{Centered text}

\framebox[5cm][l]{Left-aligned text}

\framebox[5cm][r]{Right-aligned text}
```

Alignment options:

| Option | Meaning |
|---|---|
| `c` | Centre |
| `l` | Left |
| `r` | Right |

This is useful for highlighting short text or creating simple framed elements.

## 9. Creating unframed boxes with makebox

The `\makebox` command creates a box with a specified width and alignment but without a visible border.

Syntax:

```latex
\makebox[width][alignment]{content}
```

Example:

```latex
\makebox[4cm][c]{Centered text}

\makebox[4cm][l]{Left-aligned text}
```

The alignment options work similarly to `\framebox`.

**Difference:**

- `\framebox` displays a border.
- `\makebox` does not display a border.

Both can be used for positioning and alignment.

## 10. Combining box commands

Different box commands can be nested to create more complex layouts.

Example:

```latex
\newsavebox{\mybox}

\savebox{\mybox}{
    \parbox{4cm}{
        \framebox[4cm][c]{
            Text inside a framed box
        }
    }
}

\usebox{\mybox}
```

This combines:
- `\newsavebox` to declare a reusable box.
- `\savebox` to store the formatted content.
- `\parbox` to control paragraph width.
- `\framebox` to add a border.
- `\usebox` to display the result.

## 11. Practical example: A formatted information block

```latex
\documentclass{article}

\begin{document}

\begin{center}
    \framebox[10cm][c]{
        \parbox{8cm}{
            \centering
            \textbf{Technical Writing Portfolio}

            \vspace{0.3cm}

            Student Name\\
            Department of Engineering\\
            MNIT Jaipur
        }
    }
\end{center}

\vspace{1cm}

This document demonstrates the use of
paragraph boxes, framing and spacing.

\end{document}
```

This example combines a framed box, a paragraph box and vertical spacing to create a simple information block.

## 12. Quick comparison

| Command | Main purpose |
|---|---|
| `\hspace{}` | Horizontal spacing |
| `\vspace{}` | Vertical spacing |
| `\parindent` | Paragraph indentation |
| `\parskip` | Space between paragraphs |
| `\newsavebox` | Declares a reusable box |
| `\savebox` | Stores content |
| `\usebox` | Displays saved content |
| `\parbox` | Creates a fixed-width paragraph box |
| `\rule` | Draws a rectangular rule |
| `\raisebox` | Moves content vertically |
| `\framebox` | Creates a framed box |
| `\makebox` | Creates an unframed box |

## 13. Key takeaways

- Spacing commands help control document layout.
- Saveboxes allow content to be stored and reused.
- Parboxes are useful for fixed-width paragraph layouts.
- Rule commands create horizontal and vertical lines.
- Raisebox adjusts the vertical position of content.
- Framebox and makebox provide framed and unframed alignment.
- Combining boxes allows more complex document designs.

---

