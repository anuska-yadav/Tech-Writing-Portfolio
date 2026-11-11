# Practical 03 — GitHub Remote Workflow

This practical covers GitHub remote repository management, connecting a local repository to GitHub, cloning repositories, fetching and pulling remote changes, and pushing subsequent commits.

## 1. Create a GitHub Repository

On GitHub, create a new repository named `TW-Git-Practical`.

Leave the following repository initialization options unchecked so that the remote repository starts empty:

- Add a README file
- Add `.gitignore`
- Choose a license

## 2. Connect a Local Practice Repository

Run the following commands from the local practice repository you intend to publish:

```bash
git remote add origin https://github.com/YOUR-USERNAME/TW-Git-Practical.git
git remote -v
git branch -M main
git push -u origin main
```

Replace `YOUR-USERNAME` with your GitHub username.

- `git remote add origin` connects the local repository to the remote GitHub repository.
- `git remote -v` displays the configured remote repository URLs.
- `git branch -M main` renames the current branch to `main`.
- `git push -u origin main` pushes the local `main` branch to GitHub and establishes upstream tracking.

## 3. Clone a Repository

To create a separate local copy of the remote repository:

```bash
cd ~/Desktop
git clone https://github.com/YOUR-USERNAME/TW-Git-Practical.git
```

The `git clone` command downloads the repository and creates a local copy containing its files and commit history.

## 4. Fetch and Pull

Inside the cloned repository, execute:

```bash
git fetch origin
git pull origin main
```

- `git fetch` downloads updates from the remote repository without merging them into the current branch.
- `git pull` fetches and integrates remote updates into the current branch.

## 5. Push a Later Commit

Make a small change to a file in the local repository, save it and execute:

```bash
git status
git add .
git commit -m "Update practical files"
git push
```

These commands display the repository status, stage the changes, create a new commit and push the commit to the remote GitHub repository.

---

*GitHub Remote Workflow | Practical 03 | Technical Writing | MNIT Jaipur*