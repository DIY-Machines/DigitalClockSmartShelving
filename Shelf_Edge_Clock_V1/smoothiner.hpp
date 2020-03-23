//Smoothing of the readings from the light sensor so it is not too twitchy

struct Smoothiner {

  const int numReadings() const {

    return sizeof readings / sizeof readings[0];
  }

  void addReading(long reading) {

    readings[current] = reading;
    ++current;

    // if we're at the end of the array move the index back around...
    if (current == numReadings()) {

      current = 0;
    }

#if DEBUG
    Serial.print("Light sensor value added to array = ");
    Serial.println(reading);
#endif //DEBUG
  }

  long const getAverage() const {

    // now work out the sum of all the values in the array
    int average = 0;
    for (int i=0; i < numReadings(); ++i) {

      average += readings[i];
    }

  #if DEBUG
    Serial.print("Sum of the brightness array = ");
    Serial.println(average);
  #endif //DEBUG

    // and calculate the average:
    average /= numReadings();

  #if DEBUG
    Serial.print("Average light sensor value = ");
    Serial.println(average);
  #endif //DEBUG

    return average;
  }

  long readings[12]; // the readings from the analog input
  long current;
  long total;
  long average;
};
