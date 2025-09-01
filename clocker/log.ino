


void log (uint64_t start, uint64_t stop, uint64_t iterations, uint64_t benchmark) {

    Serial.print("\n\tstart: ");
    Serial.println(start);

    Serial.print("\tstop:  ");
    Serial.println(stop);

    uint64_t total_cycles = stop - start;

    Serial.print("\ttotal cycles: ");
    Serial.println(total_cycles);

    Serial.print("\tbenchmark: ");
    Serial.println(benchmark);

    uint64_t net_cycles = total_cycles - benchmark;

    Serial.print("\tnet_cycles: ");
    Serial.println(net_cycles);

    uint64_t frequency = getCpuFrequencyMhz();

    Serial.print("\n\tfrequency: ");
    Serial.print(frequency);
    Serial.println(" MHz");

    float total_time = (float)net_cycles / frequency;

    Serial.print("\ttotal time: ");
    Serial.print(total_time);
    Serial.println(" microseconds");

    float time_per_iteration = total_time * 1000 / iterations;

    Serial.print("\tper iteration: ");
    Serial.print(time_per_iteration);
    Serial.println(" nanoseconds");    

}