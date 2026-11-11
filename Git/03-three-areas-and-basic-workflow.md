# The Three Main Areas of Git

Git manages changes using three main areas.

## 1. Working Directory

The working directory contains the project files that we create or modify.

Any changes made to files initially appear here.

## 2. Staging Area

The staging area contains selected changes that are prepared for the next commit.

We use the `git add` command to move changes into this area.

## 3. Repository

The repository stores committed project history.

We use the `git commit` command to record staged changes.

## 4. Understanding the Workflow

The basic movement of changes is:

Working Directory → Staging Area → Repository

The corresponding commands are:

- `git add` — Stages selected changes.
- `git commit` — Records staged changes in the repository.

## 5. Understanding a Git Commit

A commit records a set of staged changes in the local repository.

Example:

```bash
git add main.py
git commit -m "Add main program"
```

Each commit includes:

- A unique identifier (hash).
- Author and timestamp.
- A commit message.
- References to the recorded project snapshot and its parent commit or commits.

### Writing Commit Messages

A good commit message should clearly describe the purpose of the change.

Examples:

```text
Add input validation
Fix division by zero error
Update project documentation
```

Avoid vague messages such as `changes` or `update`.

## 6. The Basic Git Workflow

The basic workflow is:

1. Edit files.
2. Stage changes.
3. Commit changes.
4. Push commits to GitHub.

### Commands to Remember

```bash
git status
git add .
git commit -m "message"
git push
```

**Note:** Configure a remote repository before pushing to GitHub.

## 7. Key Takeaway

Git separates editing, staging and committing into three areas. This allows us to select exactly which changes should become part of a commit.
