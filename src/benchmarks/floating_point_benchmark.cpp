//
//
//

#include "floating_point_benchmark.hpp"

csmarklib::BenchmarkResult csmarklib::FloatingPointBenchmark::nThreadBenchmark(int threadCount) {

}

csmarklib::BenchmarkResult csmarklib::FloatingPointBenchmark::singleThreadBenchmark() {
    return csmarklib::FloatingPointBenchmark::nThreadBenchmark(1);
}
