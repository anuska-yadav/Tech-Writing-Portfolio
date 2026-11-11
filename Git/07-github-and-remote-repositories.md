# GitHub and Remote Repositories

## 1. What is GitHub?

GitHub is an online platform used to host Git repositories and support collaboration.

Git and GitHub are related, but they are not the same:

- **Git** is a version control system that tracks changes.
- **GitHub** is an online platform for hosting and collaborating on Git repositories.

## 2. Creating a GitHub Repository

To create a repository:

1. Sign in to GitHub.
2. Select **New repository**.
3. Enter a repository name.
4. Choose Public or Private visibility.
5. Select the required initialization options.
6. Create the repository.

A repository can contain project files, documentation and commit history.

## 3. Connecting a Local Repository to GitHub

The `git remote add` command connects a local repository to a remote repository.

Example:

```bash id="ex8c1n"
git remote add origin https://github.com/USERNAME/calculator.git
```

Replace `USERNAME` and the repository URL with your own details.

Here, `origin` is the name given to the remote repository.

## 4. Checking Remote Repositories

Use:

```bash id="6qwspl"
git remote -v
```

This displays the remote repository URLs used for fetching and pushing.

## 5. Renaming the Main Branch

The following command renames the current branch to `main`:

```bash id="7h6rpe"
git branch -M main
```

## 6. Uploading Changes to GitHub

The `git push` command uploads local commits to a remote repository.

```bash id="1a8bqy"
git push -u origin main
```

The `-u` option sets the upstream relationship for the branch.

After the initial setup, changes can be uploaded using:

```bash id="3h8j2p"
git push
```

## 7. Cloning a Repository

The `git clone` command creates a local copy of a remote repository.

```bash id="d7f4qz"
git clone https://github.com/USERNAME/calculator.git
```

Replace the URL with the repository you want to clone.

## 8. Fetching and Pulling Changes

### Fetching

```bash id="3b1p6m"
git fetch origin
```

Fetch downloads updates from the remote repository without automatically integrating them into the current branch.

### Pulling

```bash id="5w9r2a"
git pull
```

Pull fetches remote changes and integrates them into the current branch.

A specific remote and branch can also be given:

```bash id="9q2c7v"
git pull origin main
```

## 9. Basic Local-to-Remote Workflow

The following sequence demonstrates the basic process:

```bash id="2k6m8x"
git init
git add .
git commit -m "Initial commit"
git remote add origin REPOSITORY_URL
git branch -M main
git push -u origin main
```

Replace `REPOSITORY_URL` with the URL of your GitHub repository.

## 10. README.md

A README file introduces a repository and explains its contents.

A README can describe:

- Project name.
- Project purpose.
- Features.
- Installation.
- Usage.
- Contributors.
- License.

GitHub displays the README on the repository's main page.

## 11. Key Takeaway

GitHub hosts remote repositories, while Git manages version history locally. Remote commands such as `git push`, `git pull`, `git fetch` and `git clone` help synchronize and share project work.
