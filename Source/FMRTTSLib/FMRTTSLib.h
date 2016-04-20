// FMRTTSLibrary.h

namespace FMRTTSLib
{
	class FMRTTSLibMain
	{
	public:
		static char* GeneratePCMData(wchar_t* textToRender, unsigned long* bytesRead);

	private:
		static void testHr(HRESULT hr);
	};
}