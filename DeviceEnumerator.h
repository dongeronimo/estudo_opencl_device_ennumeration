#pragma once
#using <System.dll> 
using namespace System;
namespace geronimo
{
	public ref class DeviceEnumerator
	{
	private:
		int numberOfPlatforms;
		int GetNumberOfPlatforms();
	public:
		DeviceEnumerator();

		int GetNumberOfPlaforms()
		{
			return numberOfPlatforms;
		}
	};
}