#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Llm
{
    class Win32Job : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Win32Job(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Llm", "Win32Job") {}
    public:
        void* TryCreate() const { return CallStatic("TryCreate", nullptr, 0); }
        bool Assign(void* p) const { void* __callArgs[] = { p }; return CallValue<bool>("Assign", __callArgs, 1); }
        void Dispose() const { Call("Dispose", nullptr, 0); }
    };
}
