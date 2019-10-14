import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        ArrayList <ArrayList<Integer>> list = new ArrayList< ArrayList<Integer>>();

        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        int i;
        for(i=0;i<num;i++)
        {
            int n = sc.nextInt();
            list.add(new ArrayList<Integer>());
            list.get(i).add(0,n);
            for(int j=1;j<=n;j++)
            {
                list.get(i).add(j,sc.nextInt());
            }
        }
        int n = sc.nextInt();
        while(n!=0)
        {
            int x = sc.nextInt();
            int y = sc.nextInt();
            if(list.get(x-1).get(0)>=y)
            {
                System.out.println(list.get(x-1).get(y));
            }
            else
            {
                System.out.println("ERROR!");
            }
            n--;
        }
        sc.close();
    }
}

