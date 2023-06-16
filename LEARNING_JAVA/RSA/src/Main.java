import java.math.BigInteger;
import java.util.Scanner;

// Press Shift twice to open the Search Everywhere dialog and type `show whitespaces`,
// then press Enter. You can now see whitespace characters in your code.
public class Main {
    public static BigInteger xx, yy;
    public static BigInteger egcd(BigInteger a, BigInteger b){
        if(a.equals(new BigInteger("0"))){
            xx = new BigInteger("0");
            yy = new BigInteger("1");

            return b;
        }

        BigInteger gcd = egcd(b.mod(a),a);
        BigInteger x1 = xx;
        BigInteger y1 = yy;

        xx = y1.subtract(b.divide(a).multiply(x1));
        yy = x1;

        return  gcd;
    }

    public static void main(String[] args) {
        BigInteger p = new BigInteger("35201546659608842026088328007565866231962578784643756647773109869245232364730066609837018108561065242031153677");
        BigInteger q = new BigInteger("10513733234846849736873637829838635104309714688896631127438692162131857778044158273164093838937083421380041997");
        BigInteger n = p.multiply(q), m = p.subtract(new BigInteger("1")).multiply(q.subtract(new BigInteger("1")));
        // System.out.println(m.intValue());
        BigInteger a = new BigInteger("29"),b = egcd(a,m), x = new BigInteger("50");
        b = xx.mod(m);
        b = b.add(m);
        b = b.mod(m);

        // Encryption
        BigInteger e = x.modPow(a,n);

        // Decryption
        BigInteger mm = e.modPow(b,n);

        System.out.println(mm.intValue());
    }
}