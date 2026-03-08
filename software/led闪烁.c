void delay(unsigned int ms) {
    unsigned int i, j;
    for(i = 0; i < ms; i++) {
        for(j = 0; j < 120; j++) {  // 这个数值需要根据实际单片机频率调整
            // 空循环
        }
    }
}