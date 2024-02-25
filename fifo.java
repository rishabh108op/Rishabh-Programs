import java.util.HashSet;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;
class Test
{
	static int pageFaults(int pages[], int n, int capacity)
	{
		HashSet<Integer> s = new HashSet<>(capacity);
		Queue<Integer> indexes = new LinkedList<>() ;
		int page_faults = 0;
		for (int i=0; i<n; i++)
		{
			if (s.size() < capacity)
			{
				if (!s.contains(pages[i]))
				{
					s.add(pages[i]);
					page_faults++;
					indexes.add(pages[i]);
				}
			}
			else
			{
				if (!s.contains(pages[i]))
				{
					int val = indexes.peek();
					indexes.poll();
					s.remove(val);
					s.add(pages[i]);
					indexes.add(pages[i]);
					page_faults++;
				}
			}
		}
		return page_faults;
	}
    
    public static void main(String args[])
	{
        int n;
        System.out.println("Enter total number of pages: ");
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        int pages[]=new int[n];
        System.out.println("Enter the pages: ");
        for(int i=0;i<n;i++)
        {
            pages[i]=sc.nextInt();
        }
        System.out.println("Enter memory Frames: ");
        int capacity=sc.nextInt();
		System.out.println(pageFaults(pages,n,capacity));
	}
}
