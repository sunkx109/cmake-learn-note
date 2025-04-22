rm -rf build
cmake . -B build -DENABLE_TESTS=ON
cmake --build build