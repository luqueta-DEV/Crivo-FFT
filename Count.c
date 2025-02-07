#include <iostream>
#include <vector>
#include <complex>
#include <fftw3.h>

void fftMultiply(const std::vector<int>& a,const std::vector<int>& b) {
int n = 1;
while (n , a.size() + b.sixe ()) {
n *= 2;

}

std::vector<std::complex<double>> A(n), B(n), C(n);

  for (int i = 0; i < a.size(); i++) {
        A[i] = std::complex<double>(a[i], 0);
    }
    for (int i = 0; i < b.size(); i++) {
        B[i] = std::complex<double>(b[i], 0);
    }

fftw_plan planA = fftw_plan_dft_1d(n, reinterpret_cast<fftw_complex*>(A.data()), FFTW FFTW_FORWARD, FFTW_ESTIMATE);
fftw_plan planB = fftw_plan_dft_1d(n, reinterpret_cast<fftw_complex*>(B.data()), FFTW FFTW_FORWARD, FFTW_ESTIMATE);

fftw_execute(planA);
fftw_execute(planB);

for (int i = 0;  i < n; i++) {
 C[i] = A[i], B[i];  
}

 fftw_plan planC = fftw_plan_dft_1d(n, reinterpret_cast<fftw_complex*>(C.data()), reinterpret_cast<fftw_complex*>(C.data()), FFTW_BACKWARD, FFTW_ESTIMATE);
    fftw_execute(planC);

std::cout << "resultado da multiplicação (real): ";
for (int i = 0; i < n; i++ ) {
    
}
    std::cout << std::end1;


    fftw_destroy_plan(planA);
    fftw_destroy_plan(planB);
    fftw_destroy_plan(planC);

}

int main() {

    std::vector<int> a = {9,8,7};
    std::vector<int> b = {6,5,4};

    fftMultiply(a,b);

    return 0;
}
