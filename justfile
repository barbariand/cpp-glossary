# List out the recipies
default:
  just --list

# Script to start a listener that update the editor config
ecc:
  watchexec -e cc,h -- premake5 ecc

# Build all binaries using 'make' as per the project spec
gmake config="Debug":
  premake5 --dc=ldc gmake
  make config=$(echo {{config}} | tr '[:upper:]' '[:lower:]')

# Build and run a specific project using 'make'
run project config="Debug":
  premake5 --dc=ldc gmake
  make config=$(echo {{config}} | tr '[:upper:]' '[:lower:]') {{project}}
  ./bin/{{config}}/{{project}}

run_all config="Debug":
  premake5 --dc=ldc gmake
  make config=$(echo {{config}} | tr '[:upper:]' '[:lower:]')
  bash ./scripts/run_all.sh

# Build a visual studio solution file with a specific version (year)
visual_studio version:
  premake5 --dc=ldc vs{{version}}
