// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  //  поместить сюда реализацию алгоритма
  return 0; // если ничего не найдено
  int cou = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] == value) {
      cou++;
    }
  }
  if (cou > 0) {
    return cou;
  } else { 
    return 0; 
  }
}
