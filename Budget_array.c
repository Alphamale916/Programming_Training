/*
You are a software developer working on an e-commerce platform. The platform has a feature that allows users to filter products based on their prices. One of the requirements is to find the "Best Deal," which is defined as the smallest range of consecutive product prices that sums up to at least a certain budget.
Problem Statement:
Given an array of positive integers prices where each integer represents the price of a product, and a positive integer budget, write a function to find the minimal length of a subarray (a contiguous sequence of elements) whose sum is greater than or equal to the budget. If no such subarray exists, return 0.
Example 1:
Input:
prices = [10, 20, 30, 40, 50]
budget = 70
Output: 2
Explanation: The subarray [30, 40] sums to 70 and is the smallest such subarray.
Example 2:
Input:
prices = [5, 10, 15, 20, 25]
budget = 60
Output: 3
Explanation: The subarray [15, 20, 25] sums to 60 and is the smallest such subarray.
Example 3:
Input:
prices = [1, 2, 3, 4, 5]
budget = 20
Output: 0
Explanation: No subarray sums to at least 20.


*/

#include <stdio.h>
#include <stdlib.h>

int length(int arr[],int n,int budget){
    int start=0,end=0,sum=0,min_len=143;
    
    while(end < n){
        sum+=arr[end];
        
        while(sum >= budget){
             if ((end - start + 1) < min_len) {
                min_len = end - start + 1;
            }
            sum -= arr[start];
            start++;   
        }
        end++;
    }
    return(min_len==143)? 0:min_len;
    
}

int main()
{
    int n,budget;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    
    int arr[n];
    printf("Enter the elements of the array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("Enter the Budget:");
    scanf("%d",&budget);
    
    int result=length(arr,n,budget);
    printf("%d",result);
    

    return 0;
}
