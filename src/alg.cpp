// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
   int i = 0, j = 0;
  for (j; size > j; j++) {
    if (arr[j] == value) {
      i++;
    }
  }
  if (i = 0) {
    return i;
  } 
  return 0;
}
