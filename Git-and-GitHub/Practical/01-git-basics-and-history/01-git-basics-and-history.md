# Practical 01 – Git Basics and History

This practical demonstrates fundamental Git commands and operations, including repository initialization, configuration, staging, committing, inspecting changes, restoring files, managing commit history and navigating between commits.

---

## Task 1 – Initialize a Repository

```bash
cd ~/Desktop
mkdir Git-Basics-Practice
cd Git-Basics-Practice
git init
```

This creates a directory named `Git-Basics-Practice` and initializes it as a new Git repository.

---

## Task 2 – Configure Git Username and Email

Replace the example values with your own details:

```bash
git config user.name "Your Name"
git config user.email "your-email@example.com"
git config user.name
git config user.email
```

These commands configure the username and email for the current repository and display the configured values.

---

## Task 3 – Create and Stage `readme.txt`

Create a file named `readme.txt` and paste the contents from the sample file supplied with this practical.

Alternatively, create the file using:

```bash
echo "Git Basics Practical" > readme.txt
echo "This file is used to practise Git commands." >> readme.txt
git add readme.txt
git status
```

**Observation:** Git reports the file under `Changes to be committed`. This means the file has been staged but not committed yet.

---

## Task 4 – Commit the File

```bash
git commit -m "Adding first file"
git status
```

**Observation:** The working tree should be clean because the staged changes have been committed.

---

## Task 5 – Modify the File and Inspect the Difference

Add another line to `readme.txt` using a text editor and save the file.

Run:

```bash
git diff
```

**Observation:** The added line is displayed with a `+` sign. The `git diff` command displays changes in the working directory that have not yet been staged.

---

## Task 6 – Discard Unstaged Changes

```bash
git restore readme.txt
cat readme.txt
git status
```

The `git restore` command discards the unstaged modifications and restores the file to its last staged or committed content.

### Remove a File from the Staging Area

Make another edit to `readme.txt`, then execute:

```bash
git add readme.txt
git status
git restore --staged readme.txt
git status
git restore readme.txt
cat readme.txt
```

**Command Explanation:**

- `git add readme.txt` – Stages the modified file.
- `git restore --staged readme.txt` – Removes the changes from the staging area without discarding the edited content.
- `git restore readme.txt` – Discards the remaining unstaged modifications and restores the last committed version.

---

## Task 7 – Make Another Commit and Inspect History

Append a new line to `readme.txt`, save the file and execute:

```bash
git add readme.txt
git commit -m "Updating readme"
git status
git log
git log --oneline
```

**Command Explanation:**

- `git log` – Displays the detailed commit history.
- `git log --oneline` – Displays a compact version of the commit history.

---

## Task 8 – Revert a Commit

Inspect the commit history and copy the hash of the commit whose changes you want to undo.

```bash
git log --oneline
git revert <commit-hash>
git log --oneline
git status
```

Git may open an editor to confirm the revert commit message. Save and close the editor to complete the operation.

**Observation:** The `git revert` command creates a new commit that reverses the changes introduced by an earlier commit. It does not delete the earlier commit from the history.

---

## Task 9 – Add and Commit the Python Program

Copy the supplied `vecadd.py` file into the practice repository.

The program calculates the **dot product** of two vectors.

Execute:

```bash
python3 vecadd.py
git add vecadd.py
git commit -m "Adding python file"
git log --oneline
```

**Expected Output:**

```text
Dot product: 32
```

---

## Task 10 – Remove `readme.txt`

```bash
git rm readme.txt
git status
git commit -m "Removing README file"
git log --oneline
```

The `git rm` command removes the tracked file from the working directory and stages its deletion.

The deletion is permanently recorded in the repository history after committing.

---

## Task 11 – Check Out an Earlier Commit

Inspect the commit history and copy the hash of an earlier commit.

```bash
git log --oneline
git checkout <earlier-commit-hash>
git status
ls
```

This switches the repository to the selected historical commit.

**Observation:** Git usually enters a detached HEAD state when checking out a commit directly. The repository displays the files as they existed at that particular point in history.

---

## Task 12 – Return to the Main Branch

```bash
git checkout main
git status
git log --oneline
ls
```

If the initial branch was named `master`, use `git checkout master` instead.

This returns the repository to the main branch and displays its current status and commit history.

---