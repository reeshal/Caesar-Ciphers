import java.util.Scanner;
public class Caesar {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc= new Scanner(System.in);
		
		String word;
		System.out.println("Enter your text:");
		word=sc.nextLine();
		System.out.println("Enter the number of letters by which you want to shift:");
		int x=sc.nextInt();
		String alpha= "abcdefghijklmnopqrstuvwxyz";
		
		for(int i=0; i<word.length();i++)
		{
			if((int)(word.charAt(i)) ==32)
			{
				System.out.print(" ");
			}
			else
			{
			System.out.print(alpha.charAt((alpha.indexOf(word.charAt(i))+x)%26));
			}
		}
	sc.close();	
	}

}
