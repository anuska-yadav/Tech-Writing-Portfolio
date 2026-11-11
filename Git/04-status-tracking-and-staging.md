# Checking Status, Tracking Files and Staging Changes

## 1. Checking Repository Status

The `git status` command displays the current state of the working directory and staging area.

Command:

```bash
git status
```

It helps identify:

- Untracked files.
- Modified files.
- Staged changes ready to commit.
- Whether the working tree is clean.

For example, after creating a new file, Git reports it as untracked until it is added to the staging area.

## 2. Tracking Files with Git

The `git add` command stages a new file or its modifications.

Example:

```bash
git add main.py
```

### Workflow

1. Create or modify `main.py`.
2. Run `git status`.
3. Stage the file using `git add main.py`.
4. Run `git status` again.

**Important:** `git add` stages the file's current contents. If you modify the file again after staging it, you must stage the new changes again.

## 3. Staging Multiple Changes

Git provides different ways to stage multiple files.

### Stage all changes in the current directory

```bash
git add .
```

### Stage selected files

```bash
git add file1.py file2.py
```

### Stage files using a pattern

```bash
git add *.py
```

Review staged changes before committing.

## 4. Comparing Changes

The `git diff` command helps identify differences between file versions.

### Unstaged changes

```bash
git diff
```

Displays changes that have not yet been staged.

### Staged changes

```bash
git diff --staged
```

Displays changes that are currently in the staging area.

### Changes relative to the current commit

```bash
git diff HEAD
```

Displays tracked changes relative to the current commit, including staged and unstaged changes.

## 5. Inspecting Tracked Files

The `git ls-files` command lists files known to Git in the index.

Command:

```bash
git ls-files
```

Important points:

- It lists files tracked by Git.
- Untracked files are normally not shown.
- A listed file may have staged changes that are not yet committed.

## 6. Practical Workflow

Use the following sequence to understand file tracking:

```bash
git status
git add main.py
git status
git diff --staged
git commit -m "Add main program"
git ls-files
```

## 7. Key Takeaway

`git status` helps monitor repository changes, `git add` stages selected files, `git diff` compares changes, and `git ls-files` lists files known to Git.
