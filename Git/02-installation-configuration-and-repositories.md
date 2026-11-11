# Git Installation, Configuration and Repositories

## 1. Installing Git

Git can be installed on Windows, Linux and macOS.

### Windows
Download Git from:

https://git-scm.com/downloads

### Ubuntu / Debian Linux

```bash
sudo apt update
sudo apt install git
```

### macOS

Using Homebrew:

```bash
brew install git
```

## 2. Verifying Git Installation

After installation, check whether Git is available.

Command:

```bash
git --version
```

Example output:

```text
git version 2.x.x
```

The version number depends on the installed release.

## 3. Configuring Git

Git uses configuration values to identify the author of commits.

### Setting the Username

```bash
git config --global user.name "Student Name"
```

### Setting the Email

```bash
git config --global user.email "student@example.com"
```

Replace the example values with your own details.

### Verifying Configuration

```bash
git config --global --list
```

These settings identify the commit author. They do not authenticate the user to GitHub.

## 4. What is a Git Repository?

A Git repository stores project history and the information required to track changes.

A project may contain files such as:

- `main.py`
- `README.md`
- `data.csv`
- `requirements.txt`

Git stores its repository metadata in a hidden directory named `.git`.

## 5. Creating a Git Repository

Follow these steps to initialize a project.

### Step 1: Create a project directory

```bash
mkdir my-project
```

### Step 2: Enter the directory

```bash
cd my-project
```

### Step 3: Initialize Git

```bash
git init
```

### Explanation of Commands

| Command | Purpose |
|---|---|
| `mkdir` | Creates a directory |
| `cd` | Changes the current directory |
| `git init` | Initializes a Git repository |

After running `git init`, Git creates a repository in the current directory.

## 6. Key Takeaway

Git must be installed and configured before it can be used effectively. The `git init` command initializes a repository and enables Git to track project changes.
