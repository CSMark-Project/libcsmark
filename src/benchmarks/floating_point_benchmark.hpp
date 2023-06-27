//
//
//

#ifndef SRC_FLOATING_POINT_BENCHMARK_HPP
#define SRC_FLOATING_POINT_BENCHMARK_HPP


#include "Benchmark.hpp"

namespace csmarklib{
    class FloatingPointBenchmark : Benchmark{

        BenchmarkResult nThreadBenchmark(int threadCount);

        BenchmarkResult singleThreadBenchmark();

    };
}


#endif //SRC_FLOATING_POINT_BENCHMARK_HPP
