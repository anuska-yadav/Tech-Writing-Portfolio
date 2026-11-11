# Practical 03 — GitHub Remote Workflow

This is a separate remote-workflow exercise. Do not connect this sandbox to your existing `Tech-Writing-Portfolio` remote.

## 1. Create a separate GitHub repository

On GitHub, create a new repository named `TW-Git-Practical`. For this exercise, leave README, `.gitignore`, and license initialization unchecked so the remote repository starts empty.

## 2. Connect your local practice repository

Run these commands from the local practice repository you intend to publish:

```bash
git remote add origin https://github.com/YOUR-USERNAME/TW-Git-Practical.git
git remote -v
git branch -M main
git push -u origin main
```

Replace `YOUR-USERNAME` with your GitHub username.

## 3. Clone a repository

To create a separate local copy:

```bash
cd ~/Desktop
git clone https://github.com/YOUR-USERNAME/TW-Git-Practical.git
```

## 4. Fetch and pull

Inside the cloned repository:

```bash
git fetch origin
git pull origin main
```

`git fetch` downloads remote updates without merging them into your current branch. `git pull` fetches and integrates updates into the current branch.

## 5. Push a later commit

Make a small change, then:

```bash
git status
git add .
git commit -m "Update practical files"
git push
```

## Completion checklist

- [ ] Create a separate empty GitHub repository
- [ ] Add and inspect the remote
- [ ] Push the main branch
- [ ] Clone the remote repository
- [ ] Practise fetch and pull
- [ ] Push a later commit

**Safety reminder:** Use only the separate `TW-Git-Practical` remote for this exercise. Never replace the `origin` remote of your portfolio repository.
