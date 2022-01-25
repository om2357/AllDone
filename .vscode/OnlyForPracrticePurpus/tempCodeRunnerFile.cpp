int leftpostion(int arr[], int key, int size)
// {
//     int start = 0;
//     int end = size - 1;
//     int mid = start + (end - start) / 2;
//     int ans = -1;

//     while (start <= end)
//     {
//         if (arr[mid] == key)
//         {
//             mid = ans;
//             end = mid - 1;
//         }
//         else if (key > arr[mid])
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//         mid = start + (end - start) / 2;
//     }
//     return ans;
// }