# All-Assignment-Collection
## Student Information
- **Name**: Natnael Girma
- **Student ID**: 0425/23
- **Course**: DSA

# Individual Assignment One

## Smaller-Number-In-Array
## Algorithm
1. Initialize the smallest number with the first element of the array.
2. Iterate through the array starting from the second element.
3. Compare each element with the current smallest number.
4. Update the smallest number if a smaller element is found.
5. Return the smallest number after checking all elements.

## The-second-largest-number
## Algorithm
1. Initialize two variables, largest and secondLargest, with the smallest possible integer value (e.g., INT_MIN).
2. Iterate through the array.
3. For each element:
   - If the element is greater than largest, update secondLargest to the old largest, and then update largest to the current element.
   - If the element is less than largest but greater than secondLargest, update secondLargest.
4. Return secondLargest after iterating through the entire array.

# Individual Assignment two

## Pointer-Sorting-Algorithm-using-Insertion-Sort-
## Algorithm
- Function Definition:
The insertionSort function takes an array (arr[]) and its size (n) as arguments.
It iterates through the array starting from the second element (index 1).
-Key Element:
For each element (arr[i]), it is compared to the elements before it.
This element (key) is temporarily stored, and a pointer (ptr) is created to refer to it
- Shifting Larger Elements:
The algorithm shifts elements that are larger than the key element to the right. This "shifting" happens in the inner while loop: while (j >= 0 && arr[j] > key).
- Placing the Key Element:
Once the correct position is found for the key element, it is inserted in the correct position, and the next element is processed.
- Helper Function pr:
The pr function is used to print the array before and after sorting.
## Time Complexity:

- **Best Case**: O(n) when the array is already sorted. In this case, only the outer loop runs, and the inner loop doesn't perform any shifts.
- **Worst Case**: O(n²) when the array is sorted in reverse order. Each element will need to be compared with all previously sorted elements.
- **Average Case**: O(n²) for random data, because every element might require shifting.
  
## Summary:

- Insertion Sort works by building up a sorted section of the array one element at a time.
- The use of pointers here (*ptr = &arr[i]) demonstrates how pointers can be used to access and modify elements in the array.
- This implementation works well for small to moderately sized datasets but is inefficient for large datasets due to its O(n²) time complexity.

## pointer-sorting-algorithm-using-bubble
# Complexity Analysis:
# Time Complexity:
- **Best Case (Already Sorted): O(n)**: — In this case, the algorithm only needs to traverse the array once without making any swaps. This can be achieved with an optimized version that stops if no swaps occur in a pass, but the provided implementation does not have this -optimization, so it would still run in O(n^2).
- **Average Case: O(n²)**: — In most cases, Bubble Sort needs to compare and potentially swap adjacent elements for every pair of elements in the array.
- **Worst Case (Array in Reverse Order): O(n²)**: — The worst case occurs when the array is in reverse order, and every pair of elements needs to be swapped
# Space Complexity:
- **Space Complexity: O(1)**: — The algorithm sorts the array in place, so it does not require any additional space aside from a few temporary variables (such as i, j, and the swap).
### Performance Summary:
In the C++ code above:
- **Best case**: If the array is already sorted or nearly sorted, the algorithm might complete in less time, but it is still O(n²) in the absence of early stopping optimizations.
- **Average and worst cases**: The algorithm performs a quadratic number of comparisons and swaps, leading to a time complexity of O(n²).
- **Memory Usage**: The space complexity is O(1) as it sorts in place.
# Individual Assignment Three
## Complexity Analysis
### Time Complexity:
- Both iterative and recursive binary search have a time complexity of O(log(n)), where n is the number of elements in the array. This is because the search space is halved - with each iteration or recursive call.
## Space Complexity:
- Iterative Approach: O(1) because it uses a fixed amount of space.
- Recursive Approach: O(log(n)) due to the call stack used for recursive calls.
## Summary
The iterative approach is typically more efficient in terms of space and may be faster due to the absence of function call overhead.
The recursive approach can be more intuitive and cleaner for problems that naturally fit recursion.
Both approaches yield the same time complexity for binary search, but differ in space complexity, with iterative being more favorable for larger datasets.
