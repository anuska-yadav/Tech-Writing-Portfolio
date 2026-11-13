# Git Branching and Branch Management

## 1. What is a Branch?

A branch is an independent line of development in a Git repository.

Branches allow us to work on different features or changes without directly modifying the main branch.

## 2. Why Use Branches?

Branches help us:

- Develop different features independently.
- Keep the main branch separate from unfinished work.
- Test changes before merging them.
- Work collaboratively.

## 3. Listing Branches

Use the following command to list local branches:

```bash
git branch
```

The current branch is marked with an asterisk (`*`).

## 4. Creating a Branch

To create a branch:

```bash
git branch feature-login
```

This creates a new branch named `feature-login`.

## 5. Switching Between Branches

To switch to an existing branch:

```bash
git switch feature-login
```

To return to the main branch:

```bash
git switch main
```

## 6. Creating and Switching to a Branch

We can create a branch and switch to it in one command:

```bash
git switch -c feature-login
```

## 7. Renaming a Branch

The following command renames the current branch:

```bash
git branch -m new-branch-name
```

## 8. Merging Branches

Merging combines changes from one branch into another.

For example, to merge `feature-login` into `main`:

```bash
git switch main
git merge feature-login
```

The target branch must be checked out before running the merge command.

## 9. Viewing Branch History

To display commit history from all branches in a graphical, compact format:

```bash
git log --oneline --all --graph
```

This helps visualize commits and branch development.

## 10. Deleting a Branch

After a branch has been merged and is no longer needed, it can be deleted:

```bash
git branch -d feature-login
```

Use the branch name you want to delete.

## 11. Merge Conflicts

A merge conflict occurs when Git cannot automatically combine changes from different branches.

### Understanding Conflict Markers

Git may mark conflicting sections in a file using:

```text
<<<<<<< HEAD
Changes from the current branch
=======
Changes from the other branch
>>>>>>> feature-login
```

### Resolving a Conflict

1. Open the file containing the conflict.
2. Examine both versions of the conflicting content.
3. Edit the file to keep the intended final content.
4. Remove the conflict markers.
5. Stage the resolved file.
6. Complete the merge if Git is waiting for the merge commit.

Example:

```bash
git add main.py
git commit -m "Resolve merge conflict"
```

The exact final step depends on the merge state. Follow Git's instructions if it has already completed the merge automatically.

## 12. Stashing Changes

The `git stash` command temporarily saves working changes so that you can work on something else.

```bash
git stash
```

The assignment also introduces Git's help command:

```bash
git help stash
```

It displays help documentation for the stash command.

## 13. Key Takeaway

Branching allows independent development. Commands such as `git branch`, `git switch`, `git merge`, `git log --graph` and `git stash` help manage parallel work and integrate changes.
