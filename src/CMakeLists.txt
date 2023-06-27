cmake_minimum_required(VERSION 3.21)
project(src)

set(CMAKE_CXX_STANDARD 17)



add_library(src SHARED
        benchmarks/floating_point_benchmark.cpp
        benchmarks/floating_point_benchmark.hpp

        benchmarks/integer_benchmark.cpp
        benchmarks/integer_benchmark.hpp benchmark_controller.cpp benchmark_controller.hpp stress_test_controller.cpp stress_test_controller.hpp results/benchmark_result.hpp results/overall_result.hpp benchmarks/Benchmark.hpp)
