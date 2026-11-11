# Mathematical Typesetting in LaTeX

Mathematical typesetting is one of LaTeX's strongest features. It provides commands and environments for writing equations, fractions, matrices, calculus expressions, symbols and aligned mathematical derivations.

This chapter demonstrates common mathematical structures with practical examples.

## 1. Inline mathematics

Inline mathematics places an expression within a sentence.

Use `\( ... \)`:

```latex
Einstein's famous equation is \(E = mc^2\).
```

The expression remains part of the paragraph.

The older `$ ... $` syntax is also commonly used:

```latex
Einstein's famous equation is $E = mc^2$.
```

## 2. Display mathematics

Display mathematics places an expression on a separate centred line.

Use `\[ ... \]`:

```latex
\[
v = u + at
\]
```

Display equations are useful when an expression needs more space or emphasis.

## 3. Superscripts and subscripts

Use `^` for superscripts and `_` for subscripts.

```latex
\[
a^2 + b^2 = c^2
\]

\[
x_1 + x_2 + x_3
\]

\[
x_1^2 + x_2^2
\]
```

For expressions containing multiple characters, use braces:

```latex
\[
x^{n+1}, \qquad a_{ij}, \qquad e^{-\alpha t}
\]
```

Without braces, only the next character is treated as the superscript or subscript.

## 4. Fractions and roots

### Fractions

Syntax:

```latex
\frac{numerator}{denominator}
```

Example:

```latex
\[
x_i = \frac{\sqrt{a^2+b^2}}{c_i}
\]
```

### Square roots

```latex
\[
\sqrt{x}, \qquad \sqrt{a^2+b^2}
\]
```

### Higher-order roots

```latex
\[
\sqrt[3]{x}, \qquad \sqrt[n]{a+b}
\]
```

The optional argument specifies the root index.

## 5. Greek letters and mathematical symbols

Greek letters are generally written using a backslash followed by their names.

```latex
\[
\alpha,\ \beta,\ \gamma,\ \delta,\ \lambda,\ \pi,\ \theta
\]
```

Common mathematical relations:

```latex
\[
a \leq b,\qquad x \neq y,\qquad a \geq b
\]
```

Set and logic symbols:

```latex
\[
A \cap B,\quad A \cup B,\quad A \subseteq B
\]

\[
\forall x \in \mathbb{R},\quad
\exists \epsilon > 0
\]
```

For `\mathbb{R}`, load:

```latex
\usepackage{amsfonts}
```

The `amssymb` package also provides many additional mathematical symbols.

## 6. Sums, products and integrals

### Summation

```latex
\[
\sum_{i=1}^{n} i
\]
```

### Product

```latex
\[
\prod_{k=1}^{m} k
\]
```

### Definite integral

```latex
\[
\int_0^1 x^2\,dx
\]
```

### Improper integral

```latex
\[
\int_0^\infty e^{-x}\,dx
\]
```

Use `\,` to add a small space before the differential.

## 7. Calculus notation

Partial derivatives:

```latex
\[
\frac{\partial u}{\partial t},
\qquad
\frac{\partial^2 u}{\partial x^2}
\]
```

Ordinary derivatives:

```latex
\[
\frac{du}{dx}
\]
```

A combined expression:

```latex
\[
\frac{du}{dx}
+
\frac{\partial u}{\partial t}
=
\alpha\frac{\partial^2 u}{\partial x^2}
\]
```

## 8. Numbered equations

Use the `equation` environment to create an automatically numbered equation.

```latex
\begin{equation}
E = mc^2
\end{equation}
```

LaTeX assigns the equation number automatically.

### Suppressing equation numbers

Use the starred version:

```latex
\begin{equation*}
a^2+b^2=c^2
\end{equation*}
```

The `equation*` environment requires:

```latex
\usepackage{amsmath}
```

## 9. Labelling and referencing equations

Assign a label inside the equation and refer to it using `\ref`.

```latex
\begin{equation}
v = u + at
\label{eq:motion}
\end{equation}

Equation \ref{eq:motion} represents
the first equation of motion.
```

Use descriptive, unique labels such as:
- `eq:motion`
- `eq:energy`
- `eq:integral`

Compile again if the reference initially appears as `??`.

## 10. Aligning multiple equations

The `align` environment from `amsmath` aligns equations at positions marked by `&`.

```latex
\begin{align}
x &= 5 \\
x+y &= 3
\end{align}
```

Each line is numbered automatically.

To suppress numbering for the entire group:

```latex
\begin{align*}
x &= 5 \\
x+y &= 3
\end{align*}
```

To suppress numbering for only one line, use `\notag`:

```latex
\begin{align}
x &= 5 \notag \\
x+y &= 3
\end{align}
```

## 11. Writing long multi-line equations

Use `multline` when a long equation needs to span multiple lines.

```latex
\begin{multline}
(x+y+z)^3 = (x+y+z)(x+y+z)(x+y+z) \\
= x^3+y^3+z^3+3x^2y+3xy^2 \\
+3x^2z+3xz^2+3y^2z+3yz^2+6xyz
\end{multline}
```

The `multline` environment numbers the complete expression as one equation.

## 12. Arrays for aligned mathematical content

The `array` environment creates rows and columns inside mathematical mode.

Syntax:

