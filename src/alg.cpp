// Copyright 2021 NNTU-CS
int cbinsearch(int* arr, int size, int value) {
  int c = 0;
  int rt = size - 1;
  for ( int lt = 0; lt <= rt; ) {
      int mid = lt + (rt - lt) / 2;
      if ( arr[mid] == value ) {
          c++;
          int rt = mid - 1;
          for ( ; rt >= 0 && arr[rt] == value; rt-- )
              c++;

          rt = mid + 1;
          for ( ; rt < size && arr[rt] == value; rt++ )
              c++;

          return c;
      } else if ( arr[mid] < value ) {
          lt = mid + 1;
      } else {
          rt = mid - 1;
      }
  }
  if (c == 0) {
      return 0;
  }
  return c;
}
