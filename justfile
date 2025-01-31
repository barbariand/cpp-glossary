# List out the recipies
default:
  just --list

# Script to start a listener that update the editor config
ecc:
  watchexec -e cc,h -- premake5 ecc

# Build all binaries using 'make' as per the project spec
gmake $CONFIG="Debug":
  bash ./scripts/gmake.sh

# Build and run a specific project using 'make'
run project $CONFIG="Debug":
  bash ./scripts/gmake.sh {{project}}
  ./bin/${CONFIG^}/{{project}}

# Run all projects after building them
run_all $CONFIG="Debug":
  bash ./scripts/gmake.sh
  bash ./scripts/run_all.sh
