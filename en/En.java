import java.util.Scanner;

public class En {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int sum = 0;
        int minValue = Integer.MAX_VALUE;
        int maxValue = Integer.MIN_VALUE;

        for (int i=0; i<5; i++) {
            int number = sc.nextInt();
            sum += number;
            minValue = Math.min(minValue, number);
            maxValue = Math.max(maxValue, number);
        }

        sc.close();

        System.out.println((sum - maxValue) + " " + (sum - minValue));
    }
}