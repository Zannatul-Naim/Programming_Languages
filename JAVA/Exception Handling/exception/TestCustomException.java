package exception;

public class TestCustomException {
    static void checkAgeRestriction(int age) throws InvalidAgeException {
        if(age < 18) {
            throw new InvalidAgeException("Age Restricted");
        }
        else {
            System.out.println("Successfully Granted!");
        }
    }

    public static void main(String[] args) {
        try {
            checkAgeRestriction(9);
        } catch (InvalidAgeException e) {
            e.printStackTrace();
        }
        System.out.println("Rest of the code");
    }
}
