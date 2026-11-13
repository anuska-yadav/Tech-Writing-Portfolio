# Practical 02 – Git Branching and Stash

This practical demonstrates Git branching, switching between branches, merging changes, resolving merge conflicts, deleting merged branches and temporarily saving uncommitted changes using Git stash.

---

## 1. Inspect and Rename a Branch

```bash
git branch
git branch -m main
git branch
```

If the current branch is already named `main`, renaming is not required.

**Command Explanation:**

- `git branch` – Displays the available local branches.
- `git branch -m main` – Renames the current branch to `main`.

---

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

This demonstrates how changes can be made and committed independently on a separate branch.

---

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

This demonstrates how different branches can contain separate commits and changes.

---

## 4. Merge the Feature Branch

While on the `main` branch, execute:

```bash
git merge feature
git log --oneline --all --graph
```

**Command Explanation:**

- `git merge feature` – Combines the changes from the `feature` branch into the current branch (`main`).
- `git log --oneline --all --graph` – Displays the commit history of all branches in a graphical format.

---

## 5. Practise a Merge Conflict

A merge conflict occurs when Git cannot automatically combine changes made to the same part of a file.

### Step 1: Create a file on the main branch

```bash
echo "Original shared line" > shared.txt
git add shared.txt
git commit -m "Add shared file"
```

### Step 2: Create a new branch and modify the same line

```bash
git switch -c conflict-demo
echo "Text from conflict branch" > shared.txt
git add shared.txt
git commit -m "Change shared line on conflict branch"
```

### Step 3: Return to the main branch and modify the same line differently

```bash
git switch main
echo "Text from main branch" > shared.txt
git add shared.txt
git commit -m "Change shared line on main"
```

### Step 4: Merge the conflict-demo branch

```bash
git merge conflict-demo
```

Git reports a merge conflict because both branches modified the same line differently.

### Step 5: Resolve the conflict

Open `shared.txt` in a text editor. Git displays conflict markers similar to the following:

```text
<<<<<<< HEAD
Text from main branch
=======
Text from conflict branch
>>>>>>> conflict-demo
```

Choose the desired final content and remove all conflict markers.

For example, the resolved file could contain:

```text
Final resolved shared line
```

Save the file and execute:

```bash
git add shared.txt
git commit -m "Resolve merge conflict"
git status
```

The conflict is resolved, and the merge is recorded in the commit history.

---

## 6. Delete a Merged Branch

```bash
git branch
git branch -d conflict-demo
```

The `git branch -d` command safely deletes a branch that has already been merged.

---

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

**Command Explanation:**

- `git stash` – Temporarily saves tracked, uncommitted changes and restores the working directory to a clean state.
- `git stash list` – Displays the saved stash entries.
- `git stash apply` – Reapplies the saved changes without removing the stash entry.

---

## 8. Read Command Help and Inspect the Commit Graph

View the help documentation for Git stash:

```bash
git help stash
```

Display the commit history of all branches:

```bash
git log --oneline --all --graph
```

The commit graph provides a visual representation of commits, branch creation and merging.