# Colours, Figures and Picture Environment in LaTeX

LaTeX supports coloured text, mathematical expressions, imported images and drawings. These features help make technical documents more readable and visually informative.

## 1. Introducing colours with xcolor

LaTeX provides colour support through the `xcolor` package.

Load it in the preamble:

```latex
\usepackage{xcolor}
```

Use `\textcolor` to change the colour of selected text.

```latex
\textcolor{red}{Red text}

\textcolor{blue}{Blue text}

\textcolor{green}{Green text}
```

The general syntax is:

```latex
\textcolor{colour}{text}
```

## 2. Predefined colours

Some commonly used colour names are:

```latex
\textcolor{red}{Red}
\textcolor{blue}{Blue}
\textcolor{green}{Green}
\textcolor{violet}{Violet}
\textcolor{teal}{Teal}
\textcolor{brown}{Brown}
\textcolor{cyan}{Cyan}
```

The available names depend on the colour definitions and options loaded with `xcolor`.

## 3. Defining custom colours

The `\definecolor` command allows you to create your own colours.

### RGB model

RGB uses three components: red, green and blue.

```latex
\definecolor{myblue}{RGB}{10,60,200}
```

Each component is an integer between 0 and 255.

Example:

```latex
\definecolor{custompurple}{RGB}{200,20,200}
```

### HTML hexadecimal model

HTML colour notation uses a six-digit hexadecimal value.

```latex
\definecolor{softpink}{HTML}{FFB6C1}
```

The six digits represent:
- First two: red.
- Middle two: green.
- Last two: blue.

### Named colour model

A colour can also be defined by mixing named colours.

```latex
\definecolor{alert}{named}{red!80!black}
```

## 4. Mixing colours with colorlet

The `\colorlet` command creates a colour based on a mixture of existing colours.

```latex
\colorlet{myorange}{red!60!yellow}
```

This creates a colour containing a mixture of red and yellow.

Use it like any other colour:

```latex
\textcolor{myorange}{Custom orange text}
```

## 5. Applying colours to mathematical expressions

The `xcolor` package can also colour mathematical expressions.

```latex
\[
\textcolor{magenta}{E=mc^2}
\]

\[
\textcolor{orange}{\int_0^1 x^2\,dx}
\]
```

This can be useful for highlighting important terms in a derivation.

## 6. Highlighting text and creating coloured boxes

### Background highlighting

Use `\colorbox` to place a coloured background behind text.

```latex
\colorbox{yellow}{Important information}
```

### Coloured border and background

Use `\fcolorbox` to create a box with a coloured border and background.

```latex
\fcolorbox{red}{white}{Critical label}
```

Syntax:

```latex
\fcolorbox{border colour}{background colour}{content}
```

## 7. Controlling colour scope

To colour only a selected portion of text, use a group:

```latex
Normal text.

{\color{blue}
This portion is blue.
}

Normal text continues in the original colour.
```

The braces restrict the colour change to the enclosed content.

A colour declaration outside a group can affect subsequent content:

```latex
\color{gray}

All subsequent text is gray.
```

Use local groups when only a small portion should be coloured.

## 8. Importing external images

The `graphicx` package is used to insert external image files.

Load it in the preamble:

```latex
\usepackage{graphicx}
```

Basic syntax:

```latex
\includegraphics{image-file.png}
```

The image file must be available in the project directory or at the specified path.

Supported image formats depend on the compiler. With common PDF-producing workflows such as pdfLaTeX, PNG, JPG and PDF are commonly used.

## 9. Resizing images

The `\includegraphics` command supports different sizing options.

### Set width

```latex
\includegraphics[width=0.5\textwidth]{image.png}
```

### Set height

```latex
\includegraphics[height=5cm]{image.png}
```

### Set scale

```latex
\includegraphics[scale=0.5]{image.png}
```

The `\textwidth` length represents the width of the text area.

Using a relative width such as `0.5\textwidth` helps images adapt to different page layouts.

## 10. The figure environment

The `figure` environment allows an image to be treated as a floating object.

It supports:
- Image placement.
- Captions.
- Labels.
- Cross-referencing.

Example:

```latex
\begin{figure}[htbp]
    \centering
    \includegraphics[width=0.5\textwidth]{image.png}
    \caption{A sample figure}
    \label{fig:sample}
\end{figure}
```

