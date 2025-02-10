#!/bin/bash

MDBOOK_VERSION="0.4.44"
ADMONISH_VERSION="1.18.0"
KATEX_VERSION="0.9.2"

set -euo pipefail
cd "$(dirname "$0")"/..
function eprintln() {
  >&2 echo "$1"
}


eprintln "Checking if mdbook $MDBOOK_VERSION is installed"
if [[ "$(mdbook --version)" != "mdbook v$MDBOOK_VERSION" ]]; then
  eprintln "Installing mdbook $MDBOOK_VERSION"
  cargo install mdbook --version "$MDBOOK_VERSION" --force
fi
eprintln "mdbook $MDBOOK_VERSION is installed"

# Build book, using styles present in the repository.


if [[ "$(mdbook-admonish --version)" != "mdbook-admonish $ADMONISH_VERSION" ]]; then
  eprintln "Installing mdbook-admonish $ADMONISH_VERSION"
  cargo install mdbook-admonish --force
fi

eprintln "mdbook $ADMONISH_VERSION is installed"

if [[ "$(mdbook-katex --version)" != "mdbook-katex $KATEX_VERSION" ]]; then
  eprintln "Installing mdbook-katex $KATEX_VERSION"
  cargo install mdbook-katex --force
fi

eprintln "mdbook $KATEX_VERSION is installed"
eprintln "Installing mdbook-admonish (to book)"
mdbook-admonish install .

eprintln "Building book"
mdbook build

eprintln "Book generated at ./book/book/index.html"
