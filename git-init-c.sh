#!/bin/bash

# ================================================================================= #
# Script: git-init-c.sh                                                             #
# Created by: Kirno                                                                 #
# Description: This script sets up a project structure with a .gitignore, Makefile, #
#              include directory, and library directory.                            #
# ================================================================================= #

CURRENT_DIR=$(pwd)

INCLUDE_DIR=$CURRENT_DIR/include
LIB_DIR=$CURRENT_DIR/lib/my
SOURCE_HEADER_DIR=~/Documents/git-init-c/include
SOURCE_LIB_DIR=~/Documents/git-init-c/lib/my

SOURCE_GITIGNORE=~/Documents/git-init-c/.gitignore
SOURCE_MAKEFILE=~/Documents/git-init-c/Makefile

echo "#=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-[]-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=#"

cp $SOURCE_GITIGNORE $CURRENT_DIR/.gitignore

echo "# ==============================================================================
#   [OK]                        .Gitignore cp                                  #
# =============================================================================="

cp $SOURCE_MAKEFILE $CURRENT_DIR/Makefile

echo "# ==============================================================================
#   [OK]                    Makefile in root cp                                #
# =============================================================================="

mkdir -p $INCLUDE_DIR
cp $SOURCE_HEADER_DIR/* $INCLUDE_DIR

echo "# ==============================================================================
#   [OK]                     Header.h mkdir and cp                             #
# =============================================================================="

mkdir -p $LIB_DIR

cp $SOURCE_LIB_DIR/* $LIB_DIR/

echo "# ==============================================================================
#   [OK]                       Lib/my mkdir and cp                             #
# =============================================================================="

git add *
git add .gitignore
git commit -m "[ADD] Repo init with Git-Init-C Script"
git push

echo "
# ==============================================================================
#                            Script: git-init-c.sh                             #
#                              Created by: Kirno                               #
# ==============================================================================
[GIT-INIT-C] Project structure successfully created in $CURRENT_DIR
# ==============================================================================
"
