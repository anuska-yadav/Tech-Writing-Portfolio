# Ignoring, Renaming, Removing and Restoring Files

## 1. The `.gitignore` File

The `.gitignore` file tells Git which files or directories should be ignored.

These files will not be included when staging all changes with `git add .`.

### Example

Create a file named `.gitignore` and add:

```text
*.log
temp/
```

This tells Git to ignore:

- Files ending in `.log`.
- The `temp` directory.

**Note:** `.gitignore` does not automatically stop tracking files that Git already tracks.

## 2. Renaming Files

The `git mv` command renames or moves a file.

Example:

```bash
git mv old.py new.py
```

This renames `old.py` to `new.py` and stages the change.

## 3. Removing Files

The `git rm` command removes a tracked file from the working directory and stages its removal.

Example:

```bash
git rm old.py
```

## 4. Unstaging Changes

Sometimes we stage a file by mistake.

The `git restore --staged` command removes the file from the staging area without discarding its working-directory changes.

Example:

```bash
git restore --staged main.py
```

The file remains in the working directory, but its changes are no longer staged.

## 5. Discarding Working-Directory Changes

The following command restores a tracked file to its state in the latest commit:

```bash
git restore main.py
```

**Warning:** This discards unstaged changes in that file. Use it carefully.

## 6. Reverting a Commit

The `git revert` command creates a new commit that reverses the changes introduced by an earlier commit.

Example:

```bash
git revert COMMIT_ID
```

Replace `COMMIT_ID` with the actual commit identifier.

Unlike simply deleting a commit from history, reverting records a new commit that undoes its changes.

## 7. Important Differences

| Command | Purpose |
|---|---|
| `git mv` | Renames or moves a file |
| `git rm` | Removes a tracked file and stages its removal |
| `git restore --staged` | Unstages changes |
| `git restore` | Discards unstaged changes in a file |
| `git revert` | Creates a commit that reverses an earlier commit |

## 8. Key Takeaway

Git provides commands to ignore selected files, rename or remove tracked files, unstage changes, discard unstaged changes and reverse earlier commits.

**Practice carefully:** Try commands that remove or discard changes in a separate practice repository rather than experimenting on important project files.
