//
//
//

#ifndef SRC_OVERALL_RESULT_HPP
#define SRC_OVERALL_RESULT_HPP

#include "benchmark_result.hpp"

namespace csmarklib {
    class OverallResult{
    public:
        BenchmarkResult single_thread_result;
        BenchmarkResult multi_thread_result;

    };
}

#endif //SRC_OVERALL_RESULT_HPP
