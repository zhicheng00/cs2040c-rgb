# CS2040C RGB Example

This repo provides skeleton code for an example RGB class. You will use this as the basis for implementing operator overloading.

## Building

If you have [CMake](https://cmake.org/) building is easy:

```bash
mkdir build && cd build
cmake ..
make
```

TODO: add instructions for MSVC and XCode

## Unit Tests

Unit tests are in the `RGB_test.cpp` file and run automatically with `make test`. To add a new unit test, just add something like:

```C++
TEST(RGBTest, TestName) {
  // write test code here ...
}
```

Note that test names must be unique.

## Mixing Colours

When you mix two colours, you effectively average each of their components. So if you mix bright red RGB(240, 0, 0) and bright blue RGB(0, 0, 220) you would get something like RGB(120, 0, 110).

## Test Driven Development (TDD)

You are to work in pairs and follow TDD, aka "ping-pong programming". One partner writes a test case, and then the other partner writes the simplest code to satisfy the test case. Then the second partner writes the test case and the first writes the implementation. Continue until the tasks below are complete.

## Tasks

1. Add new method to `RGB` to mix the current colour with a given colour and return the new colour, `RGB RGB::mix(const RGB& c)`
2. Implement colour mixing as an overloaded "+" operator. If `c1` and `c2` are colours, then `RGB c3 = c1 + c2;` should result in the mix of `c1` and `c2`.
3. Write a method brighten a colour by a factor given as a real number. A factor of 1.0 means no change, while 2.0 would mean twice as bright (i.e. double each value) or 0.5 would be half as bright (i.e. halve each value).
4. Implement the method above as an overloaded "*" operator.

