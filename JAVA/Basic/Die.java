//package Loop;

import java.util.Random;

public class Die {
    private int sides;
    private Random generator;
    public Die(int s) {
        sides = s;
        generator = new Random();
    }

    public int cast() {
        return 1 + generator.nextInt(6);
    }
}
