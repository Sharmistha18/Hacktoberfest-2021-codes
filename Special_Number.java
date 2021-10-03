import java.util.*;
public class Special_Number
{
    public static void main(String args[])
    {
        int num, main_num, rem, i, sum=0;
        Scanner sc = new Scanner(System.in);
        System.out.println(" Enter The Number : ");
        num = sc.nextInt();
        main_num = num;
        while(num>0)
        {
            rem = num%10;
            int f = 1;
            for (i = rem; i>0; i--)
            {
                f= f*i;
            }
            sum = sum+f;
            num = num/10;
        }
        if(main_num==sum)
        {
            System.out.println("The Number is A Special Number");
        }
        else
        {
            System.out.println("The Number is Not A Special Number");
        }
    }
}