# Practical 02 — Git Branching and Stash

Use a separate practice repository, not your portfolio repository. This guide covers the branching assignment topics recorded for the course.

## 1. Inspect and rename a branch

```bash
git branch
git branch -m main
git branch
```

If the branch is already named `main`, you do not need to rename it.

## 2. Create and switch to a branch

```bash
git switch -c feature
git branch
```

Create or edit a file, then commit the change:

```bash
echo "Work on feature branch" > feature.txt
git add feature.txt
git commit -m "Add feature branch file"
```

## 3. Switch branches and make a separate change

```bash
git switch main
echo "Work on main branch" > main-notes.txt
git add main-notes.txt
git commit -m "Add main branch notes"
```

## 4. Merge the feature branch

```bash
git merge feature
git log --oneline --all --graph
```

Run the merge while on `main`. The feature branch's changes are merged into the current branch.

## 5. Practise a merge conflict

Create a file on `main` and commit it:

```bash
echo "Original shared line" > shared.txt
git add shared.txt
git commit -m "Add shared file"
```

Create a branch and change the same line:

```bash
git switch -c conflict-demo
echo "Text from conflict branch" > shared.txt
git add shared.txt
git commit -m "Change shared line on conflict branch"
```

Return to `main` and change that same line differently:

```bash
git switch main
echo "Text from main branch" > shared.txt
git add shared.txt
git commit -m "Change shared line on main"
```

Now merge:

```bash
git merge conflict-demo
```

Git should report a conflict because both branches changed the same line. Open `shared.txt`, choose the final content, and remove the conflict marker lines (`<<<<<<<`, `=======`, and `>>>>>>>`). Then:

```bash
git add shared.txt
git commit
git status
```

## 6. Delete a merged branch

```bash
git branch
git branch -d conflict-demo
```

The `-d` option safely deletes a branch that has been merged.

## 7. Practise stash

Make an uncommitted edit:

```bash
echo "Temporary unfinished work" >> shared.txt
git status
git stash
git status
git stash list
git stash apply
git status
```

`git stash` temporarily stores uncommitted changes. `git stash apply` reapplies the stored changes.

## 8. Read command help and inspect the graph

```bash
git help stash
git log --oneline --all --graph
```

## Completion checklist

- [ ] Inspect and rename a branch
- [ ] Create and switch to a branch
- [ ] Commit changes on separate branches
- [ ] Merge a branch
- [ ] Create and resolve a merge conflict
- [ ] Delete a merged branch
- [ ] Save and reapply work with stash
- [ ] Open help for stash
- [ ] Display the commit graph
