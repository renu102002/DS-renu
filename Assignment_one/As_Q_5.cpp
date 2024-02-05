// Bubble Sort:

// Advantages:
//    Simplicity: Bubble sort provides a simple and easily understandable implementation.
//    In-Place Sorting: This algorithm operates in-place, utilizing only a constant amount of additional memory.

// Disadvantages:
//    Inefficiency: Due to poor time complexity, bubble sort becomes less efficient for larger datasets compared to more advanced algorithms like quicksort and mergesort.
//    O(n^2) Time Complexity: In the worst-case scenario, bubble sort exhibits a time complexity of O(n^2), making it less suitable for handling large datasets.

// Scenarios for Use:
// Bubble sort is suitable for small datasets or situations where simplicity is prioritized over efficiency. Its adaptive nature allows it to perform well in nearly sorted arrays.

// Quicksort:

// Advantages:
//    Efficiency: Boasting an excellent average-case time complexity of O(n log n), quicksort excels in sorting large datasets.
//    In-Place Sorting: It can be implemented to sort the array in-place, requiring only a logarithmic amount of additional memory.
//    Adaptability: Quicksort adapts effectively to nearly sorted arrays and maintains high efficiency in practice.

// Disadvantages:
//    Not Stability: Quicksort lacks stability, meaning it may alter the relative order of equal elements.
//    Worst-Case Time Complexity: While its average-case time complexity is commendable, the worst-case time complexity can be O(n^2), although this is rare with good pivot selection strategies.

// Scenarios for Use:
// Quicksort is ideal for large datasets or scenarios demanding high performance. Its efficiency makes it a common choice across various applications.

// Mergesort:

// Advantages:
//    Stability: Mergesort is a stable sorting algorithm, preserving the relative order of equal elements.
//    Predictable Performance: It maintains a consistent time complexity of O(n log n) regardless of input data, making it suitable for scenarios where predictable performance is crucial.
//    Parallelizability: Mergesort is easily parallelized, enabling efficient sorting on multi-core or distributed systems.

// Disadvantages:
//    Additional Space: The algorithm requires extra memory proportional to the input array's size, making it less suitable for memory-constrained environments.

// Scenarios for Use:
// Mergesort is well-suited for scenarios demanding stable sorting and consistent performance. It often finds application in external sorting for large files that exceed available memory capacity.
