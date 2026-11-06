#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Platform
{
    class FileDialog : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FileDialog(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Platform", "FileDialog") {}
    public:
        void* OpenPng(const char* title) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(title ? title : "") : nullptr; void* args[] = { managed_0 }; return CallStatic("OpenPng", args, 1); }
        int lStructSize() const { return ReadField<int>("lStructSize"); }
        void SetLStructSize(int value) const { WriteField<int>("lStructSize", value); }
        void* hwndOwner() const { return ReadField<void*>("hwndOwner"); }
        void SetHwndOwner(void* value) const { WriteField<void*>("hwndOwner", value); }
        void* hInstance() const { return ReadField<void*>("hInstance"); }
        void SetHInstance(void* value) const { WriteField<void*>("hInstance", value); }
        void* lpstrFilter() const { return ReadField<void*>("lpstrFilter"); }
        void SetLpstrFilter(void* value) const { WriteField<void*>("lpstrFilter", value); }
        void* lpstrCustomFilter() const { return ReadField<void*>("lpstrCustomFilter"); }
        void SetLpstrCustomFilter(void* value) const { WriteField<void*>("lpstrCustomFilter", value); }
        int nMaxCustFilter() const { return ReadField<int>("nMaxCustFilter"); }
        void SetNMaxCustFilter(int value) const { WriteField<int>("nMaxCustFilter", value); }
        int nFilterIndex() const { return ReadField<int>("nFilterIndex"); }
        void SetNFilterIndex(int value) const { WriteField<int>("nFilterIndex", value); }
        void* lpstrFile() const { return ReadField<void*>("lpstrFile"); }
        void SetLpstrFile(void* value) const { WriteField<void*>("lpstrFile", value); }
        int nMaxFile() const { return ReadField<int>("nMaxFile"); }
        void SetNMaxFile(int value) const { WriteField<int>("nMaxFile", value); }
        void* lpstrFileTitle() const { return ReadField<void*>("lpstrFileTitle"); }
        void SetLpstrFileTitle(void* value) const { WriteField<void*>("lpstrFileTitle", value); }
        int nMaxFileTitle() const { return ReadField<int>("nMaxFileTitle"); }
        void SetNMaxFileTitle(int value) const { WriteField<int>("nMaxFileTitle", value); }
        void* lpstrInitialDir() const { return ReadField<void*>("lpstrInitialDir"); }
        void SetLpstrInitialDir(void* value) const { WriteField<void*>("lpstrInitialDir", value); }
        void* lpstrTitle() const { return ReadField<void*>("lpstrTitle"); }
        void SetLpstrTitle(void* value) const { WriteField<void*>("lpstrTitle", value); }
        int Flags() const { return ReadField<int>("Flags"); }
        void SetFlags(int value) const { WriteField<int>("Flags", value); }
        int16_t nFileOffset() const { return ReadField<int16_t>("nFileOffset"); }
        void SetNFileOffset(int16_t value) const { WriteField<int16_t>("nFileOffset", value); }
        int16_t nFileExtension() const { return ReadField<int16_t>("nFileExtension"); }
        void SetNFileExtension(int16_t value) const { WriteField<int16_t>("nFileExtension", value); }
        void* lpstrDefExt() const { return ReadField<void*>("lpstrDefExt"); }
        void SetLpstrDefExt(void* value) const { WriteField<void*>("lpstrDefExt", value); }
        void* lCustData() const { return ReadField<void*>("lCustData"); }
        void SetLCustData(void* value) const { WriteField<void*>("lCustData", value); }
        void* lpfnHook() const { return ReadField<void*>("lpfnHook"); }
        void SetLpfnHook(void* value) const { WriteField<void*>("lpfnHook", value); }
        void* lpTemplateName() const { return ReadField<void*>("lpTemplateName"); }
        void SetLpTemplateName(void* value) const { WriteField<void*>("lpTemplateName", value); }
        void* pvReserved() const { return ReadField<void*>("pvReserved"); }
        void SetPvReserved(void* value) const { WriteField<void*>("pvReserved", value); }
        int dwReserved() const { return ReadField<int>("dwReserved"); }
        void SetDwReserved(int value) const { WriteField<int>("dwReserved", value); }
        int flagsEx() const { return ReadField<int>("flagsEx"); }
        void SetFlagsEx(int value) const { WriteField<int>("flagsEx", value); }
    };
}
