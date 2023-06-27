//
//
//

#ifndef SRC_BENCHMARK_RESULT_HPP
#define SRC_BENCHMARK_RESULT_HPP


namespace csmarklib{
    class BenchmarkResult {

    public:
        int numberOfThreadsUsed;
        double overall_score;
        double integer_score;
        double floating_point_score;
    };
}


#endif //SRC_BENCHMARK_RESULT_HPP
