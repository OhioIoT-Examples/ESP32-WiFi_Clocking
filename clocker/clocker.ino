// SPDX-License-Identifier: MIT
// Copyright (c) 2025 OhioIoT, LLC


#include <WiFi.h>


#define ITERATIONS 10000



void setup() {

     Serial.begin(115200);

    int cnt = 0;

    #define BENCHMARK 0     // adjust whenever you change the code beyond what you are testing




    ////////////////////// SETUP //////////////////////////

    bool dummy = false;     // we iterate on this variable in the LOOP below, then we print it so
                            // that the compiler doesn't take it be un-needed code

    // bool is_connect = esp_random() != 0;     // if you are going to test a boolean, don't give it a
                                                // value the compiler can know ahead of time, like, "true"

    ///////////////////////////////////////////////////////




    uint64_t start = esp_cpu_get_cycle_count();
    while (cnt++ < ITERATIONS) {
    ////////////////////// LOOP ///////////////////////////

        dummy = !dummy; // some meaningful action placed in the loop does that the compiler doesn't eliminate it

    ///////////////////////////////////////////////////////
    }
    uint64_t stop = esp_cpu_get_cycle_count();

   





    Serial.print("\tdummy: ");
    Serial.print(dummy);        // we print here, so that the compiler believes it's operations above are meaningful

    log(start, stop, ITERATIONS, BENCHMARK);

}




void loop() {}

