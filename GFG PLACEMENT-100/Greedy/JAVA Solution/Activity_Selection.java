//Activity Selection
//https://practice.geeksforgeeks.org/problems/activity-selection-1587115620/1/


//Method-1 (Greedy Approach)
// { Driver Code Starts
import java.io.*; 
import java.util.*; 
import java.lang.*;

class Main
{
    public static void main (String[] args) throws IOException  
    {
        
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		//testcases
		int t = Integer.parseInt(br.readLine().trim());
		
		while(t-- > 0)
		{
		    String inputLine[] = br.readLine().trim().split(" ");
		    //size of array
		    int n = Integer.parseInt(inputLine[0]);
		    int start[] = new int[n];
		    int end[] = new int[n];
		    
		    //adding elements to arrays start and end
		    inputLine = br.readLine().trim().split(" ");
		    for(int i = 0; i < n; i++)
		     start[i] = Integer.parseInt(inputLine[i]);
		    
		    inputLine = br.readLine().trim().split(" ");
		    for(int i= 0; i < n; i++)
		      end[i] = Integer.parseInt(inputLine[i]);
		    
		    //function call
		    System.out.println(new Solution().activitySelection(start, end, n));
		}
    }
}

// } Driver Code Ends


class Solution
{
    //Function to find the maximum number of activities that can
    //be performed by a single person.
    
    static class Pair implements Comparable<Pair>{
        int start, end;
        Pair(int start, int end){
            this.start=start;
            this.end=end;
        }
        
        public int compareTo(Pair p){
            return this.end-p.end;
        }
    }
    
    
    public static int activitySelection(int start[], int end[], int n)
    {
        // add your code here
        ArrayList<Pair> arr = new ArrayList<>();
        for(int i=0;i<n;i++){
            Pair p= new Pair(start[i],end[i]);
            arr.add(p);
        }
        
        Collections.sort(arr);
        
        int res=1, prev=arr.get(0).end;
        for(int i=1;i<n;i++){
            if(arr.get(i).start > prev){
                res++;
                prev=arr.get(i).end;
            }
        }
        return res;
    }
}