### Understanding placement options

| Option | Meaning |
|---|---|
| `h` | Try to place here |
| `t` | Top of a page |
| `b` | Bottom of a page |
| `p` | A page containing floats |
| `!` | Relax certain placement restrictions |

For example, `[htbp]` allows LaTeX to consider several possible locations.

**Important:** These are placement preferences, not absolute guarantees. LaTeX may move a figure to achieve a better page layout.

## 11. Captions and figure references

The `\caption{}` command adds a caption to a figure.

The `\label{}` command assigns a reference key.

```latex
\begin{figure}[htbp]
    \centering
    \includegraphics[width=0.6\textwidth]{diagram.png}
    \caption{System architecture}
    \label{fig:architecture}
\end{figure}
```

Reference it in the text:

```latex
Figure \ref{fig:architecture} shows the
overall system architecture.
```

A useful convention is to place the label immediately after the caption so it captures the correct figure number.

Use descriptive labels such as:
- `fig:architecture`
- `fig:experiment`
- `fig:results`

## 12. Rotating images

Use the `angle` option to rotate an image.

```latex
\includegraphics[angle=30,width=5cm]{image.png}
```

A positive angle rotates the image counter-clockwise.

## 13. Cropping images

The `trim` and `clip` options can crop an image.

```latex
\includegraphics[
    width=\textwidth,
    trim=20 30 40 50,
    clip
]{building.png}
```

The four trim values represent:

1. Left.
2. Bottom.
3. Right.
4. Top.

The `clip` option ensures that the trimmed portions are hidden.

Cropping is useful when an image contains unnecessary borders, empty space or unwanted background areas.

## 14. Displaying multiple images side by side

The `minipage` environment creates independent blocks of a specified width.

Example:

```latex
\begin{figure}[htbp]
    \centering

    \begin{minipage}{0.45\textwidth}
        \centering
        \includegraphics[width=\linewidth]{imageA.png}
        \caption{First image}
    \end{minipage}
    \hfill
    \begin{minipage}{0.45\textwidth}
        \centering
        \includegraphics[width=\linewidth]{imageB.png}
        \caption{Second image}
    \end{minipage}

\end{figure}
```

Explanation:

- Each minipage has 45% of the text width.
- `\linewidth` refers to the width available inside the current minipage.
- `\hfill` inserts flexible horizontal space.
- Both images can be arranged on the same line if their total widths and spacing fit.

For more advanced subfigure layouts, the `subcaption` package is a modern option.

## 15. The picture environment

LaTeX also provides a built-in `picture` environment for drawing simple diagrams using coordinates.

Basic syntax:

```latex
\setlength{\unitlength}{1cm}

\begin{picture}(4,2)
    % Drawing commands
\end{picture}
```

Here:
- `(4,2)` specifies the width and height of the drawing area in coordinate units.
- `\unitlength` determines the physical size of one coordinate unit.
- `\put(x,y){...}` places an object at a coordinate.

The coordinate origin is at the lower-left corner.

## 16. Placing objects with put

Use `\put` to position objects.

```latex
\setlength{\unitlength}{1cm}

\begin{picture}(4,2)
    \put(2,1){\makebox(0,0){(2,1)}}
\end{picture}
```

The command places the text at coordinate `(2,1)`.

## 17. Drawing lines and arrows

### Lines

Use `\line` to draw a straight line.

```latex
\setlength{\unitlength}{0.5cm}

\begin{picture}(8,4)
    \put(1,1){\line(1,0){6}}
\end{picture}
```

### Arrows

Use `\vector` to draw an arrow.

```latex
\setlength{\unitlength}{0.5cm}

\begin{picture}(8,4)
    \put(1,1){\vector(1,0){5}}
\end{picture}
```

The direction pair determines the slope, and the final argument specifies the horizontal length for the vector.

## 18. Drawing circles, ovals and frames

The picture environment supports several simple shapes.

```latex
\setlength{\unitlength}{1cm}

\begin{picture}(5,3)
    \put(1,1.5){\circle{1}}
    \put(3,1.5){\circle*{0.6}}
    \put(4,2.5){\oval(1,1.5)}
    \put(4,0.5){\framebox(1,1){Text}}
\end{picture}
```

Commands:

