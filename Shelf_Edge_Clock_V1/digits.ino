void digitZero(int offset, uint32_t colour){
    stripClock.fill(colour, (0 + offset), (3*LED_PER_SEG));
    stripClock.fill(colour, ((4*LED_PER_SEG) + offset), (3*LED_PER_SEG));
}

void digitOne(int offset, uint32_t colour){
    stripClock.fill(colour, (0 + offset), LED_PER_SEG);
    stripClock.fill(colour, ((4*LED_PER_SEG) + offset), LED_PER_SEG);
}

void digitTwo(int offset, uint32_t colour){
    stripClock.fill(colour, (0 + offset), (2*LED_PER_SEG));
    stripClock.fill(colour, ((3*LED_PER_SEG) + offset), LED_PER_SEG);
    stripClock.fill(colour, ((5*LED_PER_SEG) + offset), (2*LED_PER_SEG));
}

void digitThree(int offset, uint32_t colour){
    stripClock.fill(colour, (0 + offset), 14);
    stripClock.fill(colour, ((3*LED_PER_SEG) + offset), (3*LED_PER_SEG));
}

void digitFour(int offset, uint32_t colour){
    stripClock.fill(colour, (0 + offset), LED_PER_SEG);
    stripClock.fill(colour, ((2*LED_PER_SEG) + offset), (3*LED_PER_SEG));
}

void digitFive(int offset, uint32_t colour){
    stripClock.fill(colour, (LED_PER_SEG + offset), (5*LED_PER_SEG));
}

void digitSix(int offset, uint32_t colour){
    stripClock.fill(colour, (LED_PER_SEG + offset), (6*LED_PER_SEG));
}

void digitSeven(int offset, uint32_t colour){
    stripClock.fill(colour, (0 + offset), (2*LED_PER_SEG));
    stripClock.fill(colour, ((4*LED_PER_SEG) + offset), LED_PER_SEG);
}

void digitEight(int offset, uint32_t colour){
    stripClock.fill(colour, (0 + offset), (7*LED_PER_SEG));
}

void digitNine(int offset, uint32_t colour){
    stripClock.fill(colour, (0 + offset), (6*LED_PER_SEG));
}
