class Solution {
public:
    double angleClock(int hour, int minutes) {
        double minuteAngle = minutes * 6;
        double hourAngle  = ((hour==12?0:hour) * 30) + (0.5 * minutes);

        return min(abs(minuteAngle - hourAngle), 360 - abs(minuteAngle - hourAngle));
    }
};