# Doxygen Comment Syntax and Documentation Tags

## 1. Doxygen Comment Syntax

Doxygen extracts documentation from specially formatted comments written in source code.

For C++, a documentation comment can be written using `/** ... */`.

### Example

```cpp
/**
 * \brief Brief description of the function.
 *
 * Longer detailed explanation.
 * \param x A parameter description.
 * \return Description of the return value.
 */
int myFunction(int x);
```

### Explanation

- `/** ... */` marks a documentation comment.
- `\brief` provides a short description.
- The following lines can contain a longer explanation.
- `\param` describes a function parameter.
- `\return` describes the value returned by a function.

## 2. Common Doxygen Tags

The lecture introduces the following documentation tags:

| Tag | Purpose |
|---|---|
| `\brief` | Short summary of a function, class or module |
| `\param` | Describes a function parameter |
| `\return` | Describes the return value |
| `\author` | Specifies author information |
| `\version` | Specifies the version |
| `\see` | Refers to related items |
| `\note` | Adds additional notes |

## 3. Documenting a Function

Consider the following function:

```cpp
/**
 * \brief Adds two numbers.
 * \param a First number.
 * \param b Second number.
 * \return Sum of the two numbers.
 */
int add(int a, int b);
```

Here:
- `\brief` explains the purpose of the function.
- Each `\param` describes one parameter.
- `\return` explains what the function returns.

## 4. Documenting a Class

Doxygen can also document classes and their member functions.

### Example

```cpp
/**
 * \class Car
 * \brief Represents a car object.
 *
 * Details about the class.
 */
class Car {
public:
    /**
     * \brief Starts the engine.
     * \return True if successful.
     */
    bool startEngine();
};
```

The `\class` command identifies the class being documented, while `\brief` provides its short description.

## 5. Doxygen Comments in Python

The lecture also demonstrates documentation comments in Python using docstrings.

```python
def foo(bar):
    """
    Brief description.
    More details here.

    :param bar: Bar parameter
    :type bar: int
    :return: Computed value
    :rtype: int
    """
    return bar + 1
```

## 6. Important Point

Doxygen comments explain the purpose and behaviour of code elements. They help generate readable documentation for functions, classes and modules.
