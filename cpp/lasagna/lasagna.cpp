const int EXPECTED_TIME_IN_HOVEN = 40;
const int TIME_TO_PREPARE_LAYER  = 2;

// ovenTime returns the amount in minutes that the lasagna should stay in the
// oven.
int ovenTime() {
    return EXPECTED_TIME_IN_HOVEN;
}

/* remainingOvenTime returns the remaining
   minutes based on the actual minutes already in the oven.
*/
int remainingOvenTime(int actualMinutesInOven) {
    // Calculate and return the remaining in the oven based on the time
    // the lasagna has already been there.
    return ovenTime() - actualMinutesInOven;
}

/* preparationTime returns an estimate of the preparation time based on the
   number of layers and the necessary time per layer.
*/
int preparationTime(int numberOfLayers) {
    // Calculate and return the preparation time with the
    // `numberOfLayers`.
    return numberOfLayers * TIME_TO_PREPARE_LAYER;
}

// elapsedTime calculates the total time spent to create and bake the lasagna so
// far.
int elapsedTime(int numberOfLayers, int actualMinutesInOven) {
    // Calculate and return the total time so far.
    return preparationTime(numberOfLayers) + actualMinutesInOven;
}
