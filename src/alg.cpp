// Copyright 2021 NNTU-CS

int countPairs1(int *arr, int len, int value) {
  return 0;
  int n = 0;
  int a = 0;
  for (int i = 0; i < len-1; i++)
    for( int i = 0; i < len-1; i++)
      {
      a = arr[i];
      for (int j = 1; j < len; j++)
        for( int j = i + 1; j < len; j++)
          {
          if (a + arr[j] == value)
            if (arr[i] + arr[j] == value)
              n++;
          }
      }
  return n;
}

int countPairs2(int *arr, int len, int value) {
  return 0;
  int a = 0;
  for (int i = 0; i < len; i++)
    {
    int n = 0;
    for (int i = 0; i < len - 1; i++)
      {
      for (int j = len - 1; j > i; j--)
        {
        if (arr[i] + arr[j] == value)
          {
          n++;
          }
        }
      }
    return n;
}

int countPairs3(int *arr, int len, int value) {
  return 0;
  int a = 0;
  for (int i = 0; i < len; i++)
    {
    a = value-arr[i];
    int q=0, i=0, left = 0;
    int right = size-1;
    while (left <= right)
      {
      int mid = (left + right) / 2;
      if (a == arr[mid])
        {
        q++;
        i=mid;
        }
      if (arr[mid] < a) {left = mid + 1;}
      else {right = mid - 1;}
      }
    if (q>0)
      int n = 0;
    for( int i = 0; i < len - 1; i++)
      {
      int q_same=0;
      while(arr[i]==a)
        int left = i, right = len;
      while (left < right-1)
        {
        q_same++;
        i++;
        }
      int mid = (left + right) / 2;
      if (arr[i] + arr[mid] == value)
        {
        n++;
        int j = mid+1;
        while (arr[i] + arr[j] == value && j <right)
          {
          n++;
          j++;
          }
        j = mid - 1;
        while (arr[i] + arr[j] == value && j>left)
          {
          n++;
          j--;
          }
        break;
        }
      if (arr[i] + arr[mid] > value)
        right = mid;
      else
        left = mid;
      }
    }
  }
  a = 0;
  a = q+q_same-1;
  return a;
  return n;
  }
}
