module BPZ1902.Eliseev.Lab3.Task3;

namespace RBPO {
	namespace Lab3 {
		namespace Task3 {
			double f2(double x) {
				if (x > 3) return (sin(x) / (x * x - 9));
				else return (x * x + 3 * x + 9);
			}
		}
	}
}