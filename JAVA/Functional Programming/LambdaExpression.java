//package inputOutput;

interface Average {
    public int average(int a, int b);

}

public class LambdaExpression {
    public static void main(String[] args) {
        Average Ag = (a, b) -> {return (a + b)/2 ;};
        int b = Ag.average(5,5);
        System.out.println(b);
    }
}
