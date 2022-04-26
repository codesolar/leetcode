// { Driver Code Starts
//Initial Template for Java

import java.util.*;
import java.lang.*;
import java.io.*;

class pair  
{  
    long first, second;  
    public pair(long first, long second)  
    {  
        this.first = first;  
        this.second = second;  
    }  
}

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
            
            Compute obj = new Compute();
            pair product = obj.getMinMax(a, n); 
            System.out.println(product.first+" "+product.second);
            
        }
	}
}

// } Driver Code Ends


//User function Template for Java

/*
 class pair  
{  
    long first, second;  
    public pair(long first, long second)  
    {  
        this.first = first;  
        this.second = second;  
    }  
} */

class Compute 
{
    static pair getMinMax(long a[], long n)  
    {
        //Write your code here
        
        return get(a,0,(int)n-1);
        
    }
    static pair get(long a[],int l,int r){
        if(l==r)
        return new pair(a[l],a[r]);
        else if(r==l+1){
            long max=Math.max(a[l],a[r]);
            long min=a[l]+a[r]-max;
            return new pair(min,max);
        }
        else if(r>l+1){
            int mid=r+(l-r)/2;
            long max=0,min=0;
            pair p1=get(a,l,mid);
            pair p2=get(a,mid+1,r);
            max=Math.max(p1.second,p2.second);
            min=Math.min(p1.first,p2.first);
            return new pair(min,max);
        }
        return new pair(0,0);
    }
}
