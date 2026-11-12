# Practical 03 – GitHub Remote Workflow

This practical demonstrates how to work with remote GitHub repositories, connect a local repository to GitHub, clone repositories, fetch and pull remote changes, and push subsequent commits.

---

## 1. Create a GitHub Repository

On GitHub, create a new repository named `TW-Git-Practical`.

Leave the following repository initialization options unchecked so that the remote repository starts empty:

- Add a README file
- Add `.gitignore`
- Choose a license

---

## 2. Connect a Local Practice Repository

Run the following commands from the local practice repository you want to publish:

```bash
git remote add origin https://github.com/YOUR-USERNAME/TW-Git-Practical.git
git remote -v
git branch -M main
git push -u origin main
```

Replace `YOUR-USERNAME` with your GitHub username.

**Command Explanation:**

- `git remote add origin` – Connects the local repository to the remote GitHub repository.
- `git remote -v` – Displays the configured remote repository URLs.
- `git branch -M main` – Renames the current branch to `main`.
- `git push -u origin main` – Pushes the local `main` branch to GitHub and establishes upstream tracking.

---

## 3. Clone a Repository

To create a separate local copy of the remote repository, execute:

```bash
cd ~/Desktop
git clone https://github.com/YOUR-USERNAME/TW-Git-Practical.git
```

The `git clone` command downloads the remote repository and creates a local copy containing its files and commit history.

---

## 4. Fetch and Pull Remote Changes

Inside the cloned repository, execute:

```bash
git fetch origin
git pull origin main
```

**Command Explanation:**

- `git fetch origin` – Downloads updates from the remote repository without integrating them into the current branch.
- `git pull origin main` – Fetches and integrates changes from the remote `main` branch into the current branch.

---

## 5. Push a Later Commit

Make a small change to a file in the local repository, save it and execute:

```bash
git status
git add .
git commit -m "Update practical files"
git push
```

**Command Explanation:**

- `git status` – Displays the current state of the working directory and staging area.
- `git add .` – Stages the modified and new files.
- `git commit -m` – Creates a new commit with the specified message.
- `git push` – Uploads the committed changes to the remote repository.

---

## Outcome

Successfully connected a local Git repository to GitHub, cloned a remote repository, fetched and pulled remote updates, and pushed subsequent commits.