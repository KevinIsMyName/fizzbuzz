public class fizzbuzz {

    public static void fizzBuzz(int N) {
        StringBuilder out;
        for (int i = 1; i <= N; i++) {
            out = new StringBuilder();
            if (i % 3 == 0) {
                out.append("Fizz");
            }
            if (i % 5 == 0) {
                out.append("Buzz");
            }
            System.out.println(out);
        }
    }

    public static void main(String[] args) {
        int N = Integer.parseInt(args[0]);
        fizzBuzz(N);
    }
}
