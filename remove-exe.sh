#!/bin/bash

# Remove all .exe files in the current directory and subdirectories recursively.
# This lists found files, deletes them safely using find -exec, and prints a summary.

count=$(find . -type f -iname '*.exe' | wc -l)
if [ "$count" -eq 0 ]; then
  echo "No .exe files found."
  exit 0
fi

echo "Found $count .exe file(s):"
find . -type f -iname '*.exe' -print

# Delete files (batch-safe)
find . -type f -iname '*.exe' -exec rm -f {} +

echo "Deleted $count .exe file(s)."