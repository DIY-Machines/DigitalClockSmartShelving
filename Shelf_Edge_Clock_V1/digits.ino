void digitZero(int offset, int colour){
    stripClock.fill(colour, (0 + offset), 27);
    stripClock.fill(colour, (36 + offset), 27);
}

void digitOne(int offset, int colour){
    stripClock.fill(colour, (0 + offset), 9);
    stripClock.fill(colour, (36 + offset), 9);
}

void digitTwo(int offset, int colour){
    stripClock.fill(colour, (0 + offset), 18);
    stripClock.fill(colour, (27 + offset), 9);
    stripClock.fill(colour, (45 + offset), 18);
}

void digitThree(int offset, int colour){
    stripClock.fill(colour, (0 + offset), 18);
    stripClock.fill(colour, (27 + offset), 27);
}

void digitFour(int offset, int colour){
    stripClock.fill(colour, (0 + offset), 9);
    stripClock.fill(colour, (18 + offset), 27);
}

void digitFive(int offset, int colour){
    stripClock.fill(colour, (9 + offset), 45);
}

void digitSix(int offset, int colour){
    stripClock.fill(colour, (9 + offset), 54);
}

void digitSeven(int offset, int colour){
    stripClock.fill(colour, (0 + offset), 18);
    stripClock.fill(colour, (36 + offset), 9);
}

void digitEight(int offset, int colour){
    stripClock.fill(colour, (0 + offset), 63);
}

void digitNine(int offset, int colour){
    stripClock.fill(colour, (0 + offset), 45);
}