```latex
\[
\begin{array}{lcr}
\text{Left} & \text{Center} & \text{Right} \\
a & b & c \\
1 & 2 & 3
\end{array}
\]
```

Column alignment:

| Character | Alignment |
|---|---|
| `l` | Left |
| `c` | Centre |
| `r` | Right |

The `&` symbol separates columns, while `\\` starts a new row.

## 13. Piecewise functions using cases

The `cases` environment is useful for defining functions whose expressions depend on conditions.

```latex
\[
f(x)=
\begin{cases}
-x, & x<0,\\
0, & x=0,\\
x^2, & x>0.
\end{cases}
\]
```

The first column contains the expression, and the second contains its condition.

The `cases` environment is provided by `amsmath`.

## 14. Matrices

The `amsmath` package provides several matrix environments.

### Matrix without delimiters

```latex
\[
\begin{matrix}
1 & 2 \\
3 & 4
\end{matrix}
\]
```

### Matrix with parentheses

```latex
\[
\begin{pmatrix}
1 & 2 \\
3 & 4
\end{pmatrix}
\]
```

### Matrix with square brackets

```latex
\[
\begin{bmatrix}
1 & 2 \\
3 & 4
\end{bmatrix}
\]
```

### Matrix with curly braces

```latex
\[
\begin{Bmatrix}
1 & 2 \\
3 & 4
\end{Bmatrix}
\]
```

### Matrix with vertical bars

```latex
\[
\begin{vmatrix}
a & b \\
c & d
\end{vmatrix}
\]
```

This is commonly used for determinants.

### Matrix with double vertical bars

```latex
\[
\begin{Vmatrix}
a & b \\
c & d
\end{Vmatrix}
\]
```

## 15. Highlighting parts of expressions with braces

Use `\underbrace` to place a brace below an expression.

```latex
\[
\underbrace{a+b+c}_{\text{First group}}
+
\underbrace{x+y+z}_{\text{Second group}}
\]
```

Use `\overbrace` to place a brace above an expression.

```latex
\[
\overbrace{a+b+c}^{\text{Column group 1}}
+
\overbrace{x+y}^{\text{Column group 2}}
\]
```

These commands are useful for explaining groups of terms in equations and matrices.

## 16. Binomial coefficients

Use `\binom{n}{k}` to typeset a binomial coefficient.

```latex
\[
F(\theta)=
\sum_{k=0}^{n}
\binom{n}{k}
\theta^k(1-\theta)^{n-k}
\]
```

This is useful in probability, combinatorics and mathematical modelling.

## 17. Practical example: Schrödinger equation

The following example demonstrates fractions, partial derivatives, Greek letters, subscripts and equation numbering.

```latex
\begin{equation}
i\hbar\frac{\partial\Psi(\mathbf{r},t)}{\partial t}
=
\left[
-\frac{\hbar^2}{2\mu}\nabla^2
+V(\mathbf{r},t)
\right]\Psi(\mathbf{r},t)
\label{eq:schrodinger}
\end{equation}
```

The equation can be referenced in the document using:

```latex
Equation \ref{eq:schrodinger} describes
the time-dependent Schrödinger equation.
```

## 18. Complete mathematical typesetting example

```latex
\documentclass[12pt,a4paper]{article}

\usepackage{amsmath,amssymb,amsfonts}

\begin{document}

\section{Mathematical Expressions}

Inline expression: \(E=mc^2\).

A displayed equation:

\[
v=u+at
\]

\section{Calculus}

\begin{equation}
\int_0^1 (3x^2+2x+1)\,dx
\end{equation}

\section{Piecewise Function}

\[
f(x)=
\begin{cases}
x^2+2x+1, & x<0,\\
\sqrt{x+1}, & 0\leq x<4,\\
x-1, & x\geq 4.
\end{cases}
\]

\section{Matrices}

\[
A=
\begin{bmatrix}
1&2&3\\
4&5&6\\
7&8&9
\end{bmatrix}
\]

\section{Aligned Equations}

\begin{align}
x+y &= 10\\
2x-y &= 5
\end{align}

\end{document}
```

## 19. Common mistakes

1. Forgetting braces around multi-character superscripts or subscripts.
2. Using `\\` outside a suitable environment.
3. Forgetting `&` between columns in arrays and matrices.
4. Declaring a different number of columns from the number of entries.
5. Using `cases`, `align` or matrix environments without loading `amsmath`.
6. Using `\ref` without defining a corresponding `\label`.
7. Forgetting that display equations and inline equations have different layouts.

## 20. Quick reference

| Requirement | LaTeX command/environment |
|---|---|
| Inline mathematics | `\( ... \)` |
| Display mathematics | `\[ ... \]` |
| Fraction | `\frac{}{}` |
| Square root | `\sqrt{}` |
| Summation | `\sum` |
| Product | `\prod` |
| Integral | `\int` |
| Numbered equation | `equation` |
| Unnumbered equation | `equation*` |
| Aligned equations | `align` |
| Long multi-line equation | `multline` |
| Piecewise function | `cases` |
| Matrix | `matrix`, `pmatrix`, `bmatrix` |
| Array | `array` |
| Underbrace | `\underbrace` |
| Overbrace | `\overbrace` |
| Binomial coefficient | `\binom{}{}` |

---

