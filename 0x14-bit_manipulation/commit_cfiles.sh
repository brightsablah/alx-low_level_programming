#!/bin/bash

# Add and commit each c file with a custom message based on filename
for c_file in *.c; do
    filename="${c_file%.c}"  # Get the base filename without extension
    commit_message="Added $filename.c"
    
    # Add the object file to Git
    git add "$c_file"
    
    # Commit with a custom message
    git commit -m "$commit_message"
done

# Push the changes to GitHub
#git push origin master  # Replace "master" with your branch name if different
