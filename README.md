# Git-Init-C Script

## Overview

This is a simple Bash script, `git-init-c.sh`, that sets up the basic structure for a C project. It includes copying necessary files like `.gitignore`, `Makefile`, and header files, and creating a library folder for C source files.

## Features

- Sets up a `.gitignore` file.
- Creates a `Makefile`.
- Creates an `include` directory with header files.
- Creates a `lib/my` directory for your C library files.
- Automatically commits and pushes the changes to your Git repository.

## How to Use

1. Clone this repository or download the script.
2. Ensure the necessary source files exist in `~/Documents/git-init-c/` (everything but .sh).
3. Move the .sh file to a folder on your computer and name it `~/my_script/git-init-c.sh`
4. Run the script:
   ```bash
   ./git-init-c.sh
   ```
5. The project structure will be created, and the changes will be committed and pushed to your Git repository.

## Requirements
- Bash shell
- Git installed
- Create dir ~/my_scripts/ (for .sh)
- Create dir ~/Documents/git-init-c/ (for base repo)
