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
2. Ensure the necessary source files exist in `~/my_scripts/git-init-c/`.
3. Run the script:
   ```bash
   ./git-init-c.sh
   ```
4. The project structure will be created, and the changes will be committed and pushed to your Git repository.

## Requirements
- Bash shell
- Git installed
- Create dir ~/my_scripts/git-init-c/
