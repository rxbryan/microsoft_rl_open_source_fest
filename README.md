# Feature Engineering in VW using LUA: Screening exercise 2

This project contains the code and files created from completing the tasks in Screening `Exercise 2: Working with Lua`.

## Building and Running the code

The following prerequisites need to be installed before building the project.

- [Lua](https://www.lua.org/) library. You can install Pre-compiled Lua libraries and executables or Build lua from source using the instructions on there [website](https://www.lua.org/start.html).

Lua `5.3.6` was used for this project.

You may need to set `-fPIC` CFLAG when building from source, if you run into linker troubles. 

- [Luacpp](https://github.com/jordanvrtanoski/luacpp) by Jordan Vrtanoski. Clone and build the library using the instructions from the project [site](https://github.com/jordanvrtanoski/luacpp).

#### Building the code

Clone this repository and go to the location of the cloned repo.
From the root of the project, invoke:

```sh
mkdir build
cd build
cmake -S ..
make
```

#### Running the code

Run the code by invoking the resulting executable in the build directory.

```sh
./screening_exercise_2
```

#### Output from Exercise 2

![Screenshot from 2023-03-27 12-08-50](https://user-images.githubusercontent.com/33056740/227925672-732a3204-d053-4a55-95b3-8e08848d168f.png)

```sh
lord-bryan@toxic-mould:~/projects/rlos/exercise_2$ ./screening_exercise_2 
Bryan Elee says hello
25.0
2023
```