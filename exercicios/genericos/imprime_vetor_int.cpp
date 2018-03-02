using namespace std;

void imprimeVetorInt(int *arr, size_t n){
  // int n = sizeof(arr) / sizeof(int);
  if(n > 0){
    cout << "\n\t Número de posições: " << n << endl;

    for(int i = 0;i < n;i++){
      cout << "\n\t" << arr[i] << endl;
    }
  }

  return;
}