| Command | Purpose |
|---|---|
| `\circle{}` | Draws a circle |
| `\circle*{}` | Draws a filled circle |
| `\oval(width,height)` | Draws an oval |
| `\framebox(width,height){}` | Draws a framed box |

## 19. Positioning text inside picture environments

Use `\makebox` or `\framebox` inside `\put`.

```latex
\setlength{\unitlength}{1cm}

\begin{picture}(6,2)
    \put(1,1){\makebox(0,0)[l]{Left}}
    \put(3,1){\makebox(0,0)[r]{Right}}
    \put(4,0.5){\framebox(2,0.7)[c]{Title}}
\end{picture}
```

Alignment options can control the position of the content inside the box.

## 20. Dashed boxes and stacked text

Use `\dashbox` to create a dashed rectangular box.

```latex
\setlength{\unitlength}{1cm}

\begin{picture}(5,2.5)
    \put(0.5,1){\dashbox{0.2}(3,1){Dashed}}
    \put(4,2){\shortstack{First\\Second\\Third}}
\end{picture}
```

The `\shortstack` command places multiple lines of text in a compact stack.

## 21. Drawing curves with qbezier

The `\qbezier` command draws a quadratic Bezier curve using three points:

- Starting point.
- Control point.
- Ending point.

Example:

```latex
\setlength{\unitlength}{0.1cm}

\begin{picture}(30,20)
    \qbezier(5,5)(15,25)(25,5)
\end{picture}
```

The control point determines the curvature.

## 22. Repeating objects with multiput

Use `\multiput` to place the same object repeatedly with a fixed displacement.

Syntax:

```latex
\multiput(x,y)(delta-x,delta-y){number}{object}
```

Example:

```latex
\setlength{\unitlength}{1cm}

\begin{picture}(6,2)
    \multiput(1,1)(1,0){5}{\circle*{0.2}}
\end{picture}
```

This creates five filled circles, each shifted one coordinate unit to the right.

## 23. Practical example: A simple flow diagram

The following example combines boxes, arrows and labels.

```latex
\documentclass{article}

\usepackage{graphicx}
\usepackage{xcolor}

\begin{document}

\section{System Flow}

\setlength{\unitlength}{1cm}

\begin{center}
\begin{picture}(12,3)

    \put(0,1){\framebox(2,1){Input}}

    \put(2,1.5){\vector(1,0){2}}

    \put(4,1){\framebox(2,1){Process}}

    \put(6,1.5){\vector(1,0){2}}

    \put(8,1){\framebox(2,1){Output}}

\end{picture}
\end{center}

\end{document}
```

This illustrates how the picture environment can be used to create a basic process diagram.

## 24. Common mistakes to avoid

1. Forgetting to load `xcolor` before using colour commands.
2. Forgetting to load `graphicx` before using `\includegraphics`.
3. Using an incorrect image filename or path.
4. Using `\linewidth` and `\textwidth` interchangeably without considering the current layout.
5. Forgetting `\caption` or `\label` when a figure needs referencing.
6. Placing `\label` before `\caption` in a figure.
7. Forgetting `clip` when cropping with `trim`.
8. Creating minipages whose combined widths and spacing exceed the available line width.
9. Forgetting that picture coordinates are measured using `\unitlength`.

## 25. Quick reference

| Requirement | Command |
|---|---|
| Load colours | `\usepackage{xcolor}` |
| Colour text | `\textcolor{}{}` |
| Define RGB colour | `\definecolor{}{RGB}{}` |
| Define HTML colour | `\definecolor{}{HTML}{}` |
| Mix colours | `\colorlet{}{}` |
| Highlight text | `\colorbox{}{}` |
| Coloured frame | `\fcolorbox{}{}{}` |
| Load images | `\usepackage{graphicx}` |
| Insert image | `\includegraphics{}` |
| Resize image | `width`, `height`, `scale` |
| Rotate image | `angle` |
| Crop image | `trim`, `clip` |
| Add caption | `\caption{}` |
| Add reference key | `\label{}` |
| Reference figure | `\ref{}` |
| Arrange side by side | `minipage` |
| Set drawing unit | `\setlength{\unitlength}{}` |
| Place object | `\put()` |
| Draw line | `\line()` |
| Draw arrow | `\vector()` |
| Draw circle | `\circle{}` |
| Draw curve | `\qbezier()` |
| Repeat objects | `\multiput()` |

---

