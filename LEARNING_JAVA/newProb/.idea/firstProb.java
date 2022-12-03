import java.util.*;
import java.math.BigInteger;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        BigInteger n = sc.nextBigInteger();
        int N = n.intValue();
        BigInteger[] ara = new BigInteger[N];
        BigInteger x;

        for(int i=0;i<N;i++){
            ara[i] = sc.nextBigInteger();
        }

        Arrays.sort(ara);

        x = ara[0].add(ara[1]);

        if(x.compareTo(ara[2]) < 0 ){
            System.out.println(ara[0].toString()+" "+ara[1].toString()+" "+ara[2].toString());
        }

        else{
            System.out.println("0 0 0");
        }
    }
}