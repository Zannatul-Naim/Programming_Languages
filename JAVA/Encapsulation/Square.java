// package disigningClasses;

public class Square {
    private int sideLength;
    private int area;
    public Square(int initialLength) {
        sideLength = initialLength;

    }
    public int getArea() {
        area = sideLength * sideLength;
        return area;
    }
    public void grow() {
        sideLength = 2 * sideLength;
    }

    public static void main(String[] args) {
        Square s = new Square(1);
        System.out.println(s.getArea());
        s.grow();
        System.out.println(s.getArea());
        s.grow();
        System.out.println(s.getArea());
    }
}
