# GitHub Collaboration and Pull Requests

## 1. Collaborating Through GitHub

GitHub provides features that allow developers to work together on projects.

The Git lecture introduces the following features:

- Issues
- Pull requests
- Code reviews
- Forking
- Projects

## 2. Pull Requests

A Pull Request (PR) is used to propose changes from one branch to another.

It allows collaborators to review changes before they are merged.

### Basic Pull Request Workflow

1. Create a new branch.
2. Make changes in that branch.
3. Stage and commit the changes.
4. Push the branch to GitHub.
5. Open a Pull Request.
6. Review the proposed changes.
7. Merge the Pull Request.

Example commands:

```bash
git switch -c feature-login
git add .
git commit -m "Add login feature"
git push -u origin feature-login
```

After pushing, create the Pull Request through the GitHub repository interface.

## 3. Code Review

Code review allows collaborators to examine proposed changes before they are merged.

It helps identify problems, discuss improvements and maintain code quality.

## 4. Forking a Repository

A fork is a personal copy of another user's repository on GitHub.

Forking allows users to work on a separate copy without directly changing the original repository.

## 5. Fork vs Clone

| Fork | Clone |
|---|---|
| Creates a copy of a repository on GitHub. | Creates a local copy of a repository. |
| Used to contribute to another repository. | Used to work with a repository on your computer. |

## 6. GitHub Issues

Issues are used to discuss and track tasks, bugs and improvements in a repository.

They help organize project-related discussions.

## 7. GitHub Projects

GitHub Projects helps organize and manage work related to a repository.

It can be used to track tasks and project progress.

## 8. Collaborative Workflow

A common collaboration process is:

1. Fork or access the project repository.
2. Clone the repository when working locally.
3. Create a separate branch.
4. Make and commit changes.
5. Push the branch.
6. Open a Pull Request.
7. Participate in code review.
8. Merge the approved changes.

## 9. Key Takeaway

GitHub supports collaboration through forks, issues, pull requests, code reviews and projects. These features help contributors propose, review and organize changes.
