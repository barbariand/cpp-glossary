# List out the recipies
default:
  just --list

# Script to start a listener that update the editor config
ecc:
  watchexec -e cc,h -- premake5 ecc

# Build all binaries using 'make' as per the project spec
gmake $CONFIG="Debug":
  premake5 --dc=ldc --cc=clang gmake
  make config=${CONFIG,,} $@

# Build and run a specific project using 'make'
run project $CONFIG="Debug": (gmake CONFIG)
  ./bin/${CONFIG^}/{{project}}

# Run all projects after building them
run_all $CONFIG="Debug": (gmake CONFIG)
  source ./scripts/run_all.sh

test $CONFIG="Debug": (gmake CONFIG)
  source ./scripts/test.sh
