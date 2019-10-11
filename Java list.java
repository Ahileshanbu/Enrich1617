import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */

        ArrayList <Integer> list = new ArrayList <Integer> ();

        Scanner sc = new Scanner (System.in);

        int num = sc.nextInt();

        for(int i = 0 ; i< num;i++)
        {
            list.add(sc.nextInt());
        }

        int test = sc.nextInt();

        while(test!=0)
        {
            String str = sc.next();
            if(str.equals("Insert"))
            {
                int index = sc.nextInt();
                int value = sc.nextInt();
                list.add(index,value);
            }
            else
            {
                int index = sc.nextInt();
                list.remove(index);
            }
            test--;
        }
        Iterator <Integer> itr = list.iterator ();

        while(itr.hasNext())
        {
            System.out.print(itr.next()+" ");
        }
        sc.close();
    }
}

