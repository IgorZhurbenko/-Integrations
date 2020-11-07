// pch.cpp: файл исходного кода, соответствующий предварительно скомпилированному заголовочному файлу

#include "pch.h"
#include "MathLibrary.h"

namespace NetCPPLibrary {
	public ref class CPPClass
	{
	public: const int Constant = 5;
		  unsigned long Factorial(int a)
		  {
			  return 0;
		  }
	};
};
// При использовании предварительно скомпилированных заголовочных файлов необходим следующий файл исходного кода для выполнения сборки.
