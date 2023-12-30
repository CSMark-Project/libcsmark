use crate::results::benchmark_result::BenchmarkResult;

pub struct OverallResult{
    single_thread_result: BenchmarkResult,
    multi_thread_result: BenchmarkResult
}