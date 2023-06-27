//
//
//

#ifndef SRC_BENCHMARK_HPP
#define SRC_BENCHMARK_HPP

#include <string>
#include "../results/benchmark_result.hpp"

namespace csmarklib{

    class Benchmark{

    public:
        std::string getName();

        BenchmarkResult singleThreadBenchmark();
        BenchmarkResult nThreadBenchmark(int threadCount);

    protected:
        void performCalculation(long iteration);

        std::string name;
    };

    std::string Benchmark::getName() {
        return name;
    }

}

#endif //SRC_BENCHMARK_HPP
