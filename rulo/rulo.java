import java.util.Arrays;
import java.util.Scanner;
import java.util.IntSummaryStatistics;

public class rulo {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("gir");
		String myLine = sc.nextLine();
		sc.close();	
		String[] str = myLine.split(" ");
		int[] intarray = new int[str.length];
		
		for(int i =0; i<str.length;i++)
	    {
	        intarray[i]= Integer.parseInt(str[i]);// Parsing from string to int

	    }
		
		IntSummaryStatistics stat = Arrays.stream(intarray).summaryStatistics();
        int max = stat.getMax();
        int num = 0;
        for(int i=0; i<intarray.length;i++) {
        	if(intarray[i]==max) {
        		num++;
        	}
        }
        System.out.println(num);
	}

}
