#!/bin/bash

# ================================================================================= #
# Script: git-init-c.sh                                                             #
# Created by: Kirno                                                                 #
# Description: This script sets up a project structure with a .gitignore, Makefile, #
#              include directory, and library directory.                            #
# ================================================================================= #

# Define the current directory
CURRENT_DIR=$(pwd)

# Source directory
INCLUDE_DIR=$CURRENT_DIR/include
LIB_DIR=$CURRENT_DIR/lib/my
SOURCE_HEADER_DIR=~/Documents/git-init-c/include
SOURCE_LIB_DIR=~/Documents/git-init-c/lib/my

# Source directories for existing files
SOURCE_GITIGNORE=~/Documents/git-init-c/.gitignore
SOURCE_MAKEFILE=~/Documents/git-init-c/Makefile

echo "#=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-[]-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=#"

# Copy the .gitignore file
cp $SOURCE_GITIGNORE $CURRENT_DIR/.gitignore

# Confirmation message
echo "# ==============================================================================
#   [OK]                        .Gitignore cp                                  #
# =============================================================================="

# Copy the main Makefile to the root directory
cp $SOURCE_MAKEFILE $CURRENT_DIR/Makefile

# Confirmation message
echo "# ==============================================================================
#   [OK]                    Makefile in root cp                                #
# =============================================================================="

# Create the include directory and copy the my_macro.h file
mkdir -p $INCLUDE_DIR
cp $SOURCE_HEADER_DIR/* $INCLUDE_DIR

# Confirmation message
echo "# ==============================================================================
#   [OK]                     Header.h mkdir and cp                             #
# =============================================================================="

# Create the lib/my directory and the Makefile for the library
mkdir -p $LIB_DIR

# Copy .c files from ~/my_script/lib/my/ to the lib/my directory in the project
cp $SOURCE_LIB_DIR/* $LIB_DIR/

# Confirmation message
echo "# ==============================================================================
#   [OK]                       Lib/my mkdir and cp                             #
# =============================================================================="

# Git commit and push
git add *
git add .gitignore
git commit -m "[ADD] Repo init with Git-Init-C Script"
git push

# Confirmation message
echo "
# ==============================================================================
#                            Script: git-init-c.sh                             #
#                              Created by: Kirno                               #
# ==============================================================================
[GIT-INIT-C] Project structure successfully created in $CURRENT_DIR
# ==============================================================================
"