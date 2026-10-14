import java.util.Scanner;

public class StudentResults {
    public static void main(String[] args) {
        final int SIZE = 5;
        int[] marks = new int[SIZE];
        int total = 0;
        Scanner in = new Scanner(System.in);

        System.out.println("STUDENT RESULT MANAGEMENT SYSTEM");
        System.out.println("Enter marks for " + SIZE + " students (0-100).\n");

        for (int i = 0; i < SIZE; i++) {
            System.out.print("Enter mark for student " + (i + 1) + ": ");
            while (true) {
                if (in.hasNextInt()) {
                    marks[i] = in.nextInt();
                    if (marks[i] >= 0 && marks[i] <= 100) break;
                } else {
                    in.next();
                }
                System.out.print("Invalid input. Enter a whole number from 0 to 100: ");
            }
        }

        int highest = marks[0], lowest = marks[0];
        for (int m : marks) {
            total += m;
            if (m > highest) highest = m;
            if (m < lowest) lowest = m;
        }
        double average = (double) total / SIZE;

        System.out.println("\n--- STUDENT RESULTS ---");
        for (int i = 0; i < SIZE; i++) {
            System.out.println("Student " + (i + 1) + ": " + marks[i] + " - "
                + (marks[i] >= 50 ? "Pass" : "Fail"));
        }

        System.out.println("\nTotal marks: " + total);
        System.out.printf("Average mark: %.2f%n", average);
        System.out.println("Highest mark: " + highest);
        System.out.println("Lowest mark: " + lowest);
    }
}
