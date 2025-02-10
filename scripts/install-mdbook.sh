#!/bin/bash

set -euo pipefail
cd "$(dirname "$0")"/..
function eprintln() {
  >&2 echo "$1"
}

VERSION="0.4.44"

eprintln "Checking if mdbook $VERSION is installed"
if [[ "$(mdbook --version)" != "mdbook v$VERSION" ]]; then
  eprintln "Installing mdbook $VERSION"
  cargo install mdbook --version "$VERSION" --force
fi
eprintln "mdbook $VERSION is installed"

# Build book, using styles present in the repository.

VERSION="1.18.0"

if [[ "$(mdbook-admonish --version)" != "mdbook-admonish $VERSION" ]]; then
  eprintln "Installing mdbook-admonish $VERSION"
  cargo install mdbook-admonish --force
fi

VERSION="0.9.2"

if [[ "$(mdbook-katex --version)" != "mdbook-katex $VERSION" ]]; then
  eprintln "Installing mdbook-katex $VERSION"
  cargo install mdbook-katex --force
fi

eprintln "Installing mdbook-admonish (to book)"
mdbook-admonish install .

eprintln "Building book"
mdbook build

eprintln "Book generated at ./book/book/index.html"
