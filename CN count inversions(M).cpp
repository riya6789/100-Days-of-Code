int modifiedMerge(vector<int>& a, vector<int>& temp, int left, int mid, int right)
{
    int inversionCount = 0;
    int i = left, j = mid, k = left;
    while ((i <= mid - 1) and (j <= right)) {
        if (a[i] <= a[j]) {
            temp[k] = a[i];
            k++, i++;
        }
        else
        {
            temp[k] = a[j];
            k++, j++;
            inversionCount = inversionCount + (mid - i);
        }
    }
    while (i <= mid - 1) {
        temp[k] = a[i];
        k++, i++;
    }
    while (j <= right) {
        temp[k] = a[j];
        k++, j++;
    }
    for (i = left ; i <= right ; i++)
        a[i] = temp[i];
    
    return inversionCount;
}

int modifiedMergeSort(vector<int>& a, vector<int>& temp, int left, int right)
{
    int mid, inversionCount = 0;
    if (right > left)
    {
        mid = (left + right) / 2;

        // Sort the left half.
        inversionCount += modifiedMergeSort(a, temp, left,
                                            mid);

        // Sort the right half.
        inversionCount += modifiedMergeSort(a, temp, mid + 1,
                                            right);

        // Merge both the halves and count the number of
        // inversions.
        inversionCount += modifiedMerge(a, temp, left, mid +
                                        1, right);
    }

    // Return the 'inversionCount'.
    return inversionCount;
}

int numberOfInversions(vector<int>&a, int n) {

    int answer = 0;

    // Initialize an array 'temp' of length 'N'.
    vector<int>temp(n);

    // Call Merge Sort and store the answer.
    answer = modifiedMergeSort(a, temp, 0, n - 1);

    // Return the 'answer' here.
    return answer;
}
