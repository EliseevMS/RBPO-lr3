module BPZ1902.Eliseev.Lab3.Task3;


namespace RBPO {
	namespace Lab3 {
		namespace Task3 {
			double a(int i) {
				return (pow(-1.0, i) * (1 - (i + 1) * (i + 1) / (double)((i + 2) * (i + 2))));
			}
		}
	}
}