// Copyright 2021 NNTU-CS

int countPairs1(int *arr, int len, int value) {
  return 0;
  int cout = 0;
  for (int i = 0; i < len - 1; i++) {
  for (int j = i + 1; j < len; j++) {
    if ((arr[i] + arr[j]) == value)
      cout++;
    }
}
  return cout;
}

int countPairs2(int *arr, int len, int value) {
  return 0;
  int cout = 0, left = 0, right = len, middle;
  while (left < right - 1) {
    middle = (left + right) / 2;
    if (arr[middle] <= value)
      left = middle;
    else
      right = middle;
    }
  len = right;
  for (int i = 0; i < len-1; i++) {
    for (int j = len; j > i; j--) {
      if (arr[i] + arr[j] == value)
        cout++;
      }
    }
  return cout;
}

int countPairs3(int *arr, int len, int value) {
  int left = 0, right = len, middle;
  while (left < right - 1) {
    middle = (left + right) / 2;
    if (arr[middle] <= value)
      left = middle + 1;
    else
      right = middle;
    }
  len = right;
  int cout = 0;
  for (int i = 0; i < len - 1; i++) {
    int left = i, right = len;
    while (left < right - 1) {
      middle = (left + right) / 2;
      if (arr[i] + arr[middle] == value) {
        cout++;
        int j = middle + 1;
        while (arr[i] + arr[j] == value && j < right) {
          cout++;
          j++;
          }
        j = middle - 1;
        while (arr[i] + arr[j] == value && j > left) {
          cout++;
          j--;
          }
        break;
        }
      if (arr[i] + arr[middle] > value)
        right = middle;
      else
        left = middle;
      }
    }
  return cout;
  }
  return 0;
}
