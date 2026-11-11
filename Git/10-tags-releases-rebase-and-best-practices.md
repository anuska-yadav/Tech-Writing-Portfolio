# Tags, Releases, Rebase and Git Best Practices

## 1. Git Tags

A tag is used to mark a specific point in the repository's history.

Tags are commonly used to identify important versions of a project.

### Listing Tags

```bash
git tag
```

Displays the tags in the repository.

### Creating an Annotated Tag

```bash
git tag -a v1.0.0 -m "Version 1.0.0"
```

This creates an annotated tag named `v1.0.0`.

### Viewing Tag Information

```bash
git show v1.0.0
```

Displays information about the specified tag.

### Pushing a Tag to GitHub

```bash
git push origin v1.0.0
```

Uploads the specified tag to the remote repository.

## 2. Git Releases

GitHub Releases are used to publish important versions of a project.

A release can be associated with a Git tag and can include information about the version.

Tags identify points in Git history, while GitHub Releases provide a way to present those versions to users.

## 3. Git Merge vs Git Rebase

Both merge and rebase are used to integrate changes from different branches, but they work differently.

### Git Merge

Merge combines changes from another branch into the current branch.

```bash
git switch main
git merge feature-login
```

### Git Rebase

Rebase moves or reapplies commits from the current branch onto another branch.

Example:

```bash
git rebase main
```

This reapplies the current branch's commits on top of `main`.

### Comparison

| Git Merge | Git Rebase |
|---|---|
| Combines branch histories. | Reapplies commits onto another base. |
| May create a merge commit. | Creates new commits with new commit identifiers. |
| Preserves the branching history. | Produces a more linear history. |

## 4. Common Git Errors

Some common problems encountered while using Git include:

- Git is not installed or is not available in the terminal.
- Git username or email is not configured.
- A file has not been staged before committing.
- A remote repository has not been configured.
- Push is rejected because the remote contains changes.
- A merge conflict occurs.

### Checking Configuration

```bash
git config --global --list
```

### Checking Remote Configuration

```bash
git remote -v
```

### Checking Repository Status

```bash
git status
```

These commands help identify the current configuration and repository state.

## 5. Authentication and Security

GitHub supports authentication methods such as HTTPS and SSH.

The lecture introduces:

- Personal Access Tokens (PATs).
- SSH keys.
- Avoiding the storage of passwords or secrets in repository files.

Never commit passwords, tokens or other private credentials to a repository.

## 6. Git Best Practices

The lecture highlights the following practices:

1. Write meaningful commit messages.
2. Commit changes regularly.
3. Use branches for separate features.
4. Review changes before committing.
5. Keep project documentation updated.
6. Avoid committing unnecessary files.
7. Do not store passwords or secrets in repositories.

## 7. Key Takeaway

Tags identify important versions, releases help publish versions, merge and rebase integrate branch changes, and good Git practices help maintain an organized repository.
