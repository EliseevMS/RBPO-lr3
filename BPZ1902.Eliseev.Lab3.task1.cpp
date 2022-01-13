module BPZ1902.Eliseev.Lab3.Task1;


namespace RBPO {
	namespace Lab3{
		namespace Task1 {
			double f1(double x) {
				return cos(x) + cos(2 * x) + cos(6 * x) + cos(7 * x);
			}

			double f2(double x) {
				return (x > 3) ? (sin(x) / (x * x - 9)) : (x * x + 3 * x + 9);
			}

			double a(int i) {
				return (pow(-1.0, i) * (1 - (i + 1) * (i + 1) / (double)((i + 2) * (i + 2))));
			}

			double f3(int n) {
				double acc = 0.0;
				for (int i = 0; i <= n; i++) {
					acc += a(i);
				}
				return acc;
			}

			double f4(double eps) {
				double prev = a(0);
				double curr = a(1);
				double acc = prev + curr;
				for (int i = 2; abs(prev - curr) > eps; i++) {
					prev = curr;
					curr = a(i);
					acc += curr;
				}
				return acc;
			}
		}
	}
}