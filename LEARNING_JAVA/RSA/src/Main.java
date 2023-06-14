import java.math.BigInteger;
import java.util.Scanner;

// Press Shift twice to open the Search Everywhere dialog and type `show whitespaces`,
// then press Enter. You can now see whitespace characters in your code.
public class Main {
    public static BigInteger invMod(BigInteger a,BigInteger m){
        a = a.mod(m);

        for(int i=1;;i++){
            BigInteger t1 = a.mod(m), t2 = new BigInteger(String.valueOf(i));
            t2 = t2.mod(m);
            t1 = t1.multiply(t2).mod(m);

            if(t1.equals(new BigInteger("1")))
                return new BigInteger(String.valueOf(i));
        }
    }

    public static void main(String[] args) {
        BigInteger p = new BigInteger("101");
        BigInteger q = new BigInteger("103");
        BigInteger n = p.multiply(q), m = p.subtract(new BigInteger("1")).multiply(q.subtract(new BigInteger("1")));
        // System.out.println(m.intValue());
        BigInteger a = new BigInteger("29"),b = invMod(a,m), x = new BigInteger("50");

        // Encryption
        BigInteger e = x.modPow(a,n);

        // Decryption
        BigInteger mm = e.modPow(b,n);

        System.out.println(mm.intValue());
    }
}