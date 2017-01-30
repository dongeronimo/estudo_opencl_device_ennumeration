#include "DeviceEnumerator.h"
#include <CL\cl.h>
namespace geronimo
{
	int DeviceEnumerator::GetNumberOfPlatforms()
	{
		cl_uint num = 0;
		clGetPlatformIDs(0, NULL, &num);//retorna o numero de platforms.
		return num;
	}

	DeviceEnumerator::DeviceEnumerator()
	{
		numberOfPlatforms = GetNumberOfPlatforms();
	}
}