# Git Command Reference

This chapter collects the Git commands covered in the lecture and lab assignment.

## 1. Installation and Configuration

| Command | Purpose |
|---|---|
| `git --version` | Checks the installed Git version |
| `git config --global user.name "Student Name"` | Sets the username |
| `git config --global user.email "student@example.com"` | Sets the email |
| `git config --global --list` | Displays global configuration |

## 2. Repository Commands

| Command | Purpose |
|---|---|
| `git init` | Initializes a repository |
| `git status` | Displays the current repository status |
| `git ls-files` | Lists files known to Git |

## 3. Staging and Committing

| Command | Purpose |
|---|---|
| `git add main.py` | Stages a particular file |
| `git add .` | Stages changes in the current directory |
| `git add file1.py file2.py` | Stages selected files |
| `git add *.py` | Stages files matching a pattern |
| `git commit -m "message"` | Creates a commit |

## 4. Inspecting Changes and History

| Command | Purpose |
|---|---|
| `git log` | Displays commit history |
| `git log --oneline` | Displays compact commit history |
| `git diff` | Shows unstaged changes |
| `git diff --staged` | Shows staged changes |
| `git diff HEAD` | Compares tracked changes with HEAD |
| `git log --oneline --all --graph` | Displays branch history graphically |

## 5. File Management

| Command | Purpose |
|---|---|
| `git mv old.py new.py` | Renames or moves a file |
| `git rm old.py` | Removes a tracked file |
| `git restore --staged main.py` | Unstages a file |
| `git restore main.py` | Discards unstaged changes in a file |
| `git revert COMMIT_ID` | Creates a commit that reverses an earlier commit |

## 6. Remote Repository Commands

| Command | Purpose |
|---|---|
| `git remote add origin REPOSITORY_URL` | Adds a remote repository |
| `git remote -v` | Displays remote URLs |
| `git branch -M main` | Renames the current branch to `main` |
| `git push -u origin main` | Pushes and sets the upstream branch |
| `git push` | Pushes local commits |
| `git clone REPOSITORY_URL` | Clones a remote repository |
| `git fetch origin` | Fetches remote updates |
| `git pull` | Fetches and integrates remote changes |
| `git pull origin main` | Pulls changes from the remote `main` branch |

## 7. Branch Commands

| Command | Purpose |
|---|---|
| `git branch` | Lists local branches |
| `git branch feature-login` | Creates a branch |
| `git branch -m new-name` | Renames the current branch |
| `git switch feature-login` | Switches to an existing branch |
| `git switch main` | Switches to the main branch |
| `git switch -c feature-login` | Creates and switches to a branch |
| `git merge feature-login` | Merges a branch into the current branch |
| `git branch -d feature-login` | Deletes a merged branch |
| `git stash` | Temporarily saves working changes |
| `git help stash` | Displays help for the stash command |

## 8. Tags and Rebase

| Command | Purpose |
|---|---|
| `git tag` | Lists tags |
| `git tag -a v1.0.0 -m "Version 1.0.0"` | Creates an annotated tag |
| `git show v1.0.0` | Displays tag information |
| `git push origin v1.0.0` | Pushes a tag to the remote |
| `git rebase main` | Reapplies current branch commits onto `main` |

## 9. Git Help

Git provides help documentation for commands.

Example:

```bash
git help stash
```

## 10. Important Reminders

- Run Git commands from the appropriate repository directory.
- Check `git status` before staging or committing changes.
- Review staged changes before creating a commit.
- Use meaningful commit messages.
- Be careful with commands that discard or remove changes.
- Replace example branch names, file names, commit IDs and repository URLs with actual values.

