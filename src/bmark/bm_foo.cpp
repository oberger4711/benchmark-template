#include <benchmark/benchmark.h>
#include "../lib/lib.h"

static void BM_foo(benchmark::State& state)
{
  for (auto _ : state)
  {
    foo();
  }
}
BENCHMARK(BM_foo);

BENCHMARK_MAIN();
