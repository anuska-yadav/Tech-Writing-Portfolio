# Practical 02 — Git Branching and Stash

This practical covers Git branching, switching between branches, merging, resolving merge conflicts, deleting merged branches and temporarily saving uncommitted changes using Git stash.

## 1. Inspect and Rename a Branch

```bash
git branch
git branch -m main
git branch
```

If the branch is already named `main`, renaming is not required.

The `git branch` command displays the available local branches. The `-m` option renames the current branch.

## 2. Create and Switch to a Branch

```bash
git switch -c feature
git branch
```

The `git switch -c` command creates a new branch named `feature` and switches to it.

Create a file and commit the changes:

```bash
echo "Work on feature branch" > feature.txt
git add feature.txt
git commit -m "Add feature branch file"
```

## 3. Switch Branches and Make a Separate Change

Switch back to the `main` branch:

```bash
git switch main
```

Create another file and commit the changes:

```bash
echo "Work on main branch" > main-notes.txt
git add main-notes.txt
git commit -m "Add main branch notes"
```

This demonstrates how different branches can contain separate changes.

## 4. Merge the Feature Branch

While on the `main` branch, execute:

```bash
git merge feature
git log --oneline --all --graph
```

The `git merge` command combines the changes from the specified branch into the current branch.

The `git log --oneline --all --graph` command displays the commit history of all branches in a graphical format.

## 5. Practise a Merge Conflict

A merge conflict occurs when Git cannot automatically combine changes made to the same part of a file.

**Step 1: Create a file on the main branch and commit it.**

```bash
echo "Original shared line" > shared.txt
git add shared.txt
git commit -m "Add shared file"
```

**Step 2: Create a new branch and modify the same line.**

```bash
git switch -c conflict-demo
echo "Text from conflict branch" > shared.txt
git add shared.txt
git commit -m "Change shared line on conflict branch"
```

**Step 3: Return to the main branch and modify the same line differently.**

```bash
git switch main
echo "Text from main branch" > shared.txt
git add shared.txt
git commit -m "Change shared line on main"
```

**Step 4: Merge the conflict-demo branch.**

```bash
git merge conflict-demo
```

Git should report a merge conflict because both branches modified the same line differently.

**Step 5: Resolve the conflict.**

Open `shared.txt` in a text editor. Choose the desired final content and remove the conflict marker lines:

```text
<<<<<<< HEAD
=======
>>>>>>> conflict-demo
```

Save the resolved file and execute:

```bash
git add shared.txt
git commit
git status
```

The merge conflict is resolved and the merge is recorded in the commit history.

## 6. Delete a Merged Branch

```bash
git branch
git branch -d conflict-demo
```

The `git branch -d` command safely deletes a branch that has been merged.

## 7. Practise Git Stash

Make an uncommitted modification to `shared.txt`:

```bash
echo "Temporary unfinished work" >> shared.txt
git status
```

Temporarily save the changes:

```bash
git stash
git status
git stash list
```

Reapply the saved changes:

```bash
git stash apply
git status
```

- `git stash` temporarily saves uncommitted changes and restores the working directory to a clean state.
- `git stash list` displays the saved stash entries.
- `git stash apply` reapplies the saved changes without removing the stash entry.

## 8. Read Command Help and Inspect the Commit Graph

View the help documentation for Git stash:

```bash
git help stash
```

Display the commit history of all branches:

```bash
git log --oneline --all --graph
```

The graph provides a visual representation of branch creation, commits and merges.

## Evidence to Keep

Capture terminal screenshots showing the execution and output of important Git commands, particularly:

- Creating and switching branches.
- Merging the feature branch.
- Identifying and resolving a merge conflict.
- Deleting a merged branch.
- Saving and reapplying changes using Git stash.
- Displaying the commit graph.

---

*Git Branching and Stash | Practical 02 | Technical Writing | MNIT Jaipur*