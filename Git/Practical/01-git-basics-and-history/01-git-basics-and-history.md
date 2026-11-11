# Practical 01 — Git Basics

**Based on Assignment 8: Git Basics (12 tasks).**

## Important: use a separate practice repository

Do not run these exercises inside your `Tech-Writing-Portfolio` repository. This practical creates a separate folder on your Desktop so that commands such as `git rm` and `git checkout` cannot affect your portfolio.

## Task 1 — Initialize a repository

```bash
cd ~/Desktop
mkdir Git-Basics-Practice
cd Git-Basics-Practice
git init
```

## Task 2 — Configure Git username and email

Replace the example values with your own details:

```bash
git config user.name "Your Name"
git config user.email "your-email@example.com"
git config user.name
git config user.email
```

These settings apply only to this practice repository.

## Task 3 — Create and stage `readme.txt`

Create a file named `readme.txt` and paste the contents from the sample file supplied with this practical. You can create it in VS Code, or use:

```bash
echo "Git Basics Practical" > readme.txt
echo "This file is used to practise Git commands." >> readme.txt
git add readme.txt
git status
```

**What to observe:** Git reports the file under “Changes to be committed”. It is staged but not committed yet.

## Task 4 — Commit the file

```bash
git commit -m "Adding first file"
git status
```

**What to observe:** The working tree should be clean because the staged change has been committed.

## Task 5 — Modify the file and inspect the difference

Add one more line to `readme.txt` using your editor, save it, and run:

```bash
git diff
```

**What to observe:** The added line is shown with a `+` sign. `git diff` displays unstaged changes.

## Task 6 — Discard unstaged changes

```bash
git restore readme.txt
cat readme.txt
git status
```

The uncommitted modification is discarded and the file returns to its last committed content.

### Also practise removing a file from the staging area

Make another edit to `readme.txt`, then:

```bash
git add readme.txt
git status
git restore --staged readme.txt
git status
git restore readme.txt
cat readme.txt
```

`git restore --staged` unstages the change; it does not discard the edited content. The second `git restore` discards the remaining unstaged edit.

## Task 7 — Make another commit and inspect history

Append a new line to `readme.txt`, then:

```bash
git add readme.txt
git commit -m "Updating readme"
git status
git log
git log --oneline
```

`git log` displays detailed commit history; `git log --oneline` displays a compact view.

## Task 8 — Revert a commit

Use the hash of the commit whose changes you want to undo:

```bash
git log --oneline
git revert <commit-hash>
git log --oneline
git status
```

Git may open an editor to confirm the revert commit message. Save and close the editor to complete the revert.

**Important:** `git revert` creates a new commit that reverses an earlier commit. It does not delete the earlier commit from history.

## Task 9 — Add and commit the Python program

Copy the supplied `vecadd.py` file into this practice folder. In this assignment, the program calculates the **dot product** of two vectors.

```bash
python3 vecadd.py
git add vecadd.py
git commit -m "Adding python file"
git log --oneline
```

Expected output for the supplied vectors:

```text
Dot product: 32
```

## Task 10 — Remove `readme.txt`

```bash
git rm readme.txt
git status
git commit -m "Removing README file"
git log --oneline
```

`git rm` removes the tracked file from the working directory and stages its deletion.

## Task 11 — Check out an earlier commit

First inspect the history and copy an earlier commit hash:

```bash
git log --oneline
git checkout <earlier-commit-hash>
git status
ls
```

You are now viewing the repository at that historical commit. This is usually a detached-HEAD state; you have not created a new commit just by checking it out.

## Task 12 — Return to the main branch

```bash
git checkout main
git status
git log --oneline
ls
```

If your initial branch was named `master`, use `git checkout master` instead.

## Assignment 8 completion checklist

- [ ] Task 1: `git init`
- [ ] Task 2: local username and email configuration
- [ ] Task 3: create, stage, and inspect `readme.txt`
- [ ] Task 4: commit and verify status
- [ ] Task 5: modify file and inspect `git diff`
- [ ] Task 6: practise both forms of `git restore`
- [ ] Task 7: make a commit and inspect `git log`
- [ ] Task 8: undo a commit with `git revert`
- [ ] Task 9: run and commit the dot-product program
- [ ] Task 10: remove `readme.txt` with `git rm`
- [ ] Task 11: check out an earlier commit
- [ ] Task 12: return to `main` and verify status

**Evidence to keep:** screenshots of the terminal after each task, especially `git status`, `git diff`, `git log --oneline`, the revert, and the checkout/return steps.
