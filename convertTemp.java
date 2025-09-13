import java.util.Scanner;

public class convertTemp {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        double celcius = sc.nextDouble();

        double fahrenheit, kelvin;

        kelvin = celcius * 1.80 + 32.00;
        fahrenheit = celcius + 273.15;

        System.out.println(fahrenheit + " " + kelvin);

    }

}
