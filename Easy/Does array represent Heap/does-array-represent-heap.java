//{ Driver Code Starts
//Initial Template for Java

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main(String[] args) throws IOException
	{
	        BufferedReader br =
            new BufferedReader(new InputStreamReader(System.in));
        int t =
            Integer.parseInt(br.readLine().trim()); // Inputting the testcases
        while(t-->0)
        {
            long n = Long.parseLong(br.readLine().trim());
            long a[] = new long[(int)(n)];
            // long getAnswer[] = new long[(int)(n)];
            String inputLine[] = br.readLine().trim().split(" ");
            for (int i = 0; i < n; i++) {
                a[i] = Long.parseLong(inputLine[i]);
            }
            
            Solution obj = new Solution();
            System.out.println(obj.countSub(a, n) ? 1:0);
            
        }
	}
}


// } Driver Code Ends


//User function Template for Java


class Solution {
    
    public boolean countSub(long arr[], long n)
    {
        // Your code goes here
        int j=0; 
        for(int i=0; i<arr.length; i++){
            long ch = arr[i];
            long ch1 = (i+j+1<arr.length)?arr[i+j+1]:Integer.MIN_VALUE;
            long ch2 = (i+j+2<arr.length)?arr[i+j+2]:Integer.MIN_VALUE;
            
            if(!(ch>=ch1 && ch>=ch2))return false;
            j++;
        }
        return true;
    }
}