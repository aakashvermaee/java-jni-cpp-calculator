import static java.lang.System.out;

public class CalculatorJNI {

  public CalculatorJNI() {
    super();
  }

  static {
    // Load native library at runtime hello.dll (Windows) or libhello.so (Unixes)
    System.loadLibrary("calculator");
  }

  // Declare a native method sayHello() that receives nothing and returns void
  private native double addition(double num1, double num2);
  private native double substraction(double num1, double num2);
  private native double multiplication(double num1, double num2);
  private native double division(double num1, double num2);

  // Test Driver
  public static void main(String[] args) {
    CalculatorJNI calculatorJNI = new CalculatorJNI();
    double num1 = 0, num2 = 0;
    num1 = Double.parseDouble(args[0]);
    num2 = Double.parseDouble(args[1]);

    out.println("Add: " + calculatorJNI.addition(num1, num2));
    out.println("Sub: " + calculatorJNI.substraction(num1, num2));
    out.println("Pro: " + calculatorJNI.multiplication(num1, num2));
    out.println("Div: " + calculatorJNI.division(num1, num2));
  }
}
