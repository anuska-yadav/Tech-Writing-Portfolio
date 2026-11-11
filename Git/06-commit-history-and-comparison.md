# Viewing Commit History and Comparing Changes

## 1. Understanding Commit History

Every time we create a commit, Git records it in the repository history.

Commit history helps us understand:

- What changes were made.
- Who made the changes.
- When the changes were made.
- The commit message describing the changes.

## 2. Viewing Commit History

The `git log` command displays the commit history.

```bash
git log
```

It displays information such as:

- Commit hash.
- Author.
- Date.
- Commit message.

## 3. Compact Commit History

The `--oneline` option displays each commit in a compact format.

```bash
git log --oneline
```

Each line contains a shortened commit hash and its commit message.

## 4. Comparing Changes

Git provides the `git diff` command to compare different versions of files.

### Unstaged changes

```bash
git diff
```

Shows changes in the working directory that have not been staged.

### Staged changes

```bash
git diff --staged
```

Shows changes that have been staged but not yet committed.

### Comparing with the Latest Commit

```bash
git diff HEAD
```

Shows tracked changes relative to the latest commit, including staged and unstaged changes.

## 5. Viewing Tracked Files

The command below lists files known to Git in the index.

```bash
git ls-files
```

It is useful for checking which files Git is tracking.

## 6. Practical Command Sequence

Use these commands to inspect your repository:

```bash
git status
git log
git log --oneline
git diff
git diff --staged
git diff HEAD
git ls-files
```

## 7. Key Takeaway

`git log` helps us inspect commit history, while `git diff` helps us compare changes. Together, these commands make it easier to understand the development history of a project.
