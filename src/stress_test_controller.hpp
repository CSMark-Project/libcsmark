//
//
//

#ifndef SRC_STRESS_TEST_CONTROLLER_HPP
#define SRC_STRESS_TEST_CONTROLLER_HPP


#include <cstdint>

namespace csmarklib{
    class StressTestController {

    public:
        void start();
        void start(int threads);
        void stop();

    };
}


#endif //SRC_STRESS_TEST_CONTROLLER_HPP
