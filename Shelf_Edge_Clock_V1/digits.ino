void digitZero(long offset, int colour){
    stripClock.fill(colour, (0 + offset), 27);
    stripClock.fill(colour, (36 + offset), 27);
}

void digitOne(long offset, int colour){
    stripClock.fill(colour, (0 + offset), 9);
    stripClock.fill(colour, (36 + offset), 9);
}

void digitTwo(long offset, int colour){
    stripClock.fill(colour, (0 + offset), 18);
    stripClock.fill(colour, (27 + offset), 9);
    stripClock.fill(colour, (45 + offset), 18);
}

void digitThree(long offset, int colour){
    stripClock.fill(colour, (0 + offset), 18);
    stripClock.fill(colour, (27 + offset), 27);
}

void digitFour(long offset, int colour){
    stripClock.fill(colour, (0 + offset), 9);
    stripClock.fill(colour, (18 + offset), 27);
}

void digitFive(long offset, int colour){
    stripClock.fill(colour, (9 + offset), 45);
}

void digitSix(long offset, int colour){
    stripClock.fill(colour, (9 + offset), 54);
}

void digitSeven(long offset, int colour){
    stripClock.fill(colour, (0 + offset), 18);
    stripClock.fill(colour, (36 + offset), 9);
}

void digitEight(long offset, int colour){
    stripClock.fill(colour, (0 + offset), 63);
}

void digitNine(long offset, int colour){
    stripClock.fill(colour, (0 + offset), 45);
}
