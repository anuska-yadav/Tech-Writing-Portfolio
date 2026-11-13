# Introduction to Version Control

## 1. What is Version Control?

Version control is a system that records changes made to files over time.

It allows us to inspect, compare and recover previous versions of our work.

### Key Capabilities

- Track modifications made to files.
- Identify who made a change and when.
- Restore earlier versions when necessary.
- Support multiple contributors working on a project.

## 2. Why Do We Need Version Control?

Consider a project developed by several people.

Without version control:
- Files may accidentally overwrite one another.
- Previous working versions may be lost.
- Finding the source of an error becomes difficult.
- Combining changes from different contributors becomes complicated.

Version control makes project changes traceable and keeps the development history organized.

## 3. Benefits of Version Control

| For Developers | For Projects |
|---|---|
| Change tracking | Organized history |
| Error recovery | Accountability |
| Branch-based development | Reproducibility |
| Better collaboration | Easier maintenance |

## 4. Types of Version Control Systems

There are three main types:

### A. Local Version Control System

Versions are managed on a single computer.

### B. Centralized Version Control System

A central server stores the project history.

Example: Subversion (SVN).

### C. Distributed Version Control System

Each clone contains the repository history.

Example: Git.

## 5. What is Git?

Git is a distributed version control system used to track changes in files and coordinate development.

### Important Features

- Maintains project history through commits.
- Supports parallel development using branches.
- Allows local version control without a network.
- Supports merging contributions from different branches.

## 6. Git vs GitHub

Git and GitHub are related, but they are not the same.

| Feature | Git | GitHub |
|---|---|---|
| Type | Version control tool | Hosting and collaboration platform |
| Location | Works locally | Provides remote repositories |
| Purpose | Tracks project changes | Shares and reviews projects |
| Network | Local work is possible offline | Online features require connectivity |

**Remember:** Git manages version history, while GitHub hosts Git repositories and provides collaboration features.

## 7. How Git Works

Git records project changes as a sequence of commits.

For example:

Initial Code → Bug Fix → New Feature

The basic process is:

1. Files are modified in the working directory.
2. Selected changes are added to the staging area.
3. A commit records the staged changes.
4. Git maintains a history that can be inspected later.

A commit represents a recorded project snapshot.

## 8. Key Takeaway

Version control helps manage changes, recover earlier work and collaborate effectively. Git provides distributed version control, while GitHub provides online hosting and collaboration.
