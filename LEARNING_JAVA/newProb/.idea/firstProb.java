import java.math.BigInteger;
import java.util.ArrayList;

// Press Shift twice to open the Search Everywhere dialog and type `show whitespaces`,
// then press Enter. You can now see whitespace characters in your code.
public class Main {


    public static void main(String[] args) {

        BigInteger p = new BigInteger("10007");

        BigInteger g = new BigInteger("5");

        BigInteger x= new BigInteger("3");
        BigInteger y= g.modPow(x,p);

        BigInteger r = new BigInteger("2");
        BigInteger c1= g.modPow(r,p);
        BigInteger m = new BigInteger("24");
        BigInteger c2 = (m.multiply(y.pow(r.intValue()))).mod(p);


        BigInteger t = c1.pow(x.intValue());

        c1 = t.modPow(p.subtract(new BigInteger("2")),p);

        BigInteger m1 = (c2.multiply(c1)).mod(p);

        System.out.println(m1);

        BigInteger w = new BigInteger("3");
        BigInteger c11= g.modPow(r.multiply(w),p);
        BigInteger c22 = ((m.pow(w.intValue())).multiply(y.pow((r.multiply(w)).intValue()))).mod(p);



        BigInteger t11 = c11.pow(x.intValue());

        c11 = t11.modPow(p.subtract(new BigInteger("2")),p);

        BigInteger m11 = (c22.multiply(c11)).mod(p);

        System.out.println(""+m1.pow(w.intValue()).mod(p)+" "+m11);




    }
}