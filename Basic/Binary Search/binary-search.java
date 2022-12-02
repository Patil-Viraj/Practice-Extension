//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;

  public class GFG {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while (T > 0) {
            int n = sc.nextInt();
            int arr[] = new int[n];
            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
            }

            int key = sc.nextInt();
            Solution g = new Solution();
            System.out.println(g.binarysearch(arr, n, key));
            T--;
        }
    }
}

// } Driver Code Ends


// User function Template for Java

class Solution {
    int bin_search(int arr[], int left, int right, int k) {
        if (left > right) return -1;
        int mid = (left + right) / 2;
        if (arr[mid] == k) return mid;
        if (arr[mid] > k)
            return bin_search(arr, left, mid - 1, k);
        else
            return bin_search(arr, mid + 1, right, k);
    }
    int binarysearch(int arr[], int n, int k) {
        return bin_search(arr, 0, n - 1, k);
    }
}