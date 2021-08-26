//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("D:\TPG\TPG201T_FinSummAsst_1_SD\TPG201T_FinSummAsst_1_SD\DMUnit.cpp", DMod); /* TDataModule: File Type */
USEFORM("D:\TPG\TPG201T_FinSummAsst_1_SD\TPG201T_FinSummAsst_1_SD\frmExamSectionAUnit.cpp", frmExamFinSumAsses1);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->CreateForm(__classid(TfrmExamFinSumAsses1), &frmExamFinSumAsses1);
		Application->CreateForm(__classid(TDMod), &DMod);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
