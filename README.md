# google-test-with-cmake

Google TestをCMakeで使うサンプル

## How to build

- Requirements
    - 普通のC++コンパイラ(ClangとかGCCとか)
    - [CMake](https://cmake.org/)

```sh
cd /path/to/google-test-with-cmake

git git submodule update --init
cmake -H. -Bbuild

cmake --build build
#=> ./build/hoge-main
#=> ./build/hoge-test
#=> という2つのバイナリが生成される

./build/hoge-test
#=> Testが実行される
```
