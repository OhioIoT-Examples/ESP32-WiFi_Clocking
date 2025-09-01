
#include <WiFi.h>


#define ITERATIONS 10000


void log(uint64_t, uint64_t, uint64_t, uint64_t);

void setup() {

    Serial.begin(115200);

    int cnt = 0;

    #define BENCHMARK 0     // adjust whenever you change the code beyond what you are testing

    ////////////////////// SETUP //////////////////////////

    bool dummy = false;


    ///////////////////////////////////////////////////////



    uint64_t start = esp_cpu_get_ccount();
    while (cnt++ < ITERATIONS) {
    ////////////////////// LOOP ///////////////////////////

        dummy = !dummy; // some meaningful action
        
   

    ///////////////////////////////////////////////////////
    }
    uint64_t stop = esp_cpu_get_ccount();

    Serial.print("\tdummy: ");
    Serial.print(dummy);        // the compiler executes the above code only if we use that value somewhere

    log(start, stop, ITERATIONS, BENCHMARK);

}




void loop() {}

