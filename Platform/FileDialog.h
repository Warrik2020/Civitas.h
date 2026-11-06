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
        void* OpenPng(const char* title) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(title ? title : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallStatic("OpenPng", __callArgs, 1); }
    };
}
